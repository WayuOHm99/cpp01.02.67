/* LANG : C++ */
#include<iostream>
using namespace std;

    int isValidID(string id)
{
    if(id.length() !=8)
{
    return 0;
}
    char c1 = id[0];
    int c2 = id[1] - ’0‘;
    int c3 = id[2] - ’0‘;
    int c4 = id[3] - ’0‘;
    int c5 = id[4] - ’0‘;
    int c6 = id[5] - ’0‘;
    int c7 = id[6] - ’0‘;
    int c8 = id[7] - ’0‘;

    if (c1 != ’B‘ && c1 != ’b‘ && c1 != ’M‘ && c1 != ’m‘ && c1 != ’D‘ && c1 != ’d‘)
{
    return 0;
}
    if (c8 != (( (c2*49) + (c3*7) + (c4*49) + (c5*7) + (c6*49) + (c7*7))%10))
{
    return 0;
}
    return 1;
}


int main()
{
    string id[3];
    for(int i=0; i<3; i++)
{
    cin >> id[i];
}
    for(int i=0; i<3; i++)
{
    if(isValidID(id[i]))
{
    cout << ”valid“ << endl;
}
    else
{
    cout << ”invalid“ << endl;
}
}
return 0;
}
