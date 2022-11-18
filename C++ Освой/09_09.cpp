// 09_09.cpp Определение копирующего конструктора с глубоким копированием
#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
    private:
        char* buffer;
    
    public:
        MyString(const char* initString) // конструктор
        {
            buffer = nullptr;
            cout << "Вызов конструктора по умолчанию" << endl;
            if(initString != nullptr)
            {
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);
                
                cout << "buffer указывает на: 0х" << hex;
                cout << (unsigned int*)buffer << endl;
            }
        }
        
        MyString(const MyString& copySource) // Копирующий конструктор
        {
            buffer = nullptr;
            cout << "Вызов копирующего конструктора" << endl;
            if(copySource.buffer != nullptr)
            {
                // Выделение собственного буфера
                buffer = new char[strlen(copySource.buffer) + 1];
                
                // Глубокое копирование исходного буфера в целевой
                strcpy(buffer, copySource.buffer);
                
                cout << "buffer указывает на: 0х" << hex;
                cout << (unsigned int*)buffer << endl;
            }
        }
        
        // Деструктор
        ~MyString()
        {
            cout << "Вызов деструктора" << endl;
            delete[] buffer;
        }
        
        int GetLength()
        { return strlen(buffer); }
        
        const char* GetString()
        { return buffer; }
};

void UseMyString(MyString str)
{
    cout << "Длина buffer в MyString равна ";
    cout << str.GetLength() << " символам " << endl;
    
    cout << "buffer сщдержит: " << str.GetLength() << endl;
    return;
}

int main()
{
    MyString sayHallo("Hello from String Class");
    UseMyString(sayHallo);
    
    return 0;
}
