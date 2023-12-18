#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int number;
    int temp, reversedNum = 0, sum = 0, aSum = 0, numDigits, digit; // aSum=armstrong sum
    int firstDigit, middleDigit, lastDigit, swapNum;
    int pEven = 1; // product of even digits
    bool hasEvenDigit=false;
    int fact=1,factSum=0,i,perfect=0;

    cout << "ENTER A NUMBER " << endl;
    cin >> number;

    temp = number;
    numDigits = static_cast<int>(log10(number)) + 1;
    firstDigit = temp / pow(10, numDigits - 1);
    lastDigit = temp % 10;
    middleDigit = (temp % static_cast<int>(pow(10, numDigits - 1))) / 10;
    swapNum = lastDigit * static_cast<int>(pow(10, numDigits - 1)) + middleDigit * 10 + firstDigit;

    temp = number;
     while(temp>0){
        digit=temp%10;
        for(i=1;i<=digit;++i){
            fact*=i;
        }
        factSum+=fact;
        temp/=10;
    }
    if(factSum==number){
        cout<<"the number is strong"<<endl;
    }
    else{
        cout<<"it's not strong number"<<endl;
    }
    temp=number;
    for(i=1;i<=number/2;++i){
        if(number%i==0){
        perfect+=i;
        }
    }
    if (perfect==number){
        cout<<"it's perfect number"<<endl;
    }
    else {
        cout<<"it's not perfect number"<<endl;
    }
        temp=number;
    while (temp > 0) {
        digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    if (number == reversedNum) {
        cout << "the number is palindrome " << endl;
    } else {
        cout << "the number isn't palindrome " << endl;
    }

    int originalReversedNum = reversedNum; // Store the original reversedNum

    temp = originalReversedNum;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    temp = originalReversedNum;
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 == 0) {
            hasEvenDigit=true;
            pEven *= digit;
        }
        temp /= 10;
    }
    if(hasEvenDigit){
         cout << "product of even digits is " << pEven << endl;
    }
    else{
        cout<<"there is no even digit the product is zero"<<endl;
    }

    temp = originalReversedNum;
    while (temp > 0) {
        digit = temp % 10;
        aSum += pow(digit, numDigits);
        temp /= 10;
    }

    if (aSum == number) {
        cout << "the number is armstrong " << endl;
    } else {
        cout << "the number is not armstrong " << endl;
    }
    cout << "number of digits is " << numDigits << endl;
    cout << "reversed number is " << originalReversedNum << endl;
    cout << "sum of digits is " << sum << endl;
    cout << "first digit is " << firstDigit << endl;
    cout << "last digit is " << lastDigit << endl;
    cout << "middle digit is " << middleDigit << endl;
    cout << "swapped number is " << swapNum << endl;
     temp=originalReversedNum;
     int digitFrequency[10]={0};
     while(temp>0){
        digit=temp%10;
        digitFrequency[digit]++;
        temp/=10;
     }
    cout<<"digit | frequency"<<endl;
    cout<<"_________________"<<endl;
     for(i=0;i<10;++i){
        if(digitFrequency[i]>0){
    cout<< setw(5)<< i <<" | "<<digitFrequency[i]<<endl;
        }
     }
    return 0;
}
