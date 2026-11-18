#include <bits/stdc++.h>

using namespace std;
int ok;
long long cay [20005 * 4], pre[2005], s;

//build
void build (int l, int r, int node){
    if(l == r) {
        cay[node] = pre[l];
        return;
    }

    int mid = (l + r) / 2;
    build(l, mid, node * 2);
    build(mid + 1, r, node * 2 + 1);

    cay[node ]
}