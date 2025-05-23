#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float xxa = 1, yya = 1, xxb = 2, yyb = 2, xxc = -1, yyc = 2;
    float *xa = &xxa, *ya = &yya, *xb = &xxb, *yb = &yyb, *xc = &xxc, *yc = &yyc;
    float p, mb, s, R;

    float *xm = new float((*xa + *xc) / 2);
    float *ym = new float((*ya + *yc) / 2);


    mb = sqrt(pow(*xm - *xb, 2) + pow(*ym - *yb, 2));
    da = sqrt(pow(*xb - *xc, 2) + pow(*yb - *yc, 2));
    db = sqrt(pow(*xa - *xc, 2) + pow(*ya - *yc, 2));
    dc = sqrt(pow(*xa - *xb, 2) + pow(*ya - *yb, 2));

    p = (da + db + dc) / 2;
    s = sqrt(p * (p - da) * (p - db) * (p - dc));
    R = (da * db * dc) / (4 * s);

    cout << "mediana mb = " << mb << endl
         << "Dovgyny storin\n da = " << da << " db = " << db << " dc = " << dc << endl
         << "square S = " << s << endl
         << "Radius R = " << R << endl;

    
    delete xm;
    delete ym;

    return 0;
}

