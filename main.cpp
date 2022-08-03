#include <iostream>

int main()
{
	int myValue{ 1 };
	bool isTrue{ false };

	// myValue를 가리키는 포인터 변수
	int* myPointer1{&myValue};

	// isTrue를 역참조해서 true 변경
	bool* myPointer2;
	*myPointer2 = true;

}