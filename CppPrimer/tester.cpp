//
//  tester.cpp
//  CppPrimer
//
//  Created by Marvin Augustin on 11/9/21.
//

//#include "tester.hpp"
#include "Chapter6.h"

/*
Chapter6::Chapter6(int v){
    val = v;
}
*/
int ret = 1;
int counter = 0;
int count = 0;
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

Chapter6::Chapter6(int v){
    val = v;
}

Chapter6::Chapter6(){
    //DEFAULT CONSTRUCTOR
}

int Chapter6::fact()
{
    //int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int Chapter6::fact2(){
    int multiSum = 1 ;
    while(val > 1){
        multiSum *= val--;
    }
    return multiSum;
}

int Chapter6::absolute(){
    if(val < 0){
        val = -val;
    }
    
    return val;
}

int Chapter6::absInt() {
  return val >= 0 ? val : -val;
}

int Chapter6::callCnt(){
    
    static int cntr = 0;
    return ++cntr;
}

int Chapter6::newCnt(){
    static int nCnt = 0;
    return nCnt++;
}

int Chapter6::splitFact(int d){
    
    return ret/d;
}

void Chapter6::reset(int *ip){
    *ip = 0;
    ip = 0;
}

void Chapter6::reset2(int &ip2){
    ip2= 3;
    cout << ip2 << "\n";
}

//EXERCISE 6.11
void Chapter6::reset3(int &ip3){
    ip3 = 4;
    cout << ip3 << "\n";
}

void Chapter6::swap(int *s1, int *s2){
    int tmp = *s2;
    *s2 = *s1;
    *s1 = tmp;
    cout << *s1 << " " << *s2 << "\n";
}

//EXERCISE 6.12
void Chapter6::swap2(int &s3, int &s4){
    int tmp = s4;
    s4 = s3;
    s3 = tmp;
    cout << s3 << " " << s4 << "\n";
}

/*
bool Chapter6::isShorter(const string &str1, const string str2){
    return str1.size() < str2.size();
}
*/

constexpr bool Chapter6::isShorter(const string &str1, const string &str2){
    return str1.size() < str2.size();
}

void Chapter6::counter(int c){
    c++;
    cout << c << "\n";
}

void Chapter6::count(int &c){
    c++;
    cout << c << "\n";
}

void Chapter6::passByTest(int a){
    a = 5;
    cout << a << "\n";
}

string::size_type Chapter6::find_char(const string &s, char c, string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); i++){
        if (s[i] == c){
            if (ret == s.size()){
                ret = i;
                ++occurs;
            }
        }
    }
    return ret;
}

bool Chapter6::isCap(const string &s){
    bool y = false;
    i = 0;
    for(auto c : s){
        if(c >= 'A' && c <= 'Z'){
            y = true;
            break;
        }
        else{
            i++;
        }
    }
    return y;
}

bool Chapter6::hasCapital(const string &s3) {  // Only ASCII
    for (auto &c : s3){  // `c` would be `const char &` since `s` is `const`
        if (c >= 'A' && c <= 'Z'){
            return true;
        }
    }
  return false;
}

void Chapter6::toLower(string &s4){
    for(auto &c : s4){
        c = tolower(c);
        cout << c;
    }
}

void Chapter6::toLowerStr(string &s4) {
  for (auto &c : s4)
      if (c >= 'A' && c <= 'Z'){
      c -= 'A' - 'a';
      }
}


void Chapter6::initSum(initializer_list<int> &il){

    int sum = 0;
    for(auto &e : il){
        sum += e;
    }
    cout << sum << "\n";
}

int Chapter6::factorial(int val){
    if (val > 1)
        return factorial(val-1) * val;
    return 1;
};

/*
bool str_subrange(const string &str1, const string &str2){
    if (str1.size() == str2.size()){
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size())
    ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i){
        if (str1[i] != str2[i])
            return;
            // error #1: no return value; compiler should detect this
    }
}
*/

int& Chapter6::get(int *array, int &index){
    return  array[index];
}

void Chapter6::printVect(vector<int> &nums, int &i){
    while(i < nums.size()){
        cout << nums[i] << "\n";
        i++;
    printVect(nums, i);
    }
}

auto Chapter6::func_name(int x, int y) -> int{
    
    return x;
}

//HOW DO I ADD THE H FILE CLASS NAME TO THIS DELCARATION???
/*
string (&foo1())[10]{
    
}
*/

auto Chapter6::arrPtr(int i) -> int (&)[5]{
    return i % 2 ? odd : even;
}

void Chapter6::print(const char *cp){
    cout << cp << "\n";
}

