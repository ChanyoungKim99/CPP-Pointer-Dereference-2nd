#include <iostream>

int main()
{
	int myValue{ 1 };
	bool isTrue{ false };

	// myValue�� ����Ű�� ������ ����
	int* myPointer1{&myValue};

	// isTrue�� �������ؼ� true ����
	bool* myPointer2;
	*myPointer2 = true;

}