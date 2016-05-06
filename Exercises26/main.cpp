/*
 * Exercise 26
 *
 * Write a program that asks the user to input 5 sequences of characters. Then it will ask the user for a character to search for and will output the maximum number of times that it occurred between
 * the 5 sequences.
 * Example:
 *                  Sequence 1: aabc
 *                  Sequence 2: aaaa
 * If the user chooses to search for character 'a', the program will output "Character a occurred a maximum of 4 times" because it occurred 4 times in the second sequence, and only twice in the first sequence.
 *
 */


#include <iostream>

using namespace std;
int look_for_char(const string &s, char ch)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (ch == s[i])
            cnt++;
    }
    return cnt;
}

int main()
{
    string a, b, c, d, e;
    char ch;
    int ia, ib, ic, id, ie, iMax = 0;
    cout << "Please enter 5 sequences of characters:" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << "Enter character that you are looking for: ";
    cin >> ch;
    ia = look_for_char(a, ch);
    if (iMax < ia)
        iMax = ia;
    ib = look_for_char(b, ch);
    if (iMax < ib)
        iMax = ib;
    ic = look_for_char(c, ch);
    if (iMax < ic)
        iMax = ic;
    id = look_for_char(d, ch);
    if (iMax < id)
        iMax = id;
    ie = look_for_char(e, ch);
    if (iMax < ie)
        iMax = ie;

    cout << "Character " << ch << " has been typed - " << iMax << " times.\n";
    return 0;
}