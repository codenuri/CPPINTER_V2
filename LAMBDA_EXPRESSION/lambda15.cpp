
int main()
{
	int(*f)(int, int) = [](int a, int b) 
	{
		return a + b; 
	};

	int v = 0;

	// capture ������ ����ϸ�
	// �Լ������ͷ� �Ͻ��� ��ȯ �ɼ� ����.
	int(*f1)(int, int) = [v](int a, int b)
	{
		return a + b + v;
	};

}
