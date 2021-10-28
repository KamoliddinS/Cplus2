#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
    friend Mystring operator-(const Mystring &obj);
    
    friend bool operator==(const Mystring &obj, const Mystring &rhs);
    friend bool operator!=(const Mystring &obj, const Mystring &rhs);
    
    friend bool operator <(const Mystring &lhs, const Mystring &rhs);
    friend bool operator >(const Mystring &lhs, const Mystring &rhs);
    
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+=(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, const int &n);
   
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    void operator*=( const int &n );
    void display() const;
    Mystring &operator++();
    Mystring operator++(int);
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
