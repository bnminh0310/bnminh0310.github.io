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
