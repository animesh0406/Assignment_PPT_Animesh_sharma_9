#include<bits/stdc++.h>
using namespace std;
 /*
Question 1
Given an integer `n`, return *`true` if it is a power of two. Otherwise, return `false`*.

An integer `n` is a power of two, if there exists an integer `x` such that `n == 2x`.

**Example 1:**
Input: n = 1 

Output: true

**Example 2:**
Input: n = 16 

Output: true

**Example 3:**
Input: n = 3 

Output: false
*/
bool isPowerOfTwo(int n) {
            if(n>0)
        {
            if(n%2==0)
                return isPowerOfTwo(n/2);
            
            if(n==1)
                return true;
        }
        return false;
    }


/*
<aside>
💡 **Question 2**

Given a number n, find the sum of the first natural numbers.

**Example 1:**

Input: n = 3 

Output: 6

**Example 2:**

Input  : 5 

Output : 15

</aside>
*/

int findSum(int n) {
    if(n==1)
        return 1;
    return n+findSum(n-1);
}

/*
<aside>
💡 **Question 3**

****Given a positive integer, N. Find the factorial of N. 

**Example 1:**

Input: N = 5 

Output: 120

**Example 2:**

Input: N = 4

Output: 24

</aside>
*/

int factorial(int n){
    
        if(n==0){
            return 1;
        }
        return n*factorial(n-1);
    
}


/*
<aside>
💡 **Question 4**

Given a number N and a power P, the task is to find the exponent of this number raised to the given power, i.e. N^P.

**Example 1 :** 

Input: N = 5, P = 2

Output: 25

**Example 2 :**
Input: N = 2, P = 5

Output: 32

</aside>
*/

int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}


/*
<aside>
💡 **Question 5**

Given an array of integers **arr**, the task is to find maximum element of that array using recursion.

**Example 1:**

Input: arr = {1, 4, 3, -5, -4, 8, 6};
Output: 8

**Example 2:**

Input: arr = {1, 4, 45, 6, 10, -8};
Output: 45

</aside>
*/

int findMax(int arr[], int size){
    if(size==1){
        return arr[0];
    }
    int smallOut= findMax(arr+1,size-1);
    if(arr[0]>smallOut){
        return arr[0];
    }
    return smallOut;
}


/*
<aside>
💡 **Question 6**

Given first term (a), common difference (d) and a integer N of the Arithmetic Progression series, the task is to find Nth term of the series.

**Example 1:**

Input : a = 2 d = 1 N = 5
Output : 6
The 5th term of the series is : 6

**Example 2:**

Input : a = 5 d = 2 N = 10
Output : 23
The 10th term of the series is : 23

</aside>
*/
int ApTerm(int a, int d, int N)
{
    return (a + (N - 1) * d);
}


/*
<aside>
💡 **Question 7**

Given a string S, the task is to write a program to print all permutations of a given string.

**Example 1:**

***Input:***

*S = “ABC”*

***Output:***

*“ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”*

**Example 2:**

***Input:***

*S = “XY”*

***Output:***

*“XY”, “YX”*

</aside>
*/
void printPermutations(string input,string output=""){

    if(input=="")
    {
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++)
    {
        printPermutations(input.substr(1),output+input[0]);
        rotate(input.begin(),input.begin()+1,input.end());
    }
}



/*
<aside>
💡 **Question 8**

Given an array, find a product of all array elements.

**Example 1:**

Input  : arr[] = {1, 2, 3, 4, 5}
Output : 120
**Example 2:**

Input  : arr[] = {1, 6, 3}
Output : 18

</aside>
*/
int find_product(int *arr, int size){
    if(size==1){
        return arr[0];
    }
    return arr[0]*find_product(arr+1,size-1);
}