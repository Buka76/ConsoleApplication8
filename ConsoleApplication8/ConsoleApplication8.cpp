// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class TBook {
public:
	std::string Author, Name;
	int Count;
	TBook();
	TBook(std::string newAuthor, std::string newName, int newCount);
};

TBook::TBook() {
	Author = "Tolstoy";
	Name = "Anna Karenina";
	Count = 30;
}

TBook::TBook(std::string newAuthor, std::string newName, int newCount) {
	Author = newAuthor;
	Name = newName;
	Count = newCount;
}

using namespace std;
int main() {
	TBook a;
	cout << "Values of the constructor without parameters : \n";
	cout << "The author of the book is " << a.Author << "\n";
	cout << "The name of the book is " << a.Name << "\n";
	cout << "The count of the books is " << a.Count << "\n";

	TBook a1("Dostoevsky", "Crime and Punishment", 40);
	cout << "Values of the constructor without parameters : \n";
	cout << "The author of the book is " << a1.Author << "\n";
	cout << "The name of the book is " << a1.Name << "\n";
	cout << "The count of the books is " << a1.Count << "\n";
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
