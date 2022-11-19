// 09_08.cpp Проблема передачи объекта класса по значению
#include <iostream>
#include <string>
using namespace std;

class MyString
{
    private:
        char* buffer;
        
    public:
        MyString(const char* initString) // Конструктор
        {
            buffer = nullptr;
            if(initString != nullptr)
            {
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);
            }
        }
        
        ~MyString() // Деструктор
        {
            cout << "Вызов деструктора" << endl;
            delete[] buffer;
        }
        
        int GetLength()
        {
            return strlen(buffer);
        }
        
        const char* GetString()
        {
            return buffer;
        }
};

void UseMyString(MyString str)
{
    cout << "Содержимое буфера длиной " << str.GetLength();
    cout << " символа" << endl;
    
    cout << "Буфер содержит: " << str.GetString() << endl;
    return;
}

int main()
{
  MyString sayHello("Hello from String Class");
  UseMyString(sayHello);
    return 0;
}