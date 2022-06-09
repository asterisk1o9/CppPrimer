//
//  main.cpp
//  CppPrimer
//
//  Created by Marvin Augustin on 10/8/21.
//

#include "tester.hpp"
#include "Chapter6.h"
#include <list>
#include <deque>
//#include <stdio.h>


//In and out of scope variables
int reused = 42; // reused has global scope
int i = 42;

//CONSTRUCTOR DECLARATION IN MAIN CLASS
class name
{
private:
    std::string m_Name;
public:
    name()
    {
        m_Name = "Unknown";
    }
    
    name(const string& name)
    {
        m_Name = name;
    }
    const string& GetName() const{return m_Name;}
};
//CONSTRUCTOR DELCARATION ENDS HERE

int textsize(){
    unsigned buf_size  = 1024;
    int ia5[buf_size];
    ia5[0] = 5;
    cout << ia5[0] << "\n";
    
    return 0;
}

void helloWorld(int rand){
    cout << "Hello World" << "\n";
}

string::size_type find_char(const string &s, char c, string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); i++){
        if (s[1] == c){
            if (ret == s.size()){
                ret = 1;
                ++occurs;
            }
        }
    }
    return ret;
}

/*
int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int fact2(int val){
    int multiSum = 1 ;
    while(val > 1){
        multiSum *= val--;
    }
    return multiSum;
}

int absolute(int val){
    
    if(val < 0){
        return -val;
    }
    else{
        return val;
    }
    
    return val;
}

int absInt(int i) {
  return i >= 0 ? i : -i;
}

int callCnt(){
    
    static int cntr = 0;
    return ++cntr;
}

int newCnt(){
    static int nCnt = 0;
    return nCnt++;
}
*/

void Adder(int num1, int num2){
    cout << num1 + num2 << "\n";
}

void Add(std::initializer_list<int> list){
    int total = 0;
    
    for(auto element:list){
        total += element;
    }
    cout << total << "\n";
}

//int twoInts(int, int);
//int twoIntsTwo(int, int);
int twoInts(int a, int b){
    std::cout << "Called twoInts(" << a << ", " << b << ")" << std::endl;
     return 0;
   }
int twoIntsTwo(int a, int b){
    std::cout << "Called twoInts(" << a << ", " << b << ")" << std::endl;
     return 0;
   }

//EXERCISE 9.12
struct A {
};

struct B {
    B(A a) {}  // type A can covert to type B
};


