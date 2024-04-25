//�������� �1
//��������� ���� ����� ��� ������ � ���������(���������� ����).���� ������� ���� ���������� �����.�����
//��������� ���� �������� ��� ������ � ������ : ��������
//������� � ����, ��������� ������� � �����, ���������
//������� ������� � �����, ��������, �� ���� �������,
//��������, �� ���� ������, �������� �����, ���������
//��� ��������� ��������� ������� � �����.
//�������� �2
//����� ���� � ������� �������� � ���������� ���� ��
//���������(�� ������� ������� ���� ������� ������
//	����� ����������� ������ ��� ������ �����).


#include <iostream>
using namespace std;
#include "MyStack.h"

//class Stack
//{
//	// ������ � ������� ������� �����
//	enum { EMPTY = -1, FULL = 20 };
//	// ������ ��� �������� ������
//	char st[FULL + 1];
//	// ��������� �� ������� �����
//	int top;
//
//public:
//	// �����������
//	Stack();
//
//	// ���������� ��������
//	void Push(char c);
//
//	// ���������� ��������
//	char Pop();
//
//	// ������� �����
//	void Clear();
//
//	// �������� ������������� ��������� � �����
//	bool IsEmpty();
//
//	// �������� �� ������������ �����
//	bool IsFull();
//
//	// ���������� ��������� � �����
//	int GetCount();
//
//	void Output()
//	{
//		for (int i = 0; i < top + 1; i++)
//		{
//			cout << st[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//
//Stack::Stack()
//{
//	// ���������� ���� ����
//	top = EMPTY;
//}
//
//void Stack::Clear()
//{
//	// ����������� "�������" ����� 
//	// (������ � ������� ��� ��� ����������, 
//	// �� ������� ������, ��������������� �� ������ � �������� �����,
//	// ����� �� ������������)
//	top = EMPTY;
//}
//
//bool Stack::IsEmpty()
//{
//	// ����?
//	return top == EMPTY;
//}
//
//bool Stack::IsFull()
//{
//	// �����?
//	return top == FULL;
//}
//
//int Stack::GetCount()
//{
//	// ���������� �������������� � ����� ���������
//	return top + 1;
//}
//
//void Stack::Push(char c)
//{
//	// ���� � ����� ���� �����, �� ����������� ���������
//	// �� ������� ����� � ��������� ����� �������
//	if (!IsFull())
//		st[++top] = c;
//}
//
//char Stack::Pop()
//{
//	// ���� � ����� ���� ��������, �� ���������� ������� �
//	// ��������� ��������� �� ������� �����
//	if (!IsEmpty())
//		return st[top--];
//	else // ���� � ����� ��������� ���
//		return 0;
//}

int main()
{
	//srand(time(0));
	//Stack ST;
	//char c;
	//// ���� ���� �� ����������
	//while (!ST.IsFull())
	//{
	//	c = rand() % 4 + 2;
	//	ST.Push(c);
	//}
	//ST.Output();
	//// ���� ���� �� �����������
	//int i = 0;
	//while (i < 5)
	//{
	//	c = ST.Pop();
	//	cout << c << " ";
	//	i++;
	//}
	//cout << "\n\n";
	//ST.Output();

	MyStack st(5);
	cout << "Is empty? :" << st.isEmpty() << endl;
	st.add('A');
	st.add('B');
	st.add('C');
	st.add('D');
	st.add('E');
	cout << "Is full? :" << st.isFull() << endl;
	cout << "How many char? : " << st.howManyChar() << endl;
	cout << "Last in : " << st.lastIn() << endl;
	char last = st.get();
	cout << "How many char? : " << st.howManyChar() << endl;
	cout << "Get char fron stack: " << last << endl;
	cout << "Last in : " << st.lastIn() << endl;
	st.add('F');
	cout << "Is full? :" << st.isFull() << endl;
	st.changeVolume(5);
	cout << "Is full? :" << st.isFull() << endl;
	cout << "How many char? : " << st.howManyChar() << endl;
	st.clear();
	cout << "Is empty? :" << st.isEmpty() << endl;


	return 0;
}