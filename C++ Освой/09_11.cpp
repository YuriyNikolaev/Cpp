// 09_11.cpp Класс БД MonsterDB, позволяющий создавать
// свои объекты только в динамической памяти (используя оператор new)
#include <iostream>
using namespace std;

class MonsterDB
{
    private:
    ~MonsterDB() {}; // Закрытый деструктор для предотвращения
                     // создания объекта в стеке
    public:
    static void DestroyInstance(MonsterDB* pInstance)
    {
        delete pInstance; // Вызов закрытого деструктора
    }
    
    void DoSomthing() {} // Пустой метод (для примера)
};

int main()
{
    MonsterDB* myDB = new MonsterDB(); // В динамической памяти
    myDB->DoSomthing();
    
    // Раскомментируйте, чтобы убедиться в неработоспособности
    // delete myDB; // Закрытый деструктор не вызываем
    
    // Использование статического метода для удаления
    MonsterDB::DestroyInstance(myDB);
    
    return 0;
}
