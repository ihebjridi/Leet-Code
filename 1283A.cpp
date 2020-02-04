#include <iostream>
using namespace std;
int main(){
unsigned short  t,h,m;
scanf("%hu",&t);
while(t--){
scanf("%hu%hu",&h,&m);
printf("%d\n",(23 - h) * 60 + (60 - m));
}
}