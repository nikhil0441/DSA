#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

string intToRoman(int num)
{
    // Mapping integers to Roman numerals using a vector
    vector<pair<int, string>> roman = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string res = "";
    for (const auto &pair : roman)
    {
        while (num >= pair.first)
        {
            res += pair.second;
            num -= pair.first;
        }
    }

    return res;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Roman numeral: " << intToRoman(num) << endl;
    return 0;
}