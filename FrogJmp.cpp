#include <iostream>
using namespace std;

int main() {
int x = 10;
int y = 76;
int d = 20;
int licznik=0;

while (x<y){
    x+=d;
    licznik++;
}
cout<<licznik;
return 0;
}
