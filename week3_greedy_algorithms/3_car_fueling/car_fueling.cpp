//l.reait elos.rhuerlo.tkhuetlo.gujdrk,ghdf bmvhdf k,'D:?F':; dfbk,dfkbjdfk,bjdf,kbjd
//dfbndfs jmvhsf jmfgfyskmghysrk,gyskr, g
//fgbvm fjshsk, hgfs ,khge, k jg,dad
//hfdik,asfhksyfmsfh,sdfhks,fyks,fsdifykyf
//bams njdfhams dhyam sjdham shd

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    return -1;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
