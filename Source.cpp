#include <iostream>


struct Foo {
    void say() const
    {
        std::cout << "Foo_says: " << msg_ << std::endl;
    
    }
protected:
    Foo(const char* msg) : msg_(msg) {}
private:
    const char* msg_;
};



struct Bar : Foo {
   Bar(const char* msg): Foo(msg){}
   
 
    //Foof('aa');
    
};

Foo get_foo(const char* msg) {
    Bar a(msg);
    
    return a;

}

void foo_says(const Foo& foo) { foo.say(); }



int main()
{
    foo_says(get_foo("Hello"));
   // Foo* f = get_foo("Hello");
   // f->say();
}
/**
* #include <iostream>

using namespace std;
long DigSum(short int a)
{
    int sum = 0;
    a = abs(a);
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

bool IsMod(short int n, int m)
{
    long sum = DigSum(n);
    return ((sum % m) == 0);



}
int main()
{
    int year = 0ui16, mod = 13;
    cin >> year;
    do {
        ++year;
    } while (!IsMod(year, mod));
    std::cout << year;

    return 0;
}
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 

*/