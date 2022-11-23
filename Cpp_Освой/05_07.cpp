#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "Введите число (0-255):";
    unsigned short inputNum = 0;
    cin >> inputNum;
    
    bitset<8> inputBits(inputNum);
    cout << inputNum << " в бинарном виде равно "
                     << inputBits << endl;
    bitset<8> BitwiseNOT = (~inputNum);
    cout << "Побитовое НЕ ~" << endl;
    cout << "~" << inputBits << " = "
                << BitwiseNOT << endl;
    
    cout << "Логическое И (&) c 00001111" << endl;
    bitset<8> BitwiseAND = (0xF&inputNum);
    cout << "0001111 & " << inputBits << " = "
         << BitwiseAND << endl;
         
    cout << "Логическое ИЛИ (|) c 00001111" << endl;
    bitset<8> BitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = "
         << BitwiseOR << endl;
         
    cout << "Логическое XOR (^) c 00001111" << endl;
    bitset<8> BitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = "
         << BitwiseXOR << endl;
    
    return 0;
}