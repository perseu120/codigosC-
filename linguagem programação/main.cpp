#include <iostream>

using namespace std;

int main ()
{

  int num, num2 = 0;
  cout << "Informe um numero (com 5 digitos): ";
  int x;
  cin >> num;

  if (num < 10000 || num > 99999){
      cout << "Numero Invalido";
    }
  else{
      x = num;

      while (num != 0){
    	  (num2 = num % 10 + num2 * 10);
    	  num = num / 10;
	    }
      if (x == num2){
	     cout << "e palidrano";
	    }
      else{
	    cout << "nao e palidrano";
	    }
	  
	  
      return 0;
    }
}

