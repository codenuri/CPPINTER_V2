#include <cstdio>

class Base;
class Child;

void (*c_callback_print)(void*) = nullptr;
const char* (*c_callback_base_msg)(void*) = nullptr;
void (Child::*c_callback_child_print_well_behaved)(void) = nullptr;
void (*c_callback_child_print_naughty)(void*) = { nullptr };

class Base {
public:
	virtual void print() {
		puts("Base Class");
	}
	virtual const char* get_base_msg() {
		return base_msg;
	}
	const char* base_msg = "All your base are belong to me.";
};

class Child : public Base {
public:
	virtual void print() override {
		puts("Child Class");
		puts(child_thor);
		puts(base_msg);
	}

	void child_print() {
		puts(child_str);
	}
	const char* child_str = "Not virtual print.";
	const char* child_thor = "I am Thor.";
};

int main(int argc, char* argv[])
{
	Child* child = new Child();

	/* Call method directly. */
	((void (*)(void*))((long**)child)[0][0])(child);

	/* Store the first vtabe method in a C callback. */
	c_callback_print = (void (*)(void*))((long**)child)[0][0];
	c_callback_print(child);

	/* It works on the base class methods too. */
	c_callback_base_msg = (const char* (*)(void*))((long**)child)[0][1];
	const char* msg = c_callback_base_msg(child);
	puts(msg);

	/* A non-hack way of storing non-virtual method callbacks. */
	c_callback_child_print_well_behaved = &Child::child_print;

	(child->*c_callback_child_print_well_behaved)();

	/* Casting method pointers isn't allowed. Let's get crazy. */
	union member_pointer_cast {
		void (Child::*member_pointer)(void);
		void* void_pointer[2];
	} naughty;
	naughty.member_pointer = &Child::child_print;

	c_callback_child_print_naughty = (void (*)(void*))naughty.void_pointer[0];
	c_callback_child_print_naughty(child);

	delete child;
	return 0;
}