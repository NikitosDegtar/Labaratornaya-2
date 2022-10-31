#include <iostream>
#include <map>
#include <string>
 
int main()
{
    std:: string s1;
    std:: map <std:: string, std:: string> s;
    s["Russia"]="Moscow";
    s["Belarus"]="Minsk";
    s["USA"]="Washington";
    s["Japan"]="Tokyo";
    s["China"]="Beijing";
    s["France"]="Paris";
 
    std:: cin >> s1;
    if (s[s1]!="") std:: cout << s[s1] << "\n";
    system ("pause");
    return 0;
}