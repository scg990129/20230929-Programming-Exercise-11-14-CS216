#include "integerManipulation.h"

integerManipulation::(long long n){
  this->setNum(n);
        //The default value of num is 0;
      //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;
}

void integerManipulation::setNum(long long n){
  this->num = n;
  this->revNum = n == 0 ? 0 : this->reverseNum();
  this->classifyDigits();
}

long long integerManipulation::getNum(){
  return this->num;
}

      //Function to reverse the digits of num.
      //Postcondition: revNum is set to num with digits in
      //    in the reverse order.
void integerManipulation::reverseNum(){

}


void integerManipulation::classifyDigits(){
  this->evenscount = n==0? 0 : this->getEvensCount();
  this->oddsCount = n==0? 0 : this->getOddsCount();
  this->zerosCount = n==0? 0 : this->getZerosCount();
}
      //Function to count the even, odd, and zero digits of num.
      //Postcondition: evenCount = the number of even digits in num.
      //      oddCount = the number of odd digits in num.

    int getEvensCount();
      //Function to return the number of even digits in num.
      //Postcondition: The value of evensCount is returned.

    int getOddsCount();
      //Function to return the number of odd digits in num.
      //Postcondition: The value of oddscount is returned.

    int getZerosCount();
      //Function to return the number of zeros in num.
      //Postcondition: The value of zerosCount is returned.

    int sumDigits();
      //Function to return the sum of the digits of num.
      //Postcondition: The sum of the digits is returned.

    integerManipulation(long long n = 0);
      //Constructor with a default parameter.
      //The instance variable num is set accordingto the parameter,
      //and other instance variables are set to zero.
      //The default value of num is 0;
      //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;

private:
    long long num;
    long long revNum;
    int evensCount;
    int oddsCount;
    int zerosCount;
}
