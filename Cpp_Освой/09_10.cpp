// 09_10.cpp Синглтон President
#include <iostream>
#include <string>
using namespace std;

class President
{
    private:
        President() {}; // Закрытые: конструктор по умолчанию
        President(const President&); // Копирующий конструктор
        const President& operator=(const President&); // Присваивание
        
        string name;
    
    public:
        static President& GetInstance()
        {
            // статические объекты конструируются только один раз
            static President onlyInstance;
            return onlyInstance;
        }
        
        string GetName()
        { return name; }
        
        void SetName(string InputName)
        { name = InputName; }
};

int main()
{
    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("Авраам Линкольн");
    
    // Раскомментируйте, чтобы убедиться в невозможности дублей:
    // President second;
    // President* third = new President();
    // onlyPresident = President::GetInstance();
    
    cout << "Президента зовут ";
    cout << President::GetInstance().GetName() << endl;
    
    return 0;
}
