#include <iostream>
using namespace std;
int indexof(char* s, char c)
{ 
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return i;
}
}
return -1;
}
int main() {
char s[] = "helloworld";
cout << indexof(s, 'c');
return 0;
}

B�i 2: Chuong tr�nh v?i h�m substring d� th?a m�n y�u c?u d? b�i:
#include <iostream> 
#include <string>
using namespace std; 
char* substring(char* s, int index, int length)
{
char* p = new char[length];
memcpy(p, s + index, length);
return p;
}

int main()
{
char s[] = "hello world";
cout << substring(s, 2, 3);
return 0;
}
