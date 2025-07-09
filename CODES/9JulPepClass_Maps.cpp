#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> ok = { {"abbcdabd", 1}, {"ggodpd", 2} };
    cout << ok.count("abbcdabd");
    
}