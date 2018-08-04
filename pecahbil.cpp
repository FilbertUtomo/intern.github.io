#include <cstdlib>
#include <iostream>

using namespace std;

void deret(int x){
     int pj,jt,rr,pr,rb,rt,pl,st;
     pj=x/10000000;
     jt=(x-pj*10000000)/1000000;
     rr=(x-pj*10000000-jt*1000000)/100000;
     pr=(x-pj*10000000-jt*1000000-rr*100000)/10000;
     rb=(x-pj*10000000-jt*1000000-rr*100000-pr*10000)/1000;
     rt=(x-pj*10000000-jt*1000000-rr*100000-pr*10000-rb*1000)/100;
     pl=(x-pj*10000000-jt*1000000-rr*100000-pr*10000-rb*1000-rt*100)/10;
     st=(x-pj*10000000-jt*1000000-rr*100000-pr*10000-rb*1000-rt*100-pl*10);
if(pj!=0){
    cout<<pj*10000000<<endl;
    cout<<jt*1000000<<endl;
    cout<<rr*100000<<endl;
    cout<<pr*10000<<endl;
    cout<<rb*1000<<endl;
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(jt!=0){
    cout<<jt*1000000<<endl;
    cout<<rr*100000<<endl;
    cout<<pr*10000<<endl;
    cout<<rb*1000<<endl;
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(rr!=0){
    cout<<rr*100000<<endl;
    cout<<pr*10000<<endl;
    cout<<rb*1000<<endl;
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(pr!=0){
    cout<<pr*10000<<endl;
    cout<<rb*1000<<endl;
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(rb!=0){
    cout<<rb*1000<<endl;
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(rt!=0){
    cout<<rt*100<<endl;
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(pl!=0){
    cout<<pl*10<<endl;
    cout<<st*1<<endl;
}
else if(st!=0){
    cout<<st*1<<endl;
}
else{
    cout<<0<<endl;
}
}
int main(){
   int input;
   cout<<"Input Angka: ";
   cin>>input;
   deret(input);

 return 0;
}
