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

