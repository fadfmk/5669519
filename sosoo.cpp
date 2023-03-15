#include <iostream>
using namespace std;
 
int sosoo(int x);
 
int main() {
 // your code goes here
 int result = 0;
 
 for(int i=1; i<=100; i++)
 {
  result += sosoo(i);
 }
 
 cout << "결과 = " << result << endl;
 
 return 0;
}
 
int sosoo(int x)
{
 int count = 0;
 
 for(int j=1; j<=x; j++)
 {
  if(x%j == 0)
  {
   count++;
  }
 }
 if(count == 2)
  return x;
 else
  return 0;
}