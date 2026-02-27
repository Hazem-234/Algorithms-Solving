#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
/*
Learning Goals: 
1:A string is an array of characters that's why we treat it like: s[index]
2:tolower() and toupper() functions
3:? true: false
4:getline is used for reading input from user but it encludes spaces as if you used spaces with cin 
what happens is that it will reset back to at each word so sentence like data bool prints 2 not 4
*/
bool isVowel(char c)
{
    c= tolower(c); // convert top lower case
    return c == 'a' || c=='e' || c=='i' || c=='u' || c=='o';
    // it says return the c if it is any of these letters
}
int count(const string &s, int index) // const &s was used top say I promise I will only read the string
{
    if(index==s.length()) return 0; // when you reach the end of the string end the program 
    return (isVowel(s[index])? 1:0)+count(s, index+1); //checking throught he string and recursive call to move to next index
} 
int main() {
    string s;
    getline(cin, s); // use getline to include spaces
    cout<<count(s, 0); // pass teh parameters and start from index zero in string 
    system("pause");
    return 0;
}