void Chapter6::print(const int *beg, const int *end){
    
}

void Chapter6::print(const int *ia, size_t size){
    
}

const string Chapter6::shorterString(const string &s1, const string &s2){
    return s1.size() <= s2.size() ? s1 : s2;
}

//technically unusable unless brought into scope
string& Chapter6::shorterString(string& s1, string& s2){
    auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
    return const_cast<string&>(r);
}

/*
string read();
void print(const string&);
void print(double);
void fooBar(int ival){
    bool read = false;
    //string s = read();
    void print(int);
    //print("Value: ");
    print(ival);
    print(3.14);
}
*/

//int Chapter6::volume(int l=1, int w=1, int h=1);

int Chapter6::volume(int l, int w, int h){
    return l*w*h;
}

//EXERCISE 6.54
int Chapter6::twoInts(int a, int b){
    cout << "Called two ints" << a << ", " << b << ")";
    return 0;
}

int Chapter6::twoIntsTwo(int a, int b){
    cout << "Called two ints" << a << ", " << b << ")";
    return 0;
}

//EXERCISE 6.55

int Chapter6::sumTwoInts(int &a, int &b){
    
    return a + b;
}

int Chapter6::subTwoInts(int &a, int &b){
    
    return a - b;
}

int Chapter6::divTwoInts(int &a, int &b){
    
    return a / b;
}

int Chapter6::multTwoInts(int &a, int &b){
    
    return a * b;
}

std::vector<int (*)(int, int)> vf;

int Chapter6::findVecInt(vector<int>nums, int i) {

    vector<int>::iterator a = nums.begin();
    vector<int>::iterator b = nums.end();
    vector<int>::iterator c = nums.begin();
    vector<int>::iterator d;
    bool e = false;

    for (int i2 = 0; a != b; a++) {
        if (i == *a) {
            c = nums.begin();
            d = a;
            e = true;
            break;
        }
        else if(a==b-1 && i!= *a){
            cout << "Number not found" << "\n";
            
        }
    }
    if (e == true) {
        while (c != d + 1) {
            cout << *c << "\n";
            c++;
        }
    }
    return e;
}

void Chapter6::compareListVec(list<int>li, vector<int>vi) {
    
    list<int>::iterator lit = li.begin();
    list<int>::iterator litend = li.end();
    vector<int>::iterator vit = vi.begin();
    vector<int>::iterator vitend = vi.end();
    bool same = true;
    for (; lit != li.end() && vit != vi.end(); lit++, vit++) {
        
        if (*lit < *vit) {
            same = false;
            cout << "li2 is < vi2" << "\n";
        }
        else if (*lit > * vit) {
            same = false;
            cout << "li2 is > vi2" << "\n";
        }
        else if (same == true && vit == vitend - 1) {
            cout << "li2 = vi2" << "\n";
        }
    }

    /*
    if (li.size() == vi.size()) {
        cout << "li = vi" << "\n";
    }
    else if (lit == li.end()) {
        cout << "li is < vi" << "\n";
    }
    else
        cout << "li > vi" << "\n";
        */
}

void Chapter6::insFString(forward_list<string> &fList, const string &s1, const string &s2){
    auto bit = fList.before_begin();
    fList.insert_after(bit, s1);
    fList.insert_after(bit, s2);
    
    for(auto e : fList){
        cout << e << " ";
    }
    cout << "\n";
}

void Chapter6::replaceS(string s, string oldVal, string newVal){
    
    std::size_t found = s.find(oldVal);
    auto found2 = oldVal.length();
    
    if (found!=std::string::npos){
        std::cout << "first 'string' found at: " << found << '\n';
    }
    
    while(s.find(oldVal) != std::string::npos){
        s.replace(s.find(oldVal), found2, newVal);
    }
    cout << s << "\n";

    /*
    for(auto it = s.begin(); it < s.end(); it++){
        if(*it == oldVal){
            s.replace(oBeg,nBeg, newVal);
            cout << oldVal << "\n";
        }
    }
     */
    //cout << s << "\n";
    
}

std::ostream& Chapter6::print(std::ostream &os, const std::vector<std::string> &vs) {
  for (const auto &i : vs)
    os << i << " ";
  return os;
}

void Chapter6::elimDups(std::vector<std::string> &words) {
  print(std::cout, words) << words.size() << std::endl;
  std::sort(words.begin(), words.end());
  print(std::cout, words) << words.size() << std::endl;
  auto end_unique = std::unique(words.begin(), words.end());
  print(std::cout, words) << words.size() << std::endl;
  words.erase(end_unique, words.end());
  print(std::cout, words) << words.size() << std::endl;
}
