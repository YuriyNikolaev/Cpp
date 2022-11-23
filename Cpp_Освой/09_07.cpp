// 09_07.cpp Пример класса, инкапсулирующего буфер в стиле стиле
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
            if(initString != nullptr)
            {
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);
            }
            else
                buffer = nullptr;
        }
        
        ~MyString()
        {
            cout << "Вызов деструктора" << endl;
            if(buffer != nullptr)
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

int main()
{
  MyString sayHello("Hello from String Class");
  cout << "Содержимое буфера длиной ";
  cout << sayHello.GetLength() << " символа." << endl;
  
  cout << "Буфер содержит: " << sayHello.GetString() << endl;
    return 0;
}