int main(int argc, const char * argv[]) {

    cout << "Hello World\n";
    //-------------------------------------------------------------
    /*
    //cin, take input
    cout << "Enter two numbers:" << endl;
    std::cout << "Enter two numbers:" << std::endl;


    int v1, v2 = 0;
    std::cin >> v1 >> v2;
    */
    //std::cout << /* "*/" /* "/*" */;

    //-------------------------------------------------------------
    //LOOPS
    
    /*
    int sum=0, val =1;

    //while loop inclusive 10 summation
    
    while (val <= 10) {
        sum += val;
        val++;
    }

    cout<< sum << std::endl;
    
    sum = 0;
    //for loop inclusive 10 summation
    
    for(val = 1; val <=10; val++){
        sum+= val;
    }

    cout<< sum << std::endl;
    

    
    //int pyramid
    sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += i;
        cout << sum << "\n";
    }
    */

    //-------------------------------------------------------------------

    /*
    //summation with user inputs
    int sum = 0;
    int val = 0;

    cout << "Enter your numbers" << "\n";
    cout << "Tyee a non int when you want to exit" << "\n";

    while (std::cin >> val){
        sum += val;
    }
    std::cout << "Sum is: " << sum << std::endl;
    */


    //----------------------------------------------------------------------

    /*
    //count the amount of times the number is repeated
    int currVal = 0, val = 0;

    if (std::cin >> currVal) {
        int cnt = 1;

        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
    else {
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
        }
    }
            std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        }
    */

    //----------------------------------------------------------------------------

    /*
    //random type practice
    bool b = 42;
    int i = b;
    i = 3.14;
    double pi = i;
    unsigned char c = -1;
    unsigned char c2 = 256;

    cout << b << endl;
    cout << i << endl;
    cout << pi << endl;
    cout << c << endl;
    //cout << c2 << endl;

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;
    */

    /*
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    */

    //--------------------------------------------------------------------------------

    /*
    //unexpectedly legal string
    std::cout << "a really, really long string literal "
    "that spans two lines" << std::endl;
    */

    //------------------------------------------------------------------------------

    /*
    std::cout << "Hi \x4dO\115!\n";
    std::cout << "Hi \x4dO\n";

    //Constants and literals

    //unsigned int of 5
    auto x = 5U;

    cout << x << "\n";

    int number = 30;
    int hexNumber = 0x30;
    int octNumber = 030;

    cout << number << "\n";
    cout << hexNumber << "\n";
    cout << octNumber << "\n";

    //decimal to hex print conversion
    cout << "Hex number is " << hex << number << "\n";
    //decimal to octal print conversion
    cout << "Oct number is " << oct << number << "\n";

    cout << "Who goes with F\145rgus?\012";
    cout << 3.14e1L;
    */

    //----------------------------------------------------------------------------------
    
    /*
    //In and out of scope variables
    //NOTE: missing variables are out of scope, above main class

    int unique = 0; // unique has block scope
    // output #1: uses global reused; prints 42 0
    std::cout << reused << " " << unique << std::endl;

    int reused = 0; // new, local object named reused hides global reused
    // output #2: uses local reused; prints 0 0
    std::cout << reused << " " << unique << std::endl;

    // output #3: explicitly requests the global reused; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;

    int i = 100;
    int j = i;

    cout << i << endl;
    cout << j << endl;
    */
    
    /*
    //for loop without brackets leads to different results
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i){
        sum += i;
    std::cout << i << " " << sum << std::endl;
    }
        
    sum = 0;
    for (int i = 0; i != 10; ++i){
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
    */

    //------------------------------------------------
    //REFERENCES
    
    /*
    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival
    //int &refVal2;

    refVal = 50;

    cout << refVal << endl;
    cout << ival << endl;
    */

    /*
    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024, &ri = i3;
    int &r3 = i3, &r4 = i2;
    double dval = 3.14;
    double &refVal5 = dval;
    */

    /*
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159;
    //r2 = r1;
    i = r2;
    r1 = d;

    cout << r2 << endl;
    cout << i << endl;
    cout << r1 << endl;
    */

    //--------------------------------------------------------------

    //POINTERS

    /*
    int ival = 50;
    int *p = &ival;//prints the address of ival
    cout << *p << endl;//prints the value stored in that adress
    *p = 51;//changes the value of pointer p to 51;
    cout << *p << endl;
    cout << ival << endl;

    ival = 53;
    cout << *p << endl;
    cout << ival << endl;

    cout << p << endl;
    cout << &ival << endl;
    */

    /*
    int c = 54;
    int &b = c;//value at b is = to the value at the address of c

    cout << b << endl;
    cout << &b << endl;
    cout << &c << endl;
    
    b = 55;
    
    cout << c << "\n";
    cout << b << "\n";

    int *p1 = nullptr;
    int *p2 = NULL;
    int *p3 = 0;
    int *p4;//undefined
    */

    /*
    int rand = 5;

    int *p = &rand;

    cout << p << endl;

    int &r2 = *p;//When you make a reference to a pointer it returns the value, not the address

    cout << r2 << endl;
    cout << &r2;
    */

    //POINTER PRACTICE
    /*
    int i = 42;
    int *pi = 0; // pi is initialized but addresses no object
    int *pi2 = &i; // pi2 initialized to hold the address of i
    int *pi3;
    pi3 = pi2;
    //pi2 = 0;

    cout << "i = " << i << endl;
    cout << "address at i = " << &i << endl;
    cout << "address at pi2 = " << pi2 << endl;
    cout << "value at pi2 = " << *pi2 << endl;
    cout << "pi3 = " << pi3 << endl;
    cout << "address at i = " << &i << endl;
    cout << "address at pi2 = " << pi2 << endl;
    cout << "address at pi3 = " << pi3 << endl;
    */

    /*
    int ival = 5;
    int *pi4 = &ival;
    *pi4 = 0; // changes ival to 0

    cout << ival << endl;
    cout << &ival << endl;
    cout << *pi4 << endl;
    cout << pi4 << endl;

    int val = 5;
    int *point = &val;
    //point = 6;

    cout << val << "\n";
    */

    /*
    int i = 42;
    int *p1 = &i;

    cout << p1 << endl;

    *p1 = *p1 * *p1;

    cout << i << endl;
    cout << *p1 << endl;
    cout << p1 << endl;
    */

    /*
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n"
    << "doubly indirect value: " << **ppi
    << endl;
    */

    /*
    int i = 42;//i = 42;
    int *p;//undefined pointer
    int *&r = p;//pointer reference r  = to the value at  p which is undefined, r is undefined
    r = &i;//r and the address at r is now  = to the value and address of I
    *r = 0;//dereferenced value of r is now 0.

    cout << p << endl;//p is equal to 0
    cout << r << endl;// 0
    cout << &i << endl;//0

    cout << *p << endl;//p is equal to 0
    cout << *r << endl;// 0
    cout << i << endl;//0
    */

    /*
    int cnt = 0;
    const int sz = cnt;
    cout << sz << endl;
    const int &r2 = 42;//what is r2 a reference to?
    cout << r2 << endl;

    int c = r2 *2;

    cout << c << endl;
    cout << r2 * 2 << endl;
    */


    //--------------------------------------------------------
    //CONSTANT POINTERS

    /*
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double pi = 3.14159;
    const double* const pip = &pi;//pip is a const pointer which points to a const object pi

    int i2 = 0;
    const int* const p3 = &i2;

    cout << *p3 << endl;
    cout << p3 << endl;


    i2 = 1;//we can still change the value for i2 despite the constant pointer
    
    cout << i2 << endl;//i2 = 1
    cout << *p3 << endl;//p3 = 1
    cout << p3 << endl;//p3 address is still the same as i2 address


    const int* p1 = &i2;

    const int i = 6;
    const int i3 = i, & r = i;
    */

    /*
    int i = 0;
    int i2 = 0;
    const int ib = 2;
    const int ic =  1;
    int *p1 = &i;
    const int *const p3 = &ic;
    const int *p4 = &i;
    int **const p2 = &p1;//points to a pointer so double *
    //i = ic;
    const int *const p5 = &i2;//constant int constant pointer p5
    //const int iv = p5;DOES NOT WORK/NOT ALLOWED
    //int *p1 = &ib; DOES NOT WORK//NOT ALLOWED
    */

    /*
    int i = 0;
    int *const p1 = &i;
    const int ci = 42;
    const int *p2 = &ci;
    const int *const p3 = p2;

    cout << p2 << endl;
    cout << p3 << endl;

    const int &r = ci;
    */

    
    //---------------------------------------------------------------------------
    //MORE CONSTANT POINTERS
    /*
    const int MONTHS = 12;

    const int *a = new int; //POINTER TO A CONST INT

    a = &MONTHS;
    //a = (int*)&MONTHS;

    cout << *a << endl;

    //---------------------

    const int MAX_AGE = 90;

    const int* b = new int;//POINTER TO A CONST INT

    //*b = 95; //NOT ALLOWED TO CHANGE THE CONTENTS OF THE DATA AT THAT ADDRESS
    b = &MAX_AGE;
    //b = (int*)&MAX_AGE;

    cout << *b << endl;
    //cin.get();

    //---------------------

    const int YEAR = 2021;

    int* const c  = new int;//CREATES A CONSTANT POINTER SO THAT THE POINTER CAN'T BE REASSIGNED

    *c = 2022;
    //c = (int*) MAX_AGE; CANT REASSIGN THE POINTER TO POINT TO SOMETHING ELSE

    cout << *c << endl;

    //---------------------

    const int MOBO = 690;

    const int* const d = new int;

    //*d = 2;//POINTER CONTENTS CAN'T BE CHANGED
    //d = (int*)&MOBO;//CANT CHANGE POINTER TO POINT TO SOMETHING ELSE
    //d = nullptr;//CAN'T CHANGE POINTER TO POINT TO SOMETHING ELSE
    //cout << *a << endl;
    */

    //------------------------------------------------------------------------
    //CONSTANT EXPRESSIONS
    //A constant expression is a vaule that cannot change and can be evaluated at compile time
    /*
    constexpr int height = 6;
    constexpr int height2 = height + 1;

    const int* p = nullptr; // p is a pointer to a const int
    constexpr int* q = nullptr; // q is a const pointer to int
    constexpr int* np = nullptr; // np is a constant pointer to int that is null
    constexpr int i = 42; // type of i is const int


    constexpr int* nq = nullptr; // np is a constant pointer to int that is null
    constexpr int j = 0;
    constexpr int ib = 42; // type of i is const int
    constexpr const int* pq = nullptr; // p is a constant pointer to the const int nullptr;
    */

    //-------------------------------------------------------------------------

    //TYPE ALIAS
    /*
    typedef int max;//creates a typing of int with the name max
    typedef max money, *p;//money and *p are of type int and can be used as data types

    money mon = 100;
    cout << mon << "\n";

    max num = 1000;
    cout << num << "\n";

    using multm = max;//sets an undetermined type to be definded later
    multm num2 = 10000;

    cout << num2 << "\n";
   
    p pd = &mon;//doesn't need a type declaration because it points to typdef mon which is an int

    cout << "mon address =" << &mon << "\n";
    cout << "pd address = " << pd << "\n";
    cout << "pd value = " << *pd << "\n";

    p value = 0;
    cout << value << endl;
    
    p valueB = nullptr;
    p* valueC;
    */
    
    /*
    //CONST TYPE ALIAS
    typedef char *names;//DON'T UNDERSTAND HOW TO USE *names IN THIS SCENARIO
    const char fName = 0;//fName is a constant pointer to char
    const char* n; //n is a pointer to a constant pointer to char
    const char* b = 0;//This is wrong compared to fName declaration. b is a pointer to constant pointer to char
    */

    //AUTO TYPE SPECIFIER
    /*
    int a = 5;
    int b = 6;
    double c = 5.5;;

    auto d = a + b;
    auto e = a + c;
    cout << d << "\n";
    cout << e << " \n";
    */

    //-------------------------------------------------------------------------
    //THE DECLTYPE TYPE SPECIFIER
    /*
    int a = 5;

    int f = 5;
    decltype(f) sum = a; // sum has whatever type f returns

    cout << sum << "\n";

    int b  = 10;
    int c = sum + b;

    cout << c << "\n";


    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    //decltype(cj) z = y; // error: z is a reference and must be initialized

    int i = 42, *p = &i, &r = i;
    decltype(r + 0) e; // ok: addition yields an int; e is an (uninitialized)
    //int decltype(*p) c; // error: c is int& and must be initialized
    */
    
    /*
    //DECLTYPE WITH PARANTHESIS
     
    int c  = 2;
    int i;
    i = c;

    decltype((i)) d =c ; // with double paranthesis d is int& and must be initialized
    decltype(i) e; // ok: e is an (uninitialized) int
    e = i;

    cout << d << "\n";
    cout << &d << "\n";
    cout << &c << "\n";
    cout << e << "\n";
    cout << &e << "\n";

    ++d;
    cout << d << "\n";
    cout << &c << "\n";
    cout << &d << "\n";
    */

    /*
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;//d is a reference to a
    ++c;
    ++d;

    cout << c << "\n";
    cout << d << "\n";
    cout << a << "\n";
    cout << &c << "\n";
    cout << &d << "\n";
    cout << &a << "\n";
    */
    
    /*
    int d = 3, e = 4;
    decltype(d) f = d;
    
    cout << &d << "\n";
    cout << &f << "\n";
    decltype(d = e) g = d;

    cout << g << "\n";
    cout << &e << "\n";
    */

    //----------------------------------------------------------------
    //STRINGS, VECTORS, AND ARRAYS
    
    /*
    string n = "marvin";
    string c(10, 'c');
    string lit("value");//copy of a string literal
    int i = 5;
    string ran(i, 'b');
    
    cout << ran << "\n";

    int s = n.size();

    cout << s << "\n";
    cout << n.size() << "\n";
    cout << lit << "\n";

    cout << c << "\n";
    */

    /*
    //to end use ctrl z
    string word;
    while (cin >> word)//takes in a word and adds a new line between each word
        cout << word << "\n";
    //to end use ctrl z
    */

    /*
    string line;
    while (getline(cin, line))//similar to above method but does not create a new line each time,
    //includes white space
        cout << line << "\n";
    */
    
    
    /*
    string line;
    while (getline(cin, line))
        if (!line.empty())
            cout << line << endl;
    */

    /*
    string line;
    while (getline(cin, line))
        if (line.size() > 80)//only prints the line if their are more then 80 words
         cout << line << endl;
    */

    /*
    string line = "Hunter x Hunter";
    auto len = line.size();//autos to type string::size_type
    cout << len << "\n";
    */
    
    /*
    string a = "Hi";
    string b = "Five";
    string c = a + b;

    cout << c << "\n";
    */

    /*
    string a = "Hi";
    string b = "Five";
    a += b;

    string c = "random" + a + "," + b;
    //string s7 = "hello" + ", " + a; //does not work because their needs to be a string variable in between the literal ","
    //string s8 = ("hello" + ", ") + a; //can't add string literals together

    cout << c << "\n";
    cout << a << "\n";
    */

    //EXCERCISES 3.2-3.5
    /*
    //Excerice 3.2
    string line;
    while (cin >> line)
        cout << line << "\n";
    */
    //Excercise 3.3
    //Depending on the program whitespaces are used to know when to break or when to read the next word

    //Excercise 3.4
    //0 = false, 1 = true;

    /*
    string a = "samee", b = "Same";

    if (a != b) {
        cout << "They are not equal" "\n";
        if (a.size() > b.size()) {
            cout << "a is larger then b" << "\n";
        }
        else {
            cout << "b is larger then a" << "\n";
        }
    }
    else
        cout << "a and b are the same" << "\n";
    
    string c = "long", d = "longer";
    if (c.length() != d.length()) {
        if (c.length() > d.length()) {
            cout << "c is longer then d" << "\n";
        }
        else {
            cout << "d is longer then c" << "\n";
        }
    }
    else
        cout << "c and d have the same length" << "\n";
    */
    
    
    //Excercise 3.5 pt 1
    /*
    string sentence;
    while (cin >> sentence)
        cout << sentence;
    */
    
    //Excercise 3.5 pt 2
    /*
    string sentence;
    while (getline(cin, sentence))
        cout << sentence << "\n";
    */

    //RANGE FOR
    /*
    string str("some string");
    for (auto c : str) //translates to for every character in str
        cout << c << "\n";//prints every character in a string on a new line
    */

    /*
    string hello("Hello World!!!");
    decltype(hello.size()) punct_cnt = 0;
    for (auto c : hello)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation character in " << hello << "\n";
    */
    
    /*
    string hello("Hello World!!!");
    for (auto& c : hello)//for the reference to every character in hello
        c = toupper(c);//c is a reference, so the assignment changes the char in hello
        cout << hello << "\n";
    */
    
    /*
    //CHANGING STRINGS TO UPPERCASE
    string hello = "hello world";

    if (!hello.empty())
        hello[0] = toupper(hello[0]);

    cout << hello << "\n";

    //cout << hello.size() << "\n";
    for (decltype(hello.size()) index = 0;//index is of type string::size_type
        index != hello.size() && !isspace(hello[index]); ++index)//isspace checks for white space, as long as there's no whitespace we increment
        hello[index] = toupper(hello[index]);

    cout << hello << "\n";

    for (decltype(hello.size()) index = 0;//index is of type string::size_type
         index <= hello.size(); ++index) {//isspace checks for white space, as long as there's no whitespace we increment
        if (isspace(hello[index])) {
            ++index;
            hello[index] = toupper(hello[index]);
        }
        else{
        hello[index] = toupper(hello[index]);
        }
    }
    cout << hello << "\n";
    */
    
    //Finds the hex for a number
    /*
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15 seperated by spaces. Hit enter when finished:"
        << "\n";
    string result;
    decltype(result.size()) n;
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "Your hex number is: " << result << endl;
    */

    /*
    //Exercise 3.6

    string Xall = "Marvin";
    for (decltype(Xall.size()) index = 0; index <= Xall.size(); index++) {
        Xall[index] = 'X';
    }
    cout << Xall << "\n";

    //Exerise 3.8
    decltype(Xall.size()) index = 0;
    while (index <= Xall.size()) {
        Xall[index] = 'X';
        index++;
    }
    cout << Xall << "\n";

    //Exercise 3.9
    //Valid, prints nothing because there isn't a character at that position.
    string s;
    cout << s[0] << "\n";

    //Excercise 3.10
    string removePunc = "Marvin!?:;";

    for (decltype(removePunc.size()) index = 0; index <= removePunc.size(); index++) {
        if (ispunct(removePunc[index]))
            removePunc.erase(index);
    }
    cout << removePunc << "\n";

    //alternative solution that takes user input

    string removePunct;
    
    cout << "Enter your string" << "\n";

    cin >> removePunct;

    for (decltype(removePunct.size()) index = 0; index <= removePunct.size(); index++) {
        if (ispunct(removePunct[index]))
            removePunct.erase(index);
    }
    cout << removePunct << "\n";
    */

    
    //3.3 LIBRARY VECTOR TYPE
    
    //Declaring vectors
    
    /*
    int n = 5;
    int val = 10;
    int a = 1;
    int b = 2;
    int c = 3;

    vector<int>v1;//default initialization, empty
    vector<int>v2(v1);//copies elements of v1 into v2
    vector<int>v3(n, val);//n int elements initialized to the value of val
    vector<int>v4(n);//n elements, each initialized to 0
    vector<int>v5{a,b,c};
    */
    /*
    vector<int> v1(10);//vector with 10 elements with value 0
    vector<int> v2{10};//vector has 1 element with a value of 10(list initialization)
    vector<int> v3(10, 1);//vector has 10 elements with value of 1
    vector<int> v4{10, 1 };//vector has 2 elements with value 10 and 1(list initialization)
    */

    /*
    vector<string> v5{"Hi"};//one element
    vector<string> v6{10};//10 default string elements
    vector<string> v7{10,"hi"};
    */
    
    /*
    //Excercise 3.12
    vector<vector<int>> ivec;//vector that holds a vector of type int
    //vector<string> svec = ivec;//fails, settings int value to a string
    vector<string> svec(10, "null");//vector with 10 strings
    */

    /*
    vector<int> v2;
    for (int i = 0; i != 100; i++) {
        v2.push_back(i);
    }
    */
    
    /*
    string word;
    vector<string> text;
    while (cin >> word) {
        text.push_back(word);
    }
    */
    
    //Exercise 3.14
    /*
    int x;
    vector<int> randInts;
    cout << "Enter your ints" << "\n";
    while(cin >> x){
        randInts.push_back(x);
    }
    for(int index = 0; index < randInts.size(); index++)
        cout << randInts[index] << "\n";
    
    */

    //Exercise 3.15
    /*
    string y;
    vector<string>randString;
    while(cin >> y){
        randString.push_back(y);
    }
    for(decltype(y.size()) index = 0; index < randString.size(); index++)
        cout << randString[index] << "\n";
    
    */
    
    //3.3.3 Other vector operations
    /*
    int x;
    vector<int> randInts;
    cout << "Enter your ints" << "\n";
    while(cin >> x){
        randInts.push_back(x);
    }
    for(auto &x : randInts)
        cout << x << " ";
    cout << "\n";
    */
    
    /*
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i :v){
        i *= i;
    }
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
    */
    
    /*
    //GRADE COUNTER
    vector<unsigned>scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];//reads as: auto index = grade/10;
                                         //scores[index] = scores[index] + 1;
    }
    for (auto &ind :scores){
        cout << ind << " ";
    }
        cout << "\n";
    */
    
    /*
    //Exercise 3.16
    vector<int> v3(10, 42);
    vector<int> v5{10, 42};
    
    cout << v3.size() << "\n";
    cout << v5.size() << "\n";
    
    for(auto &i : v3){
        cout << i << " ";
    }
    cout << "\n";
    
    for(auto &i : v5){
        cout << i << " ";
    }
    */
    
    /*
    //Exercise 3.17;
    string words;
    string newSentence;
    vector<string> sentence;
    
    while(cin >> words){
        sentence.push_back(words);
    }
    
    for( auto &s : sentence){
        for (auto &c : s){
            c = toupper(c);
        }
    }
    
    const unsigned maxLine = 8;
    decltype(sentence.size()) wordCount;
    
    for (wordCount = 0; wordCount != sentence.size(); wordCount++){
        cout << sentence[wordCount]<< " ";
        if ( (wordCount + 1) % maxLine == 0)
            cout << "\n";
    }
    
    if ( wordCount % maxLine !=0){
        cout << "\n";
    }
     */
    
    /*
    //Exercise 3.19
    vector<int> v1(10, 42);
    vector<int> v2{42, 42 ,42, 42, 42 ,42 ,42 ,42 ,42, 42};
     */
    
    /*
    //Exercise 3.20 pt 1
    vector<int> adjacent;
    int nums;
    int sumAdj;
    while(cin >> nums){
        adjacent.push_back(nums);
    }
    
    for(int index = 0; index < adjacent.size(); index++){
        if(index != adjacent.size() -1){
        sumAdj= adjacent[index] + adjacent[index + 1];//
        cout << sumAdj << " ";
            index++;
        }
        else{
            cout << adjacent[index] << "\n";
        }
    }
    */
    
    /*
    //Exercise 3.20 pt 1 alternative
     //DOES NOT ACCOUNT FOR A SINGLE INPUT
    vector<int> adjacent;
    int nums;
    while(cin >> nums){
        adjacent.push_back(nums);
    }
    
    for (decltype(adjacent.size()) a = 0, b = 1; a < adjacent.size() - 1; a++, b++){
        cout << adjacent[a] + adjacent[b] << " ";
    }
    */
    
    /*
    //Exercies 3.20 pt 2
    vector<int> parallel;
    vector<int> par;
    int nums;
    while(cin >> nums){
        parallel.push_back(nums);
    }
    
    for(decltype(parallel.size()) a = 0, b = parallel.size() -1; a < b; a++, b--){
        cout<< parallel[a] + parallel[b] << " ";
    }
        if(parallel.size() % 2 !=0){
            cout << parallel[(parallel.size() / 2)];
        }
    */
    
    
    //3.4 ITERATORS

    /*
    vector<int> values = {1,2,3,4,5};
    
    for (int i = 0; i < values.size(); i++){
        cout << values[i] << "\n";
    }
    
    cout << " " << "\n";
    
    for (int value : values){
        cout << value << "\n";
    }
    
    cout << " " << "\n";
    
    for(vector<int>::iterator it = values.begin(); it != values.end(); it++){
        cout << *it << "\n";
    }
    */
    
    /*
    string s("hello world");
    if (s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << "\n";
    
    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    cout << s << "\n";
    */
    
    /*
    vector<int>::iterator it;
    string::iterator it2;
    vector<int>::const_iterator it3;
    string::const_iterator it4;
    */
     
    /*
    vector<int> v;
    const vector <int> cv;
    auto it1 = v.begin();//regular it
    auto it2 = cv.begin();//const to const it
    auto it3 = v.cbegin();//const it
    
    vector<string> sentence;
    sentence.push_back("This ");
    sentence.push_back("is ");
    sentence.push_back("a ");
    sentence.push_back("sentence.");
    
    for (auto it = sentence.cbegin(); it != sentence.cend() && !it->empty(); ++it){
        cout << *it;
    }
    */
    
    /*
    //EXERCISE 3.21
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";

    for(auto it = z.begin(); it < z.end(); it++){
        *it *= *it;
        cout << *it << " ";
    }

    cout << "\n";
    
    //EXERCISE 3.22
    vector<string> sentence;
    sentence.push_back("This ");
    sentence.push_back("is ");
    sentence.push_back("a ");
    sentence.push_back("sentence.");
    
    for (auto it = sentence.begin(); it != sentence.end() && !it->empty(); ++it){
        for (auto c : *it) {
            c = toupper(c);
            cout << c << "";
        }
    }
    cout << "\n";
     */
    //EXCERCISE 3.23
    //V1
    
    /*
    vector<int> twox(10);
    int n = 1;
        vector<int>::iterator it = twox.begin();
        vector<int>::iterator itEnd = twox.end();

        while (it != itEnd)
        {
            *it = n = n*2;
            cout << *it << " ";
            it++;
        }
     */
    
    /*
    //V2
    vector<int> twox(10);
    int n = 1;
    for(auto it = twox.begin(); it != twox.end(); it++){
        *it = n = n*2;
        cout << *it << " ";
    }
    */
    
    //CONTINUE REVIEW HERE
    /*
    //THIS MAKES NO SENSE
    vector<string> sentence;
    sentence.push_back("This ");
    sentence.push_back("is ");
    sentence.push_back("a ");
    sentence.push_back("sentence.");
    
    //string sought = "a";
    
    auto beg = sentence.begin(), end = sentence.end();
    auto mid = sentence.begin() + (end - beg)/2;

    
    while (mid != end && *mid != sought) {
        if (sought < *mid)
            end = mid;
        
        else
            beg = mid +1;
        mid = beg + (end - beg)/2;
    }
    cout << *mid << "\n";
    */
     
    /*
    //EXERCISE 3.24
    //REDO THE BOTTOM CODE WITH AN ITERATOR
    
     vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v) // for each element in v (note: i is a reference)
    i *= i; // square the element value
    for (auto i : v) // for each element in v
    cout << i << " "; // print the element cout << endl;
    
    cout << "\n";
    
    
        
    //ANSWER
    cout << "\n";
    
    vector<int> z{1,2,3,4,5,6,7,8,9};
    for(auto it = z.begin(); it < z.end(); it++){
        *it *= *it;
        cout << *it << " ";
    }
    
    cout << "\n";
    */

    //EXERCISE 3.25, grade cluster rewrite
    
    /*
    //GRADE COUNTER
    vector<unsigned>scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];//reads as: auto index = grade/10;
                                         //scores[index] = scores[index] + 1;
    }
    for (auto &ind :scores){
        cout << ind << " ";
    }
        cout << "\n";
     */

    /*
    //ANSWER
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
            ++(*(scores.begin() + grade / 10));
    }
    for (auto i : scores)
        cout << i << " ";
    cout << "\n";
    */

    //ARRAYS
    /*
    unsigned cnt = 42;
    constexpr unsigned sz = 42;

    int arr[10];
    int* parr[sz];
    */
    
    /*
    const unsigned sz = 3;
    int ial[sz] = {0, 1, 2};
    int a2[] = {0, 1, 2};
    int a3[5] {0, 1, 2};
    string a4[3] = {"hi", "bye"};
    //int a5[2] = {0,1,2};
    
    char b1[] = {'C', '+', '+'};
    char b2[] = {'C', '+', '+', '\0'};
    char b3[] = "C++";
    const char a5[7] = "Daniel";
    
    int arr[10];
    int *ptrs[10];//array of 10 pointers to int
    int (*Parray)[10] = &arr;//Parray points to an array of ten ints
    int (&arrRef)[10] = arr;//arrRef refers to an array of 10 ints
    int *(&arry)[10] = ptrs;//arry is a reference to array of 10 pointers
    
    //EXERCISE 3.27
    unsigned buf_size = 1024;
    int ia2[buf_size];//supposed to be illegal?
    int ia3[4 * 7 - 14];
    ia2[0] = 1;
    cout << ia2[0] << "\n";
    */

    /*
    //Excercise 3.28
    textsize();
    */
    
    /*
    //EXCERCISE 3.29
    string sa2[10];//string with 10 elements
    int ia2[10];//int array with 10 values of zero
    */
    
    //ACCESSING THE ELEMENTS OF AN ARRAY
    
    //ARRAY GRADE COUNTER, PRINTS DIFFERENTLY FROM ORIGINAL WITH SAME LOOP
    /*
    unsigned scores[11] = {};
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100){
            ++scores[grade/10];
        }
            for (auto &ind :scores){
                cout << ind << " ";
            }
                cout << "\n";
    }
    */
     
    //ARRAY GRADE COUNTER, SLIGHTLY DIFFERENT FOR, PRINTS DIFFERENTLY FROM VECTOR WITH SAME LOOP
    /*
    unsigned scores[11] = {};
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100){
            ++scores[grade/10];
        }
        for (auto i : scores){
            cout <<  i << " ";
        }
            cout <<"\n";
    }
    */
    
    /*
    //ORIGINAL GRADE COUNTER
    vector<unsigned>scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];//reads as: auto index = grade/10;
                                         //scores[index] = scores[index] + 1;
    }
        for (auto &ind :scores){
            cout << ind << " ";
        }
            cout << "\n";
    */
    
    /*
    //ORIGINAL GRADE COUNTER NEW PRINT, SPECIFIC TO VECTORS
    vector<unsigned>scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];//reads as: auto index = grade/10;
                                         //scores[index] = scores[index] + 1;
        for (auto &ind :scores){
            cout << ind << " ";
        }
            cout << "\n";
    }
        */
    
    /*
    //EXERCISE 3.31
    //V1
    constexpr size_t array_size = 10;
    int ind[array_size];
    for(int index = 0; index < array_size; index++){
        ind[index] = index;
        cout << ind[index] << " ";
    }
    
    cout << "\n";
    
    //V2
    for(auto i :ind){
        ind[i] = i;
        cout << ind[i] << " ";
    }
    
    cout << "\n";
    
    //EXERCISE 3.32
    //V1
    vector<int> ind2;
    for(int index  = 0; index < 10; index++){
        ind2.push_back(index);
        cout << ind2[index] << " ";
    }
    
    cout << "\n";
    
    //V2
    for(int i : ind2){
        ind2.push_back(i);
        cout<< ind2[i] << " ";
        i++;
    }
    */
    
    /*
    //POINTERS AND ARRAYS
    string nums[] = {"one", "two", "three"};
    string *p = &nums[0]; //p points to the first element in nums
    
    string *p2 = nums; // equivalent to p2 = &nums[0];
    
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    auto ia2(ia); //ia2 is an int* that points to the first element in ia
    *ia2 = 42;
    
    cout << ia2 << "\n";
    cout << *ia2 << "\n";
    
    auto ia3(&ia[0]);//ia3 has type *int
    
    decltype(ia) ia4 = {0,1,2,3,4,5,6,7,8,9};
    ia4[4] = i;
    
    cout << ia4[4];
    */
    
    /*
    //POINTERS ARE ITERATORS
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = arr;//points to the first position in the array
    
    cout << *p << "\n";
    ++p;
    cout << *p << "\n";
    
    int *e = &arr[10];//pointer past the last element in arr
    for (int *b = arr; b != e; ++b){
        cout << *b << " ";
    }
    */
    
    //FIND FIRST NEGATIVE USING POINTERS
    /*
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    int *beg = begin(ia);//points to the first element in the array
    int *en = end(ia);//points to one past the last element in the array

    //cout << *beg << endl;
    
    while (*beg != *en && *beg >= 0){
        ++beg;
        if(*beg < 0){
            cout << *beg << "\n";
            *beg = *en;
        }
        else if(*beg == ia[9] && *beg > 0){
            cout << "No negative found" << "\n";
            *beg = *en;
        }
    }
    */
    
    //POINTER ARITHMETIC
    
    /*
    constexpr size_t sz = 5;
    int arr[sz] {0,2,4,6,8};
    int *ip = arr;//equivalent to int *ip = &arr[0]
    int *ip2 = ip + 4;//ip2 points to arr[4], the last element in arr
    int *p = end(arr);
    
    auto n = end(arr) - begin(arr);
    
    cout << *ip2 << "\n";
    cout << *begin(arr) << endl;
    cout << n << "\n";// n is 5, the number of elements in arr
    
    int *o, *r;
    o = &arr[1];//0
    r = &arr[4];//8
    auto s = r-o;
    
    cout << s << endl;
    */
     
    /*
    constexpr size_t sz = 5;
    int arr[sz] {0,2,4,6,8};
    int *b = arr, *e = arr + sz;
    cout << *arr << "\n";
    cout << sz << "\n";
    cout << e << "\n";//points 1 past the end since last position is 4 and e points to position 5
    cout << *e << "\n";//value at this position is out of bounds, returns -1
    
    cout << "\n";
    
    *b = *b + 1;
    cout << b[0] << "\n";//1
    cout << b[1] << "\n";//2
    cout << b[2] << "\n";//4
    cout << b[3] << "\n";//6
    cout << b[4] << "\n";//8
    cout << b[5] << "\n";//-1, out of bounds

    cout << "\n";
    
    while(b < e){
        cout << *b << "\n";
        ++b;//moves the address, not the value
    }
    */
    
    /*
    int ia[] = {1,2,4,5,8};
    int last = *(ia + 4);//ia at position 4
    int last2 = *ia + 4;//1+4
    int last3 = *ia;//1
    
    cout << "\n";
    
    cout << last << "\n";
    cout << last2 << "\n";
    cout << last3 << "\n";
    
    cout << "\n";
 
    int i = ia[2];
    int *p = ia;//points to first position in ia
    
    cout << i << "\n";
    cout << *p << "\n";

    i = *(p+2);//p points to first position at 0, then moves 2 positions
    
    cout << i << "\n";//p at position 2 is 4
    */
    
    /*
    int ia[] = {1,2,4,6,8};
    int *p = &ia[2];
    int j = p[+1];//increments +1 past the current possition of p
    int k = p[-2];//goes back 2 pointers
    
    cout << *p << "\n";
    cout << j << "\n";
    cout << k << "\n";
    */
    
    //EXERCISE 3.34
    /*
    int arr[] = {1,2,3,4,5};
    int *p1 = arr;//pointer p1 = position 0
    int *p2 = arr;//pointer p1 = position 0
    
    p1+= p2-p1;//position - position, 0-0
    
    cout << *p1 << "\n";
    */
    
    //EXERCISE 3.35
    //V1
    /*
    int arr[5];
    
    int *beg = begin(arr);
    int *last = end(arr);
    int i = 0;
    
    while(beg < last){
        arr[i] = 0;
        cout << arr[i] << " ";
        beg++;
    }
    */
    
    /*
    //V2
    int arr[] = {1,2,3,4,5};
    int i = 0;
    int *b = arr;
    int *last = end(arr);
    
    while(b < last){
        *b = 0;
        cout << arr[i] << " ";
        i++;
        b++;
    }
    */
    
    /*
    //EXERCISE 3.36
    //Array method
    
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    
    if (equal(begin(arr), end(arr), begin(arr2),end(arr2)))
        cout << "Arrays are equal.";
    else
        cout << "Arrays are not equal.";
    
    cout << "\n";
    */
    
    /*
    //Vector method
    vector<int> vec{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,6};
    
    if(vec == vec2){
        cout << "Arrays are equal" << "\n";
    }
    else{
        cout << "Arrays are not equal" << "\n";
    }
    */
    
    //3.5.4
    //C-STYLE CHARACTER STRINGS
    /*
    char ca[] = {'C', '+', '+'};//not null terminated
    cout << strlen(ca) << "\n";//disaster: ca isn't null terminated
    */
    
    /*
    //const char ca1[] = "A string example";
    const char ca1[] = "A different string";
    const char ca2[] = "A different string";
    
    if (strcmp(ca1, ca2) == 0){
        cout << "C strings are equal" << "\n";
    }
    else{
        cout << "C strings are not equal" << "\n";
    }
    */
    
    /*
    string s1 = "string";
    string s2 = "string";
    string largeStr = s1 + " " + s2;
    
    cout << largeStr << "\n";
    */
    
    /*
    char largeStr[100];
    
    strcpy(largeStr, ca1);
    strcat(largeStr, " ");
    strcat(largeStr, ca2);
    
    cout << largeStr << "\n";
    */
    
    /*
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
    */
    
    /*
    //EXERCISE 3.39
    //PT1
    string a = "hello";
    string b = "hallo";
    
    if(a.compare(b) == 0){
        cout << "Strings are the same" << "\n";
    }
    else
        cout << "Strings are different" << "\n";
    
    //PT2
    char c[] = "string";
    char d[] = "string";
    
    if(strcmp(c,d) == 0){
        cout << "Strings are the same" << "\n";
    }
z    else
        cout << "Strings are different" << "\n";
    */
    
    /*
    //EXERCISE 3.40
    char a[] = "Hello";
    char b[] = "World";
    char c[20];
    
    strcpy(c,a);
    strcat(c, " ");
    strcat(c, b);
    
    cout << c << "\n";
    */
    
    /*
    string s("Hello World");
    const char *str = s.c_str();
    
    cout << *str << "\n";
    
    int int_arr[] = {0,1,2,3,4,5};
    
    vector<int> ivec(begin(int_arr), end(int_arr));
    
    for(auto i : ivec){
        cout << i << " ";
    }
    
    cout << "\n";
    
    vector<int> subVec(int_arr +1, int_arr+4);
    
    for (auto i : subVec){
        cout << i << " ";
    }
    
    cout << "\n";
    */
    
    /*
    //EXERCISE 3.41
    int int_arr[]{1,2,3};
    
    vector<int> vec(begin(int_arr), end(int_arr));
    
    for(auto i : vec){
        cout << i << " ";
    }
    
    cout << "\n";
    
    //EXCERCISE 3.42
    
    int int_arr2[3];
    
    copy(vec.begin(), vec.end(), int_arr2);
    
    int *beg = begin(int_arr2);
    int *last = end(int_arr2);
    
    while(beg < last){
        cout << *beg << " ";
        *beg++;
    }
    */
    
    /*
    int ia[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };//array of size 3, each element is an array of ints size 4
    cout << "ia at [2][2] = " << ia[2][2] << "\n";
    
    int ia2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};//same as above definition but harder to visualize
    cout << "ia2 at [2][2] = " << ia2[2][2] << "\n";
    
    int ia3[3][4] = {{0}, {4}, {8}};//NOT SURE WHAT THIS DOES
    cout << "ia3 at [0][1] = " << ia3[0][1] << "\n";
   
    
    int ix[3][4] = {0, 3, 6, 9};//initializes first row, rest of the rows are 0s
    cout << "ix at [0][2] = " << ix[0][2] << "\n";
    cout << "ix at [1][1] = " << ix[1][1] << "\n";
    
    //int arr[10][20][30] = {0};//array of size 10; each element is a 20-element array whose elements are arrays of 30 ints
    
    int arr2[2][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,21,23,24};
    cout << "arr2 at = " << arr2[1][2][3] << "\n";
    
    cout << "arr2 values = ";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << arr2[i][j][k] << " ";
            }
        }
    }
    */
    
    /*
    int arr[10][20][30] = {0};
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    ia[2][3] = arr[0][0][0];//Idk what this does
    int (&row)[4] = ia[1];//or this
    */
    
    
    //Fills an array and prints the values from 1-n
    /*
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    
    for (size_t i = 0; i != rowCnt; i++){
        for (size_t j= 0; j != colCnt; ++j){
            ia[i][j] = i * colCnt + j;
            cout << ia[i][j] << " ";
        }
    }
    
    cout << "\n" "\n";
    */
    
    /*
    //2nd way to fill an array and print the values from 1-n
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (auto &row :ia)
        for(auto &col :row) {
            col = cnt;
            ++cnt;
            cout << col << " ";
        }
    
    cout << "\n" "\n";
    
    
    //Prints values of the filled array V1
    cout << "v1" << "\n";
    for (const auto &row : ia)
        for (auto col : row)
            cout << col << " ";
    cout << "\n" << "\n";
    
    //Prints values of the filled array V2
    cout << "v2" << "\n";
    for (auto &row : ia)
        for (auto col : row)
            cout << col << " ";
        
    cout << "\n" "\n";
    
    
    int (*p)[4] = ia;
    p = &ia[2];
    
    cout << (*p)[0] << endl;
    
    cout << "\n";
    */
    
    /*
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    
    //FILLS ARRAY
    cout << "Multid array values" << "\n";
    for (size_t i = 0; i != rowCnt; i++){
        for (size_t j= 0; j != colCnt; ++j){
            ia[i][j] = i * colCnt + j;
            cout << ia[i][j] << " ";
        }
    }
    cout << "\n" "\n";
    
    //Print values in multid array form v1
    cout << "Multid print v1" << "\n";
    for (auto p = begin(ia); p != end(ia); ++p){
        for (auto q = begin(*p); q != end(*p); q++)
            cout << *q << ' ';
        cout <<"\n";
    }
    cout << "\n";
    
     
    
    cout << "Multid print v2" << "\n";
    for (auto r = ia; r != ia + 3; ++r) {
        //cout << r << "\n";
        //cout << *r << "\n";
        for (auto c = *r; c != *r + 4; ++c)//THIS LINE CONFUSES ME
            cout << *c << ' ';
        cout << "\n";
    }
    cout << "\n";
    
    
    cout << "Multid print v2" << "\n";
    using int_array = int[4];
    typedef int int_array[4];
    
    for(int_array *p = ia; p != ia +3; ++p){
        for(int *q = *p; q != *p +4; ++q)
            cout << *q << ' ';
        cout << "\n";
    }
    cout << "\n";
    */
     
    /*
    //EXCERCISE 3.43
    constexpr size_t rowCount = 2, colCount = 3;
    int ia[rowCount][colCount];
    int counter = 1;
    
    //with subscritps
    cout << "EXERCISE 3.43" << "\n";
    cout << "Fills array for future prints" << "\n" "\n";
    cout << "1. With subscripts, no type allias, auto or decltype" << "\n";
    for(size_t i = 0; i<rowCount; i++){
        if(counter == i){
            cout << "\n";
            counter++;
        }
        for(size_t j = 0; j<colCount;j++){
            ia[i][j] = i * colCount + j;
            cout << ia[i][j] << " ";
        }
    }
    cout << "\n" "\n";
    
    //range for w.o type allias, auto, or decltype
    cout << "2. Range for w.o type allias, auto, or decltype";
    for(const int (&row)[colCount] :ia){
        cout<< "\n";
        for (const int &col : row)
            cout << col << " ";
    }
    cout << "\n" "\n";
    
    //pointers w.o type allias, auto, or decltype
    cout << "3. pointers w.o type allias, auto, or decltype";
    for (int (*pr)[colCount] = ia; pr != ia + rowCount; ++pr){
        cout << "\n";
        for(int *pc = *pr; pc != *pr + colCount; ++pc)
            cout << *pc << " ";
    }
    cout << "\n" "\n";
    
    //EXERCISE 3.44
    cout << "EXERCISE 3.44" << "\n";
    //range for with type allias, auto, or decltype
    cout << "1. Range for with type allias, auto, or decltype";
    using int_array = int[colCount];
    for(int_array &row : ia){
        cout << "\n";
        for (const int &col :row)
            cout << col << " ";
    }
    cout << "\n" "\n";

    //Subscripts with type allias, auto, or decltype(REVISE FOR TYPE)
    cout << "2. Subscripts with type allias, auto, or decltype";
    for(size_t i = 0; i<rowCount; i++){
            cout << "\n";
        for(size_t j = 0; j<colCount;j++){
            cout << ia[i][j] << " ";
        }
    }
    cout << "\n" "\n";
    
    //pointer with type allias, auto, or decltype
    cout << "3. Pointer with type allias, auto, or decltype";
    for (int_array *pr = ia; pr != ia + rowCount; pr++){
        cout << "\n";
        for(int *pc = *pr; pc != *pr + colCount; pc++){
            cout << *pc << " ";
        }
    }
    cout << "\n" "\n";
    
    //EXERCISE3.45
    cout << "EXERCISE 3.45" << "\n";
    cout << "1. Auto range for";
    for (auto &row : ia){
        cout << "\n";
        for(size_t col : row){
            cout << col << " ";
        }
    }
    cout << "\n" "\n";
    
    cout << "2. Auto pointers";
    for(auto p = begin(ia); p != end(ia); p++){
        cout << "\n";
        for(auto q = begin(*p); q != end(*p); q++){//NEED BETTER UNDERSTANDING
            cout << *q << " ";
        }
    }
    cout << "\n" "\n";
    
    cout << "3. Auto subscript";
    for (auto i = 0; i != rowCount; ++i) {
        cout << "\n";
        for (auto j = 0; j != colCount; ++j)
          std::cout << ia[i][j] << " ";
      }
    cout << "\n";
    */
    
    //CHAPTER 4
    /*
    //EXPRESIONS
    int ia[] = {0,2,4,6,8};
    int last = *(ia +4);//initializes last to 8,the value of ia[4];
    last = *ia + 4;//initializes last to 4, [0] + 4
    
    int i2 = 1024;
    int k2 = -i2;//i2 is -1024
    bool b1 = true;
    bool b2 = -b1;// b2 is still true
    
    int a = 21 % 6;//result is 3
    int b = 21 % 7;//result is 0
    int c = -21% -8;//result is -5
    int d = 21 % -5;//result is 1
    int e = -21 % 4;//-1
    int f = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    int g = (12 / 3) * 4 + (5 * 15) + 24 % (4 / 2);
    
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";
    cout << "\n";
    
    //EXERCISE 4.5
    int h = -30 * 3 + 21 / 5;
    int i = -30 + 3 * 21 / 5;
    int j = 30 / 3 * 21 % 5;
    int k = -30 / 3 * 21 % 4;
    
    cout << h << "\n";
    cout << i << "\n";
    cout << j << "\n";
    cout << k << "\n";
    
    //EXERCISE 4.6
    int l;
    cout << "Enter value for l" << "\n";
    cin >> l;
    
    if(l % 2 == 0){
        cout << "l is even" << "\n";
    }
    else{
        cout << "l is odd" << "\n";
    }
    */
    
    /*
    vector <string> text{"Marvin.", "Lily.", "Random", "and next line."};
    string elements;
    
    
    //while(cin >> elements){ //CAN'T STOP PROGRAM FROM TAKING IN ELEMENTS
        //text.push_back(elements);
    //}
    
    
    
    for (const auto &s : text) {
        cout << s;
        if(s.empty() || s[s.size() -1] == '.'){
            cout << "\n";
        }
        else cout << " ";
    }
    
    vector <int> vec{1,2,3};
    if (!vec.empty()){
        cout << vec[0];
    }
    */
    
    //EXERCISE 4.10
    /*
    int val = 0;
    
    while(cin>>val){
        if(val == 42){
            break;
        }
    }
    */
    
    //EXERCISE 4.11
    /*
    int a = 4;
    int b = 3;
    int c = 2;
    int d = 1;
    bool e = 0;
    
    if(a>b && b>c && c>d){
        e = true;
        cout << e << "\n";
    }
    
    int ival, jval;
    ival = jval = 0;
    jval =5;
    
    cout << ival << "\n";
    cout << jval << "\n";
    */
    
    //INCREMENT AND DECREMENT OPERATORS
    /*
    int i = 0, j = 2;
    j = ++i;
    j = i++;
    
    cout << i << "\n";
    cout << j << "\n" "\n";
    
    vector <int> v{1,2,3,4,-4,5};
    auto pbeg = v.begin();
    auto beg = v.begin();
    
    
    while (pbeg != v.end() && *beg >= 0){//LEARM MORE
        cout << *pbeg++ << endl;
    }
    */
    
    /*
    string s = "marvin";
    
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    
    cout << s << "\n";
     */
    
    /*
    int ival = 0;
    
    if(ival++ && ival){
        cout << false << "\n";
    }
    else{
        cout << true << "\n";
    }
    */
    
    /*
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    
    n = (*p).size();
    cout << n << "\n";
    
    n = p->size();//equivalent to (*p).size()
    cout << n << "\n;
    */
    
    /*
    int l = 0;
    
    cout << l++ << "\n";
    cout << l << "\n";
    */
    
    //CONDITIONAL OPERATOR
    /*
    int finalGrade;
    cout << "Enter final grade" << "\n";
    cin>>finalGrade;
    
    string finalResult = (finalGrade < 60) ? "fail" : "pass";
    cout << finalResult << "\n";
    
    finalResult = (finalGrade > 79) ? "high pass" : (finalGrade < 60) ? "fail" : "low pass";
    cout << finalResult << "\n";
    
    cout << ((finalGrade < 60) ? "fail" : "pass") << "\n";
    cout << (finalGrade < 60) ? "fail" : "pass";
    cout << "\n";
    */
    
    /*
    //EXERCISE 4.21
    vector <int> nums{1,2,3,4,5};
    
    for (int n  : nums){
        if (n % 2 != 0){
            cout << n * 2 << "\n";
        }
    }
    
    //EXERCISE 4.22
    int finalGrade;
    cout << "Enter final grade" << "\n";
    cin>>finalGrade;
    
    string finalResult = (finalGrade > 75) ? "high pass" : (finalGrade < 60) ? "fail" : "low pass";
    cout << finalResult << "\n";
    
    //EXERCISE 4.23
    string s = "word";
    string pl = (s + (s[s.size() - 1]) == "s" ? "" : "s") ;
    
    //EXERCISE 4.24
    */
    
    /*
    //BITWISE OPERATORS
    int a = 5;
    cout << (a >> 1);
    
    unsigned int b1 = 0145;
    unsigned int b2 = 0257;
    cout << (b1 & b2) << "\n";
    cout << (b1 | b2) << "\n";
    cout << (b1 ^ b2) << "\n";
    
    unsigned long quiz1 = 0;
    cout << (1UL << 27);
    cout << quiz1 << "\n";
    cout << (quiz1 != 1UL) << 27;
    quiz1 = quiz1 | 1UL << 27;
    cout << quiz1 << "\n";
    quiz1 &= ~(1UL << 27);
    cout << quiz1 << "\n";
    bool status = quiz1 & (1ul << 27);
    cout << status << "\n";
    */
    
    /*
    //EXERCISE 4.28
    cout << "Size of char is " << sizeof(char) << "\n";
    cout << "Size of short is " << sizeof(short) << "\n";
    cout << "Size of int is " << sizeof(int) << "\n";
    cout << "Size of long is " << sizeof(long) << "\n";
    cout << "Size of long long is " << sizeof(long long) << "\n";
    cout << "Size of float is " << sizeof(float) << "\n";
    cout << "Size of double is " << sizeof(double) << "\n";
    cout << "Size of long double is " << sizeof(long double) << "\n";
    
    cout << "\n";
    
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << "\n";
    cout << sizeof(p)/sizeof(*p) << "\n";
    */
    
    /*
    vector <int> ivec{1,2,3,4,5};
    
    vector <int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt){
        ivec[ix] = cnt;
        cout << ivec[ix] << "\n";
    }
    */
    
    /*
    //EXERCISE 4.31
    vector <int> ivec{1,2,3,4,5};
    vector <int>::size_type cnt = ivec.size();
    
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--){
        ivec[ix] = cnt;
        cout << ivec[ix] << "\n";
    }
    
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    int *ptr = ia;
    cout << *ia + size << "\n";
    cout << *ptr << "\n";
    */
    
    /*
    //just some random working reference and pointer assignment
    int i;
    const int &j = i;
    const int *p = &i;
    const int &r = j, *q = p;
    */
    
    /*
    //TYPE CASTING
    int i, j;
    //double slope = i/j;
    double slope = static_cast<double>(j)/i;
    
    int d;
    void* p = &d;
    double *dp = static_cast<double*> (p);
    
    char e = 'e';
    const char *pc = &e;
    char *q = const_cast<char*>(pc);
    static_cast<string>(pc);
    
    *q = 'd';
    
    cout << *pc << "\n";
    
    int *ip;
    char *pc2 = reinterpret_cast<char*>(ip);
    
    char *pc3 = (char*) ip;//old style case, ip is a pointer  to int; same effect as reinterpret_cast
    */
    
    /*
    //EXERCISE 4.36
    
    int i;
    double j;
    const string *ps;
    char *pc;
    void *pv;
    
    i *= static_cast<int>(j);
    
    //EXERCISE 4.37
    pv = static_cast<void*>(const_cast<string*>(ps));
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&j);
    pc = static_cast<char*>(pv);
    
    //EXERCISE 4.38 test
    
    int a = 5;
    int b = 2;
    
    double c = static_cast<double>(a/b);
    cout << c << "\n";
    
    double d = (static_cast<double>(a))/b;
    cout << d << "\n";
    */
    
    //CHAPTER 5 STATEMENTS
    /*
    //USE THIS TO END STRING INPUT
    string s;
    string sought = "string";
    
    while (cin >> s && s != sought){
        ;//null statement
    }
    */
    
    /*
    //EXERCISE 5.3
    //Original
    int sum=0,val =1;
  
    while (val <= 10){
        sum +=val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << "\n";
    */
    
    /*
    //With commas
    int sum=0,val =1;
    while (val <= 10 && (sum +=val, ++val));
    std::cout << "Sum of 1 to 10 inclusive is " << sum << "\n";
    */
    
    /*
    //While with if/else and subscripting
    vector<string> scores {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    while (cin >> grade){
        
        if(grade < 60){
            lettergrade = scores[0];
        }
        else{
            lettergrade = scores[(grade - 50)/10];
        }
        if(grade >= 50 && grade % 10 >7){
            lettergrade += '+';
            cout << lettergrade << "\n";
        }
        else if (grade != 100 && grade >= 50 && grade % 10 < 3){
            lettergrade += '-';
            cout << lettergrade << "\n";
        }
        else{
            cout << lettergrade << "\n";
        }
    }
    */
     
    /*
    //EXERCISE 5.5
    vector<string> letterGrade{"F", "D", "C", "B", "A","A++"};
    int grade;
    string lGrade;
    
    while(cin>>grade){
        lGrade = (grade < 60) ? letterGrade[0] : letterGrade[(grade-50)/10];
        lGrade += (grade < 100 && grade >=50 && grade % 10 >7) ? "+" : (grade != 100 && grade >= 50 && grade % 10 < 3) ? "-" : "";
        cout << lGrade << "\n";
    }
    */
    
    /*
    //SWITCH STATEMENTS
    //NOT SURE HOW TO TERMINATE CIN NATURALLY
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while ((cin >> ch) && ch != '0') {
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "Number of vowel a: " << aCnt << "\n";
    cout << "Number of vowel e: " << eCnt << "\n";
    cout << "Number of vowel i: " << iCnt << "\n";
    cout << "Number of vowel o: " << oCnt << "\n";
    cout << "Number of vowel u: " << uCnt << "\n" "\n";
    
    int vowelCnt = 0;
    while (cin >> ch && ch != '0'){
        switch (ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCnt;
                break;
        }
    }
    cout << vowelCnt << "\n";
    
    vowelCnt = 0;
    int otherCnt = 0;
    while (cin >> ch && ch != '0'){
        switch (ch){
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
                break;
            default:
                ++otherCnt;
                break;
        }
    }
    cout << vowelCnt << "\n";
    cout << otherCnt << "\n";
    */
    
    /*
    vector <int> v{1,2,4,5,6};
    auto beg = v.begin();
    
    for(//enter null; beg != v.end() && *beg >= 0; ++beg){
    };
    
    //No condition
    for(int i = 0; //enter null ; ++i);
    
    //No expression, int vector fill
    vector<int> x;
    for (int i; cin >> i; //enter null )
          v.push_back(i);
    */
    
    /*
    //EXERCISE 5.9
    char ch;
    int vowelCnt = 0;
    cout << "Type anything" << "\n";
    
    while(cin>>ch && ch != '0'){
        if(ch == ('a') || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == ('A') || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowelCnt++;
        }
    }
    cout << vowelCnt << "\n";
    
    
    //EXERCISE 5.10, 5.11, 5.12
    int aCnt = 0;
    int eCnt = 0;
    int iCnt = 0;
    int oCnt = 0;
    int uCnt = 0;
    int spaceCnt = 0;
    int tabCnt = 0;
    int lineCnt = 0;
    char lastCh = '\0';
    int ffCnt = 0;
    int fiCnt = 0;
    int flCnt = 0;
    
    cout << "Type anything again" << "\n";
    while(cin.get(ch) && ch != '0'){
        switch(ch){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                if(lastCh == 'f'){
                    ++fiCnt;
                }
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++lineCnt;
                break;
            case 'f':
                if(lastCh == 'f'){
                    ++ffCnt;
                }
                break;
            case 'l':
                if(lastCh == 'f'){
                    ++flCnt;
                }
        }
        lastCh = ch;
    }
    cout << "Number of vowel a: " << aCnt << "\n";
    cout << "Number of vowel e: " << eCnt << "\n";
    cout << "Number of vowel i: " << iCnt << "\n";
    cout << "Number of vowel o: " << oCnt << "\n";
    cout << "Number of vowel u: " << uCnt << "\n" "\n";
    cout << "Number of spaces: " << spaceCnt << "\n";
    cout << "Number of tabs: " << tabCnt << "\n";
    cout << "Number of ff: " << ffCnt << "\n" "\n";
    cout << "Number of fl: " << flCnt << "\n" "\n";
    cout << "Number of fi: " << fiCnt << "\n" "\n";
    */
    
    /*
    //EXERCISE 5.14
    int maxWordCnt = 1;
    string s, lastWord, currentWord, mostUsedWord;
    int mostUsedCnt = 0;
    
    while(cin >> s && s != "0"){
        currentWord = s;
        if(currentWord == lastWord){
            ++maxWordCnt;
            if (maxWordCnt > mostUsedCnt){
                mostUsedWord = s;
                mostUsedCnt = maxWordCnt;
            }
        }
        if (currentWord != lastWord){
            maxWordCnt = 1;
            lastWord = s;
        }
    }
    if(mostUsedCnt > 1){
        cout << mostUsedWord << " comes up " << mostUsedCnt << " times." << "\n";
    }
    else{
        cout << "No word was repeated" << "\n";
    }
    */
    
    /*
    //EXERCISE 5.17
    vector <int> a{0,1,1,2};
    vector <int> b{0,1,1,2,3,5};
    
    auto begA = a.begin();
    auto begB = b.begin();
    auto endA = a.end();
    bool c = true;
    
    //int d = a.end() -1;
    
    for (NULL; begA != endA; begA++, begB++){
        if(*begA == *begB){
            if(begA == (endA - 1) && c){
                cout << "True" << "\n";
            }
        }
        else{
            c = false;
            cout << "False" << "\n";
            break;
        }
    }
    */
    
    /*
    //EXERCISE 5.19
    string a;
    string b;
    
    do{
        cin >> a >> b;
        if(a.compare(b) < 0){
            cout << "A is less then B" << "\n";
        }
        else if(a.compare(b) > 0){
            cout << "B is less than A" << "\n";
        }
        else if(a.compare(b) == 0){
            cout << "Strings are equal" << "\n";
        }
    } while(a != "0" || b !="0");
    */
    
    /*
    //EXERCISE 5.20
    int maxWordCnt = 1;
    string c, lastWord, currentWord, repeatedWord;
    string d;
    while(cin >> c && c != "0"){
        currentWord = c;
        if(currentWord == lastWord){
            ++maxWordCnt;
            repeatedWord = c;
            cout << "Repeated Word = " << c << "\n";
            break;
        }
        else{
            lastWord = c;
        }
    }
    if(maxWordCnt != 2){
        cout << "No word was repeated" << "\n";
    }
    */
    
    /*
    //EXERCISE 5.21
    int maxWordCnt = 1;
    string c, lastWord, currentWord, repeatedWord;
    while(cin >> c && c != "0"){
        currentWord = c;
        if(isupper(currentWord[0]) == isupper(lastWord[0]) && currentWord == lastWord){
            ++maxWordCnt;
            repeatedWord = c;
            cout << "Repeated Word = " << c << "\n";
            break;
        }
        else{
            lastWord = c;
        }
    }
    if(maxWordCnt != 2){
        cout << "No capitalized word was repeated" << "\n";
    }
    */
    
    /*
    //TRY AND CATCH
    int sonsAge = 34;
    int momsAge = 30;
    
    try{
        if (sonsAge > momsAge){
            throw 99;
        }
    }catch(int x){
            cout << "son cannot be older then mom, ERROR CODE: " << x << "\n";
        }
    */
    
    /*
    //EXERCISE 5.23,5.24,5.25
    int a;
    int b;
    
    while(cin >> a >> b){
        try{
            if(b == 0){
                throw 0;
            }
            else{
                cout << a/b << "\n";
            }
        }
            catch(int x){
                cout << "Cannot divide by 0, enter new numbers, ERROR CODE: " << x << "\n";
            }
        }
    */

    
    //CHAPTER 6 FUNCTIONS
    /*
    Chapter6 testObj(5);
    int j = testObj.fact();
    cout << "5! is " << j << "\n";
    
    //cout << "5! is " << testObj.fact() << "\n";
    
    //EXERCISE 6.3 && 6.4
    int val;
    while(cin >> val){
    Chapter6 testObj2(val);
    cout << val << "! is " << testObj2.fact2() << "\n";
    }
    */
    
    /*
    //EXERCISE 6.5
    int val;
    while(cin >> val){
        Chapter6 testObj(val);
        cout << "The absolute value of " << val << " is " << testObj.absolute() << "\n";
    }
    */
    
    /*
    //V2
    int val;
    while(cin >> val){
        Chapter6 testObj(val);
        cout << "The absolute value of " << val << " is " << testObj.absInt() << "\n";
    }
    */
    
    /*
    Chapter6 testObj(NULL);
    for(int i = 0; i !=10;++i){
        cout << testObj.callCnt() << "\n";
    }
    */
    
    /*
    //EXERCISE 6.7
    int i = 0;
    
    Chapter6 testObj(NULL);
    while(i<=10){
        cout << testObj.newCnt() << "\n";
        i++;
    }
    */
    
    /*
    Chapter6 testObj(5);
    int j = testObj.fact();
    cout << "5! is " << j << "\n";
    cout << testObj.splitFact(2);
    */
    
    /*
    int n = 0, i = 42;
    int *p = &n, *q = &i;
    *p = 42;
    p = q;
    
    cout << *p << "\n";
    
    Chapter6 testObj(NULL);
    testObj.reset(&i);
    cout << "i = " << i << "\n";
    
    int i2 = 1;
    int i3 = 2;
    testObj.swap(&i2, &i3);
    testObj.reset2(i);
    cout << i << "\n";
        
    cout << "\n";
    textsize();
    
    int(*func)() = textsize;
    func();
    
    typedef int(*textsizeFunction)();
    textsizeFunction func2 = textsize;
    func2();
    
    typedef void(*helloWorldFunction)(int);
    helloWorldFunction func3 = helloWorld;
    func3(5);
    
    string s = "beemo";
    string::size_type ctr;
    auto index = find_char(s, 'o', ctr);
    cout << index << "\n";
    
    cout << "\n" "Exercises start here" "\n";
    //EXERCISE 6.11
    cout << "EXERCISE 6.11" << "\n";
    int rand = 5;
    testObj.reset3(rand);
    cout << rand << "\n";
    
    cout << "EXERCISE 6.12" << "\n";
    //EXERCISE 6.12
    int three = 3;
    int four = 4;
    
    int *p3 = &three;
    int *p4 = &four;
    testObj.swap2(*p3, *p4);
    */
    
    /*
    i = 0;
    Chapter6 testObj(NULL);
    while(i < 10){
        testObj.counter(0);
        i++;
    }
    
    cout << "\n";
    
    int zero = 0;
    int *z = &zero;
    i =0;
    while(i < 10){
        testObj.count(*z);
        i++;
    }
    */
    
    /*
    Chapter6 testObj(NULL);
    int a = 10;
    testObj.passByTest(a);
    cout << a << "\n";
    */
    
    /*
    const int ci2 = 41;
    const int ci = 42;
    int i = ci;//i is not const
    int * const p = &i;
    *p = 0;
    *p = ci2;
    
    cout << ci2 << "\n";
    */
    
    /*
    Chapter6
     testObj(NULL);
    string::size_type ctr = 0;
    string hello = "Hello World";
    //testObj.find_char(hello, 'o', ctr);
        
    cout << testObj.find_char("hello", 'o', ctr) << "\n";
    */
    
    /*
    Chapter6 testObj(NULL);
    
    string s = "HELLO world";
    string s2 = "";
    cout << testObj.isCap(s) << "\n";
    cout << testObj.isCap(s2) << "\n";
    cout << testObj.hasCapital(s) << "\n";
    testObj.toLower(s);
    */
    
    /*
    int j[2] = {0,1};
    int k[10] = {0,1,2,3,4,5,6,7,8,9};
    cout << *begin(j) << "\n" << *end(j) << "\n";
    */
    
    /*
    std::cout << "All " << argc << " argument"
               << (argc > 1 ? "s are:" : " is:") << std::endl;
     for (int i = 0; i < argc; ++i)
       std::cout << i << "\t" << argv[i] << std::endl;
     if (argc < 3)  // programname argument1 argument2 0
       return -1;
     std::string args(argv[1]);
     args += argv[2];
     std::cout << args << std::endl;
    */
    
    /*
    Chapter6 testObj(NULL);
    
    initializer_list<int> a
    
    testObj.initSum(<#initializer_list<int> il#>);
    */
    
    //INITIALIZER MEMBER LIST
    /*
    name tester;
    cout << tester.GetName() << "\n";
    
    name tester2("Marvin");
    cout << tester2.GetName() << "\n";
    */
    
    //FUNCTION RETURNS
    /*
    initializer_list<int> il{1,2,3,4,5};
    Chapter6 testObj(NULL);
    testObj.initSum(il);
    
    cout << testObj.shorterString("Random", "words") << "\n";
    
    auto ss = testObj.shorterString("Random", "words");
    
    cout << ss << "\n";
    
    string s1 = "Random";
    string s2 = "words";
    auto sz = testObj.shorterString(s1, s2).size();
                                    
    cout << sz << "\n";
    */
    
    /*
    Chapter6 testObj(NULL);
    int ia[10];
    for(i = 0; i != 10; i++){
        testObj.get(ia, i) = 1;
    }
    */
    
    /*
    //EXERCISE 6.33
    Chapter6 testObj(NULL);
    
    int i = 0;
    
    vector<int> ib{1,2,3,4,5};
    testObj.printVect(ib, i);
    */
    
    /*
    Chapter6 testObj(NULL);
    cout << testObj.factorial(5) << "\n";
    
    //RETURNING A POINTER TO AN ARRAY
    typedef int arrT[10];
    using arrT = int[10];
    arrT* func(int i);
    
    int arr[10];
    int *p1[10];
    int (*p2)[10] = &arr;
    */
    
    /*
    Chapter6 testObj(NULL);
    int i;
    std::cin >> i;
    int (&arr)[5] = testObj.arrPtr(i);
    int *arr2 = testObj.arrPtr(i);
    //int arr3[5] = arrPtr(i);  // Error
    //int (*arr4)[5] = arrPtr(i);  // Error
    std::cout << arr[0] << " " << arr2[0] << std::endl;
    */
    
    /*
    Chapter6 testObj(NULL);
    int j[2] = {0,1};
    testObj.print("Hello World");
    testObj.print(j, end(j) - begin(j));
    testObj.print(begin(j), end(j));
    */
    
    /*
    Chapter6 testObj(NULL);
    cout << testObj.volume() << "\n";
    cout << testObj.volume(1) << "\n";
    cout << testObj.volume(1,2) << "\n";
    cout << testObj.volume(1,2,3) << "\n" "\n";
    
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << "\n";
    cout << sizeof(p)/sizeof(*p) << "\n";
        
    cout << "\n";
    Adder(1,2);
    Add({1,2,3,4,5});
    
    int a;
    cin >> a;
    assert(a > 5);
    
    cout << a << "\n";
    */
    
    /*
    //EXERCISE 6.54
    Chapter6 testObj(NULL);
    
    vector<int (*)(int, int)> vfunc;
    
    vfunc.push_back(twoInts);
    vfunc.push_back(twoIntsTwo);
    vfunc[0](1, 2);
    vfunc[1](3,4);
    
    
    for (const auto &e : vfunc)
       e(9, 9);
    
    cout << "\n";
    
    //vf.push_back(testObj.twoInts);
    
    
    //EXERCISE 6.55/6.56
    Chapter6 testObj2(NULL);
    
    std::vector<int (*)(int, int)> vf2;
    
    int a = 10;
    int b = 5;
    int pf1 = testObj.sumTwoInts(a,b);
    int pf2 = testObj.subTwoInts(a,b);
    int pf3 = testObj.divTwoInts(a,b);
    int pf4 = testObj.multTwoInts(a,b);
    vector<int> nums;
    nums.push_back(pf1);
    nums.push_back(pf2);
    nums.push_back(pf3);
    nums.push_back(pf4);
    
    for(auto &e : nums){
        cout << e << "(" << a << "," << b << ")" << "\n";
    }
    */
    
    /*
        
    //CHAPTER 9
    int n;
    vector<int> v(10, n);//vector has 10 elements with value of 1
    list<deque<int>> ldi;//list of deques that holds ints

    cout << "Debug works" << "\n";
    */

    //EXERCISE 9.4 AND 9.5
    /*
    Chapter6 testObj(NULL);
    
    vector<int> numbers{1,2,3,4,5};
    int n = 3;

    cout << testObj.findVecInt(numbers, n) << "\n";
   */

    /*
    list<string> authors = {"Milton", "Shakespeare", "Austen"};
    vector<const char*> articles = {"a", "an", "the"};
    list<string> list2(authors); // ok: types match
    forward_list<string> words(articles.begin(), articles.end());

    for (auto e : list2) {
        cout << e << "\n";
    }

    //ITERATOR RANGE
    vector<int>nums{ 1,2,3,4,5 };
    vector<int>::iterator a = nums.end() - 2;

    deque<int> newNums(nums.begin(), a); //holds iterator range

    for (auto e : newNums) {
        cout << e << "\n";
    }
    
    //CONTAINER DECLARATIONS
    vector <int> ivec(10, -1);
    list<string>svec(10, "hi!");
    forward_list<int>ivec2(10);
    deque<string>svec2(10);

    array<int, 42>;//array that holds 42 ints
    array<string, 10>;//array that holds 10 strings

    array<int, 10>::size_type i;//array type includes element type and size
    array<int, 10> ia2 = { 0,1,2,3,4,5,6,7,8 };//list initialization
    array<int, 10> ia3 = { 42 };//ia3[0] is 42, remaining elements are 0

    int digs[10] = { 0,1,2,3,4,5,6,7,8,9 };
    //int cpy[10] = digs;//error, no copy or assignment for built-in arrays
    array<int, 10>digits = { 0,1,2,3,4,5,6,7,8,9 };
    array<int, 10>copy = digits;//copys allowed for constructor arrays;

    //EXERCISE 9.11: 6 ways to create a vector
    vector<int> v1;                        // Empty
    vector<int> v2(v1);                    // Empty
    vector<int> v3 = v1;                   // Empty
    vector<int> v4{ 1, 2, 3 };             // 3 elements: 1, 2, 3
    vector<int> v5 = { 1, 2, 3 };          // 3 elements: 1, 2, 3
    vector<int> v6(v5.begin(), v5.end());  // 3 elements: 1, 2, 3

    vector<int> v7(5);                     // 5 elements: 0, 0, 0, 0, 0
    vector<int> v8(5, 1);                  // 5 elements: 1, 1, 1, 1, 1

    //EXERCISE 9.12
    std::vector<A> va;
    std::vector<B> vb;

    //std::list<A> la(vb.begin(), vb.end());  // Error, convert B to A
    std::list<B> lb(va.begin(), va.end());  // OK, convert A to B

    //EXERCISE 9.13
    std::list<int> li{ 1, 2, 3 };
    std::vector<int> vi{ 4, 5, 6 };

    std::vector<double> vd1(li.begin(), li.end());
    std::vector<double> vd2(vi.begin(), vi.end());

    std::cout << vd1[0] << " " << vd2[0] << std::endl;

    list<string> names;
    vector<const char*> oldstyle;
    names.assign(oldstyle.cbegin(), oldstyle.cend());//replaces values in names with a pointer range


    oldstyle.push_back("Marvin");
    oldstyle.push_back("Lily");
    for (auto e : names) {
        cout << e << "\n";//DOESN'T WORK, DOESN'T PRINT
    }

    list<string> slist(1);//one element which is an empty string
    slist.assign(10, "Hiya!");//ten elements, each Hiya!

    list<const char*> pointys{ "aaa", "bbb", "ccc" };
    vector<string> vs;

    vs.assign(pointys.begin(), pointys.end());

    //EXERCISE 9.15
    
    
    vector<int>nums3{ 1,2,3 };
    vector<int>nums4{ 1,2,3,4,5 };
    vector<int>nums5{ 1,2,3 };

    bool isEqual = false;
    
    if (nums3 == nums5) {
        isEqual = true;
        cout << "They are equal" << "\n";
    }
    else {
        cout << "They are not equal" << "\n";
    }

    list<int>nums6{ 1,2,3 };

    Chapter6 testObj(NULL);
    
    list<int>li2{ 1,2,2 };
    vector<int>vi2{ 1,2,3 };

    testObj.compareListVec(li2, vi2);

    list<int>ilist;
    for(size_t ix = 0; ix !=4; ix++){
        ilist.push_front(ix);
    }
    
    for(auto e : ilist){
        cout << e << " ";
    }
    
    cout << "\n";
    
    vector<string>svec3;
    list<string>slist3;
    
    slist3.insert(slist3.begin(), "Hello");
    svec3.insert(svec3.begin(), "Hello");
    
    for(auto e: svec3){
        cout << e << "\n";
    }
    
    list<string>slist2;

    vector<string> v = { "quasi", "simba", "frollo", "scar" };
    slist2.insert(slist2.begin(), v.end() - 2, v.end());
    
    for (auto e : slist2) {
        cout << e << " ";
    }

    cout << "\n";
    
    slist2.insert(slist2.end(), { "these", "words", "will",
    "go", "at", "the", "end" });

    for (auto e : slist2) {
        cout << e << " ";
    }

    cout << "\n";
    */
    
    /*
    //PUSH FRONT FUNCTION
    slist2.insert(slist2.begin(), slist2.begin(), slist2.end());

    string word;
    list<string>first;
    auto iter = first.begin();
    while (cin >> word) {
        iter = first.insert(iter, word);
    }
    */
    
    /*
    //EXERCISE 9.18
    deque<string>wordss;
    string word2;
    
        while (cin >> word2 && word2 != "STOP") {
            wordss.push_back(word2);
    }
    
        for (auto e : wordss) {
            cout << e << " ";
    }
        cout << "\n";
    
    //EXERCISE 9.19
    list<string>wordss2;
    string word3;

    cout << "Deque print" << "\n";
    while(cin>>word3 && word3 != "STOP"){
        wordss2.push_back(word3);
    }
    
    cout << "List print" << "\n";
    for(auto e : wordss2){
        cout << e << " ";
    }
    
    cout << "\n";
    */
    
    /*
    //EXERCISE 9.20
    list<int> newNums2{1,2,3,4,5,6};
    deque<int> oddNums, evenNums;
    
    auto begNums = newNums2.begin();//auto declares same as list<int>::iterator
    auto endNums = newNums2.end();
    
    for(;begNums != endNums; begNums++){
        if(*begNums % 2 != 0){
            oddNums.push_back(*begNums);
        }
        else{
            evenNums.push_back(*begNums);
        }
    }
    
    for(auto e : oddNums){
        cout << e << " ";
    }
    cout << "\n";
    
    for(auto e : evenNums){
        cout << e << " ";
    }
    cout << "\n";
    
    //EXERCISE 9.24
    vector<int> newVec{1};
    
    auto &fetch = newVec.at(0);
    auto fetch2 = newVec.begin();
    auto &fetch3 = newVec.front();

    cout << fetch << "\n";
    cout << *fetch2 << "\n";
    cout << fetch3 << "\n";
    */
    
    /*
    //ERASE
    list<int> ranNums{1,2,3,4,5,6,7,8,9,10};
    auto litx = ranNums.begin();
    auto lity = next(ranNums.begin(), ranNums.size() / 2);
    
    ranNums.erase(litx, lity);
    
    for(auto e : ranNums){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*
    //EXERCISE 9.26
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    list<int> ib(begin(ia), end(ia));
    vector<int> ic(begin(ia), end(ia));
    
    
    //for(auto e : ia){
        //ib.push_back(e);
        //ic.push_back(e);
    //}
    
    auto litx = ib.begin();
    auto lity = ib.end();
    
    for(;litx !=lity; litx++){
        if(*litx % 2 !=0){
            ib.erase(litx);
        }
    }
    
    for(auto e : ib){
        cout << e << " ";
    }
    cout << "\n";
    
    auto vitx = ic.begin();
    auto vity = ic.end();
    for(; vitx != vity; vitx++){
        if(*vitx % 2 == 0){
            ic.erase(vitx);
        }
    }
    
    for(auto e : ic){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*
    //I DON'T UNDERSTAND THIS
    forward_list<int> flist{1,2,3,4,5,6,7,8,9};
    auto prev = flist.before_begin();
    auto curr = flist.begin();
    while(curr != flist.end()){
        if(*curr % 2 != 0){
            curr = flist.erase_after(prev);
        }
        else{
            prev = curr;
            ++curr;
        }
    }
    
    for( auto e : flist){
        cout << e << " ";
    }
    
    cout << "\n";
    */
    
    /*
    //EXERCISE 9.28
    Chapter6 testObj(NULL);
    //forward_list<string> strFList;
    string s1;
    string s2;
    forward_list<string> strFList;
    
    while((cin>>s1 && s1 != "STOP") && (cin>>s2 && s2 != "STOP")){
        testObj.insFString(strFList, s1, s2);
    }
    //END
    */
    
    /*
    //EXERCISE 9.31
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin(); // call begin, not cbegin because we're changing vi
    while (iter != vi.end()){
        if (*iter % 2 != 0) {//same as (*iter % 2)
            
            iter = vi.insert(iter, *iter); // duplicate the current
            iter += 2; // advance past this element and the one inserted before it
        }
        else{
            iter = vi.erase(iter); // remove even elements
    // don't advance the iterator; iter denotes the element after the one we erased
        }
    }
    
    for(auto e : vi){
        cout << e << " ";
    }
    
    cout << "\n";
    
    list<int> li = {0,1,2,3,4,5,6,7,8,9};
    auto liter = li.begin(); // call begin, not cbegin because we're changing vi
    while (liter != li.end()){
        if (*liter % 2) {
            liter = li.insert(liter, *liter); // duplicate the current
            liter++; liter++;// advance past this element and the one inserted before it
        }
        else{
            liter = li.erase(liter); // remove even elements
    // don't advance the iterator; iter denotes the element after the one we erased
        }
    }
    
    for(auto e : li){
        cout << e << " ";
    }
     
    cout << "\n";
    
    
    forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};
    auto prefliter = fli.before_begin();
    auto curfliter = fli.begin();
    
    while (curfliter != fli.end()){
        if (*curfliter % 2) {
            prefliter = fli.insert_after(prefliter, *curfliter);
            ++prefliter;
            ++curfliter;
        }
        else{
            curfliter = fli.erase_after(prefliter);
        }
    }
    
    for(auto e : fli){
        cout << e << " ";
    }
    */
    
    /*
    vector<int>vi{1,2,3,4,5,6};
    auto iter = vi.begin();
    while (iter != vi.end()){
        if (*iter % 2){
    iter = vi.insert(iter, *iter);
    iter+=2;
        }
        else{
            iter++;
        }
    }
    for(auto e : vi){
        cout << e << " ";
    }
    
    cout << "\n";
    */
    
    /*
    const char *cp = "Hello World!";
    char noNull[] = {'H', 'i'};
    string s1(cp); //copy cp into s1
    cout << s1 << "\n";
    string s2(noNull, 2);//copy two characters from noNull.
    string s3(noNull);//undefined
    string s4(cp + 6, 5);//copy five characters starting at position 6
    string s5(s1, 6, 5);//copy five characters starting at position 6
    string s6(s1, 6);//copy from position 6 to end
    string s7(s1, 6, 20);//copy 20 characters starting from position 6
    //string s8(s1, 16);// copy from psoition 16 to end(out of range)
    string s;
    s.insert(s.size(), 5, '!'); // insert five exclamation points at the end of s
    s.erase(s.size() - 5, 5); // erase the last five characters from s
    const char *cp2 = "Stately, plump Buck";
    s.assign(cp2, 7); // s == "Stately"
    cout << s << "\n";
    s.insert(s.size(), cp2 + 7); // s == "Stately, plump Buck"
    cout << s << "\n";
    */
    
    /*
    string s  = "some string", s2 = "some other string "; string s3 = "                     ";
    s.insert(0, s2);
    cout << s << "\n";
    s.insert(0, s2, 0, s3.size());//insert s2, then insert s2 up to the size of s3
    cout << s << "\n";
    */
    
    /*
    string s("C++ Primer"), s2 = s;
    s.insert(s.size(), " 4th Ed.");
    s2.append(" 4th Ed.");
    cout << s2 << "\n";
    
    s.erase(11, 3); // s == "C++ Primer Ed."
    s.insert(11, "5th"); // s == "C++ Primer 5th Ed." // starting at position 11, erase three characters and then insert "5th"
    s2.replace(11, 3, "5th"); // equivalent: s == s2
    cout << s2 << "\n";
    
    s.replace(11, 3, "Fifth");
    cout << s << "\n";
    */
    //EXERCISE 9.41
    
    /*
     {
    vector<char> vc{'H','E','L','L','O'};

    string str(vc.cbegin(), vc.cend());//CAUSES ERROR BUT WORKS
    cout << str << "\n";
    */
    //OR
    /*
    string str;
    for(auto e :vc){
        str.push_back(e);
    }
    cout << str << "\n";
     }
    */
    
    /*
    //EXERCISE 9.43(INCOMPLETE)
    Chapter6 testObj(NULL);
    
    string s = "This has strings and strings";
    string oldVal = "strings";
    string newVal = "words";
    
    testObj.replaceS(s, oldVal, newVal);
    
    //testObj.replaceS(s, oldVal, newVal);
    */
    
    /*
    //CHAPTER 10 ALGORITHMS
    vector<int> nums{1,3,5,23,42,56,35};
    
    int val = 42;
    auto result = find(nums.cbegin(), nums.cend(), val);
    cout << "The value " << val << (result == nums.cend() ? " is not present" : " is present") << "\n";
    
    int ia[] = {27, 210, 12, 47, 109, 83};
    int val2 = 83;
    int* result2 = find(begin(ia), end(ia), val2);
    
    cout << "The 2nd value " << val2 << (result2 == end(ia) ? " is not present" : " is present") << "\n";
    
    auto result3 = find(ia + 1, ia + 4, val2);
    cout << "The 2nd value " << val2 << (result3 == end(ia) ? " is not present" : " is present") << "\n";
    */
    
    /*
    //EXERCISE 10.1
    int n;
    vector<int> vec;
    int given = 5;
    int count  = 0;

    while(cin>>n){
        vec.push_back(n);
    }
    vector<int>::iterator vbeg = vec.begin();
    for(;vbeg != vec.end(); vbeg++){
        if(*vbeg == given){
            count++;
        }
    }
    
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";
    cout << count << "\n";
    */
    
    /*
    //EXERCISE 10.2
    string s;
    list<string>lstr;
    string find = "when";
    int lcount = 0;
    
    while(cin>>s && s!= "STOP"){
        lstr.push_back(s);
    }
    
    for (auto e : lstr){
        cout << e << " ";
    }
    cout << "\n";
    
    auto li = lstr.begin();
    for(;li != lstr.end(); li++){
        if(*li == find){
            lcount++;
        }
    }
    cout << lcount << "\n";
    */
    
    /*
    //EXERCISE 10.3
    vector<int>vec{1,2,3,4,5,6};
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    cout << sum << "\n";
    
    
    vector<string>v{"Lapis", "Lazuli"};
    string sum2 = accumulate(v.cbegin(), v.cend(), string(" "));
    cout << sum2 << "\n";
    
    //EXERCISE 10.5
    std::vector<const char *> roster1{"abc", "def", "ghi"};
    std::list<const char *> roster2{"abc", "def", "ghi"};
    // Two C-style strings, compare the pointer (addresses of the two strings)
    std::cout << "The two sequences are "
            << (std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) ?
                "equal." : "not equal.") << std::endl;  // not equal

    // Two library strings, compare the value
    std::vector<std::string> roster3{"abc", "def", "ghi"};
    std::list<std::string> roster4{"abc", "def", "ghi"};
    std::cout << "The two sequences are "
            << (std::equal(roster3.cbegin(), roster3.cend(), roster4.cbegin()) ?
                "equal." : "not equal.") << std::endl;  // equal

    // One library string and one C-style string, compare the value
    std::cout << "The two sequences are "
            << (std::equal(roster1.cbegin(), roster1.cend(), roster4.cbegin()) ?
                "equal." : "not equal.") << std::endl;  // equal
    */
    
    /*
    //FILL AND FILL_N ALGO
    vector<int>vec{1,2,3,4,5,6};
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";
    
    fill(vec.begin(), vec.end(), 0);
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";

    
    fill(vec.begin(), vec.begin() + vec.size()/2, 10);
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";
    
    fill_n(vec.begin(), vec.size(), 0);//vec.size returns a size_type value, not an iterator
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";

    auto it = back_inserter(vec);//Adds an element to the back of the vector
    *it = 42;
    
    fill_n(back_inserter(vec), 10, 0);//adds 10 elements with a value of 0 to the back of the vec
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";
    
    *it = 43;//Every call to *it will add that value to the back of the vector
    for(auto e : vec){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*
    //REPLACE AND REPLACE_COPY ALGO
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)];//a2 had the size of a1;(Why do we devide??)
    auto ret = copy(begin(a1), end(a1), a2);//ret always points to one past the last element
    
    for(auto e : a2){
        cout << e << " ";
    }
    cout << "\n";
    
    list<int> ilist  = {0,3,42,50,0,36};
    replace(ilist.begin(), ilist.end(), 0, 42);
    for(auto e : ilist){
        cout << e << " ";
    }
    cout << "\n";
    
    list<int> ilist2  = {0,3,42,50,0,36};
    vector<int> ivec;  //= {0,3,42,50,0,36};
    replace_copy(ilist2.cbegin(), ilist2.cend(), back_inserter(ivec), 0, 42);
    for(auto e : ilist2){
        cout << e << " ";
    }
    cout << "\n";
    
    for(auto e : ivec){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*
    //EXERCISE 10.6
    vector<int> zeros{10,10,10,10,10};
    fill_n(zeros.begin(),zeros.size(), 0);
    for(auto e : zeros){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*//COPIED CODE
    //EXERCISE 10.7
    vector<int> vec; list<int> lst; int i;
    while (cin >> i)
    lst.push_back(i);
    vec.resize(lst.size());
    // We must resize the vector before copying the elements so that it can hold
    // at least the same amount of elements.
    copy(lst.cbegin(), lst.cend(), vec.begin());
    
    vector<int> vec2;
    //vec.reserve(10);
    // Reserve only allocate memory, while not add elements to the vector, but
    // the function `fill_n` need `n` elements in container.
    vec2.resize(10);  // Use `resize` to add elements
    fill_n(std::back_inserter(vec2), 10, 0);
    // Or use `back_inserter` to add elements
    fill_n(vec2.begin(), 10, 0);
    */
    
    /*
    //EXERCISE 10.8
    vector<string> words{"The", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    sort(words.begin(),words.end());
    for(auto e : words){
        cout << e << " ";
    }
    cout << "\n";
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
    for(auto e : words){
        cout << e << " ";
    }
    cout << "\n";
    */
    
    /*
    //EXERCISE 10.9
    Chapter6 testObj(NULL);
    std::vector<std::string> words2;
      for (std::string s; std::cin >> s && s != "STOP"; words2.push_back(s)) {}
      testObj.elimDups(words2);
    */
    
    
    cout << "\n";
    return 0;
}



