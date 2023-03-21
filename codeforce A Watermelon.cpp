                    //  A WATERMALON
// One hot summer day Pete and his friend Billy decided to buy a watermelon.They chose the biggest and the ripest one,
//  in their opinion.After that the watermelon was weighed, and the scales showed w kilos.They rushed home, dying of 
//  thirst, and decided to divide the berry, however they faced a hard problem.

//  Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that 
//  each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal.
//   The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them 
//   and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of
//    positive weight.

#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
 
using namespace std;
 
int main()
{
    ll w;
    cin>>w;
 
    
    if(w==6 ||w==4||w==8 ||w==10)
    {
        cout<<"YES\n";
    }
    else if(w>10 && w%2==0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
 
}