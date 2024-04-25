//Завдання №1
//Реалізуйте клас стеку для роботи з символами(символьний стек).Стек повинен мати фіксований розмір.Також
//реалізуйте набір операцій для роботи зі стеком : внесення
//символу в стек, видалення символу зі стеку, підрахунок
//кількості символів в стеці, перевірку, чи стек порожній,
//перевірку, чи стек повний, очищення стеку, отримання
//без видалення верхнього символу в стеці.
//Завдання №2
//Змініть стек з першого завдання зі статичного типу на
//динамічний(за нестачі вільного місця потрібно змінити
//	розмір внутрішнього масиву без втрати даних).


#include <iostream>
using namespace std;
#include "MyStack.h"

//class Stack
//{
//	// Нижняя и верхняя границы стека
//	enum { EMPTY = -1, FULL = 20 };
//	// Массив для хранения данных
//	char st[FULL + 1];
//	// Указатель на вершину стека
//	int top;
//
//public:
//	// Конструктор
//	Stack();
//
//	// Добавление элемента
//	void Push(char c);
//
//	// Извлечение элемента
//	char Pop();
//
//	// Очистка стека
//	void Clear();
//
//	// Проверка существования элементов в стеке
//	bool IsEmpty();
//
//	// Проверка на переполнение стека
//	bool IsFull();
//
//	// Количество элементов в стеке
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
//	// Изначально стек пуст
//	top = EMPTY;
//}
//
//void Stack::Clear()
//{
//	// Эффективная "очистка" стека 
//	// (данные в массиве все еще существуют, 
//	// но функции класса, ориентированные на работу с вершиной стека,
//	// будут их игнорировать)
//	top = EMPTY;
//}
//
//bool Stack::IsEmpty()
//{
//	// Пуст?
//	return top == EMPTY;
//}
//
//bool Stack::IsFull()
//{
//	// Полон?
//	return top == FULL;
//}
//
//int Stack::GetCount()
//{
//	// Количество присутствующих в стеке элементов
//	return top + 1;
//}
//
//void Stack::Push(char c)
//{
//	// Если в стеке есть место, то увеличиваем указатель
//	// на вершину стека и вставляем новый элемент
//	if (!IsFull())
//		st[++top] = c;
//}
//
//char Stack::Pop()
//{
//	// Если в стеке есть элементы, то возвращаем верхний и
//	// уменьшаем указатель на вершину стека
//	if (!IsEmpty())
//		return st[top--];
//	else // Если в стеке элементов нет
//		return 0;
//}

int main()
{
	//srand(time(0));
	//Stack ST;
	//char c;
	//// пока стек не заполнится
	//while (!ST.IsFull())
	//{
	//	c = rand() % 4 + 2;
	//	ST.Push(c);
	//}
	//ST.Output();
	//// пока стек не освободится
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