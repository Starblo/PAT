//这个小破代码竟然写了我一早上外加写到下午三点我真他妈智障中途绕了好些个弯子💔
#include <iostream>
#include <string>
using namespace std;

struct Q
{
    long long int mol = 0;
    long long int den = 0;
};

class Cal
{
private:
    Q aq;
    Q bq;
    Q oq;
    
    void add()
    {
        oq.den = aq.den * bq.den;
        oq.mol = aq.mol * bq.den + bq.mol * aq.den;
    }
    
    void minus()
    {
        oq.den = aq.den * bq.den;
        oq.mol = aq.mol * bq.den - bq.mol * aq.den;
    }
    
    void mul()
    {
        oq.den = aq.den * bq.den;
        oq.mol = aq.mol * bq.mol;
    }
    
    void div()
    {
        oq.den = abs(aq.den * bq.mol);
        oq.mol = abs(aq.mol * bq.den);
        if(aq.mol * bq.mol < 0)
            oq.mol = -oq.mol;
    }
    
    long long int c_divisor(long long int a, long long int b)
    {
        return b == 0 ? a : c_divisor(b, a % b);
    }
    
    void simp(Q q)
    {
        long long int a, b, c;//a b/c
        
        if(q.den == 0)
            cout << "Inf";
        else
        {
            if(q.mol == 0)
                cout << 0;
            else
            {
                long long int c_div = c_divisor(abs(q.den), abs(q.mol));
                q.den = q.den / c_div;
                q.mol = q.mol / c_div;
                
                a = q.mol / q.den;
                b = q.mol % q.den;
                c = q.den;
                
                if(b == 0)
                {
                    if(a < 0)
                        cout << "(" << a << ")";
                    else
                        cout << a;
                }
                else
                {
                    if(a < 0)
                    {
                        cout << "(";
                        cout << a << " " << abs(b) << "/" << c;
                        cout << ")";
                    }
                    else if(a == 0)
                    {
                        if(b > 0)
                            cout << b << "/" << c;
                        else
                            cout << "(" << b << "/" << c << ")";
                    }
                    else
                        cout << a << " " << abs(b) << "/" << c;
                }
            }
        }
    }
    
public:
    void calculate()
    {
        //ini
        scanf("%lld/%lld %lld/%lld", &aq.mol, &aq.den, &bq.mol, &bq.den);
        
        //calculate
        add();
        simp(aq);
        cout << " + ";
        simp(bq);
        cout << " = ";
        simp(oq);
        cout << endl;
        
        minus();
        simp(aq);
        cout << " - ";
        simp(bq);
        cout << " = ";
        simp(oq);
        cout << endl;
        
        mul();
        simp(aq);
        cout << " * ";
        simp(bq);
        cout << " = ";
        simp(oq);
        cout << endl;
        
        div();
        simp(aq);
        cout << " / ";
        simp(bq);
        cout << " = ";
        simp(oq);
        cout << endl;
    }
};

int main()
{
    Cal cal;
    cal.calculate();
    return 0;
}
