//
//  Chapter6.h
//  CppPrimer
//
//  Created by Marvin Augustin on 3/13/22.
//

#ifndef Chapter6_h
#define Chapter6_h
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <initializer_list>
#include <assert.h>
#include <sstream>
#include <list>
#include <deque>
#include <forward_list>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;
using std::initializer_list;
using std::string;
using std::vector;

#endif /* Chapter6_h */

//EXERCISE 6.8
class Chapter6{
public:
    Chapter6(int v);
    Chapter6();
    int val;
    int i;
    //int div;

    int fact();
    int fact2();
    int absolute();
    int absInt();
    int callCnt();
    int newCnt();
    int splitFact(int div);
    void reset(int *ip);
    void swap(int *s1, int *s2);
    void swap2(int &s3, int &s4);
    void reset2(int &ip2);
    void reset3(int &ip3);
    void counter(int c);
    void count(int &c);
    //bool isShorter(const string &str1, const string str2);
    constexpr bool isShorter(const string &str1, const string &str2);
    void passByTest(int a);
    void fcn(const int i);
    void fcn2(int i, string a);
    string::size_type find_char(const string &s, char c, string::size_type &occurs);
    bool isCap(const string &s);
    bool hasCapital(const string &s3);
    void toLower(string &s4);
    void toLowerStr(string &s4);
    void initSum(initializer_list<int> &il);
    const string shorterString(const string &s1, const string &s2);
    int factorial(int val);
    bool str_subrange(const string &str1, const string &str2);
    int& get(int *array, int &index);
    void printVect(vector<int> &nums, int &i);
    
    //OTHER FUNCTION DECLARATIONS
    auto func(int i) -> int(*)[10];
    auto func_name(int x, int y) -> int;
    string (&s())[10];
    using arr_str_type = string[10];
    auto foo3() -> string (&)[10];
    string str[10] = {};
    decltype(str) &foo4();
    auto arrPtr(int i) -> int (&)[5];
    void print(const char *cp);
    void print(const int* beg, const int* end);
    void print(const int ia[], size_t size);
    string &shorterString(string& s1, string& s2);
    typedef string::size_type sz;
    int volume(int l=1, int w =1, int h=1);
    int ff(int a, int b, int c=5);
    int sumTwoInts(int&, int&);
    int subTwoInts(int&, int&);
    int divTwoInts(int&, int&);
    int multTwoInts(int&, int&);
    int twoInts(int, int);
    int twoIntsTwo(int, int);
    
    int findVecInt(vector<int> n, int i);
    //int findVecInt(vector<int> n, int i);
    void compareListVec(list<int>li,vector<int>vi);
    
    void insFString(forward_list<string> &fList, const string &s1, const string &s2);
    
    void replaceS(string s, string oldVal, string newVal);
    
    std::ostream &print(std::ostream &os, const std::vector<std::string> &vs);
    void elimDups(std::vector<std::string> &words);
};

