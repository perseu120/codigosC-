#include <iostream>
#include <locale>

using namespace std;

int main(){

setlocale(LC_ALL,"PORTUGUESE");
int a=0, e=0, j=0;
char thor[20], odim[20];

cin>>thor;
cin>>odim;

while(thor[a]!='\0)'){
    a++;
}
while(odim[e]!='\0'){
    e++;
}
if(a-e<0){
    cout<<"não está contido";
}
else {

    for(int i=a-e, j=0;i<a;i++,j++){
       if(thor[i]==odim[j]){

       }

    }
}







return 0;
}
