#include <iostream>
#define pi 3.14

using namespace std;

float volume(float);
float cubo(float);

int main(){

    float raio;
    cin>>raio;

    cout<<volume(raio)<<endl;

    return 0;
}

float volume(float r){

    return (4.0/3)*pi*cubo(r);
}

float cubo (float cub){

      return cub*cub*cub;
}
