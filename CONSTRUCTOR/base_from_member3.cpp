#include <iostream>

class Buffer
{
public:
	Buffer(std::size_t sz) { std::cout << "initialize buffer" << std::endl;}
	void use() 			   { std::cout << "use buffer" << std::endl;}
};

class Stream
{
public:
	Stream(Buffer& buf) { buf.use();}
};

//--------------

class StreamBuffer 
{
protected:
	Buffer buf{1024};
};

class StreamWithBuffer : public StreamBuffer, 
	 			         public Stream
{	
public:
	StreamWithBuffer() : Stream(buf) {}
};

int main()
{
	StreamWithBuffer swb;
}