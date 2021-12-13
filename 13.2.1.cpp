#include <iostream>
#include <cmath>

using namespace std;

#define z 1
#define INPUT(x) cin >> x
#define PRINT(s) cout << (s)
#define ABS(x) (((x)<0)?(-(x)):(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW2(x) ((x)*(x))

#define Diagnostik(x, msg, ...) \
if (!(x)) {\
    cout << "EROR" << msg << "["<< #x << "] " << __FILE__ << "(" << __LINE__ << ")"; \
    throw; }\
else \
    cout << "ALL GOOD" << endl;

int main(void)
{
    double x, y, w = 0;
    PRINT("x = "); INPUT(x);
    PRINT("y = "); INPUT(y);

#if z > 1;
    w = MAX(POW2(x - z), x - y);
#elif z <= 1
    w = MIN(x - y, y - z);
#endif

    cout << endl;

    PRINT(w);

    cout << endl;
    cout << endl;

    Diagnostik(w == 2, "test");

    return 0;
}
