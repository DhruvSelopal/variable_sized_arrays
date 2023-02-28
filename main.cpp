int main() {
    int n,q; // n is number of arrays and q is number of qurries.
    cin >> n >> q;
    vector<int> nums[n]; // array of vectors.
    for (int i = 0; i < n;i++){
        int k;
        cin >> k;
        for(int j = 0; j < k ;j++){
            int x;
            cin >> x;
            nums[i].push_back(x);
        }
    }
    for (int a = 0; a < q;a++){
        int b,c;
        cin >> b >> c;
        cout << nums[b][c] << "\n"; // output
    }
}
