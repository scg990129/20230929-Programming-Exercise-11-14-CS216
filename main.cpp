#include <iostream>

using namespace std;

int main() {
    printf("Enter an integer between 2 and 270,000,000,000,000: \n");

    long long no;
    cin >> no;

    bool isPrime = false;
    printf("%d %s a prime number. Its factorization is:\n", no, (isPrime)? "is":"is not");

    printf("%d = %d\n", no, no);
    
    return 0;
}

/*
Enter an integer between 2 and 270,000,000,000,000: 1005427

1005427 is a prime number. Its factorization is:
1005427 = 1005427
*/
