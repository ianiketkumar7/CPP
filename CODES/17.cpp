/*#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1 = "bcme";
   string s2 = "abcrome";   
   cout<<s1.compare(s2)<<endl;
   cout<<s1.compare(2,2,s2,5,2);
   return 0;
}
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string s1 = "arlcome";
   string s2 = "wearomea";
   cout<<s1.find("lc")<<endl;
   cout<<s2.rfind(“e”);
   cout<<s2.find_last_of('e');
   
   return 0;
}*/
#include<iostream> 
using namespace std; 
int main() 
{
 string str1 ("The only way to do great work is to love what you do“); 
string str2 ("work“); 
unsigned found = str1.find(str2); 
cout << found << "\n"; 
return 0;
 } 
