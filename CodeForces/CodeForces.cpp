//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	
//	//short a, b;
//	//long long n, kon, marka = 1;
//	//cin >> a >> b >> n;
//	//kon = n;
//	//for (long long i = 1; i <= kon; i++) {
//	//	if (i == 1 or i == marka) {
//	//		marka += a;
//	//		n -= 1;
//	//	}
//	//	n -= b;
//	//	if (n < 0) {
//	//		cout << i - 1;
//	//		break;
//	//	}
//	//	if (n == 0) {
//	//		cout << i;
//	//		break;
//	//	}
//	//	
//	//}
//	
//	//unsigned long long n, k, mark1, mark2;
//	//string s;
//	//cin >> n >> k >> s;
//	//for (unsigned long long q = 0; q < k; q++) {
//	//	for (unsigned long long i = 0; i < n; i++)
//	//		if (s[i] == '0') {
//	//			mark1 = i + 1;
//	//			break;
//	//		}
//	//	for (unsigned long long j = n-1; j >= 0; j--)
//	//		if (s[j] == '0') {
//	//			mark2 = j + 1;
//	//			break;
//	//		}
//	//	if (mark1 <= n-mark2+1) {
//	//		cout << mark1 << ' ';
//	//		s[mark1-1] = '1';
//	//	}
//	//	else {
//	//		cout << mark2 << ' ';
//	//		s[mark2-1] = '1';
//	//	}
//	//}
//
//	/*unsigned long long n;
//	cin >> n;
//	cout << n * (n + 2);*/
//
//	//long long n, k;
//	//string s;
//	//while (size(s) > 0) {
//	//	if (count(s, n, '1')
//	//}
//
//	//long long a, b, c, ha, hb;
//	//cin >> a >> b >> c;
//	//if (a > b)
//	//	swap(a, b);
//	//ha = (a + 1)/2;
//	//hb = (b + 1) / 2;
//	//if (c == 0)
//	//	cout << b;
//	//else {
//	//	if (c < b - a)
//	//		cout << b - c;
//	//	else {
//	//		while (c > 0 && a > ha && b > hb) {
//	//			a--;
//	//			b--;
//	//			c -= 2;
//	//		}
//	//		cout << b;
//	//	}
//	//}
//
//	//int a, b, t, min;
//	//vector<int> v;
//	//cin >> t;
//	//for (int i = 0; i < t; i++) {
//	//	cin >> a >> b;
//	//	min = a + b;
//	//	for (int c = a; c <= b; c++) {
//	//		if (min > ((c - a) + (b - c)))
//	//			min = (c - a) + (b - c);
//	//	}
//	//	v.push_back(min);
//	//}
//	//for (int i : v)
//	//	cout << i << '\n';
//
//	//int t, n;
//	//string s;
//	//cin >> t;
//	//vector<vector <int>> matrix(t);
//	//for (int i = 0; i < t; i++) {
//	//	cin >> n;
//	//	for (int k = 0; k < n; k++) {
//	//		cin >> s;
//	//		matrix[i].push_back(s.find('#') + 1);
//	//	}
//	//}
//	//for (int i = 0; i < t; i++) {
//	//	for (int j = matrix[i].size()-1; j >= 0; j--)
//	//		cout << matrix[i][j]<<" ";
//	//	cout << '\n';
//	//}
//
//	//int n; cin >> n;
//	//for (int i = 0; i < n; i++) {
//	//	int a; cin >> a;
//	//	vector<string> m(a);
//	//	for (int j = 0; j < a; j++) {
//	//		cin >> m[j];
//	//	}
//	//	for (int j = a-1; j >= 0; j--) {
//	//		cout << m[j].find('#') + 1 << ' ';
//	//	}
//	//	cout << '\n';
//	//}
//
//	//int t; 
//	//cin >> t;
//	//while(t--) {
//	//	int x, y, k;
//	//	cin >> x >> y >> k;
//	//	if (x > y) {
//	//		if (x - y < k)
//	//			cout << (x / k) * 2 << '\n';
//	//		else {
//	//			if (x % k == 0) {
//	//				if (k > x and y == 0)
//	//					cout << 1 << '\n';
//	//				else
//	//					cout << (x / k) * 2 - 1 << '\n';
//	//			}
//	//			else
//	//				cout << (x / k + 1) * 2 - 1 << '\n';
//	//		}
//
//	//	}
//	//	else {
//	//		if (y % k == 0)
//	//			cout << (y / k) * 2 << '\n';
//	//		else
//	//			cout << (y / k + 1) * 2 << '\n';
//	//	}
//	//}
//
//}


	/*int w;
	cin >> w;
	if (w > 2 and w % 2 == 0)
		cout << "YES";
	else
		cout << "NO";*/
		/*int n; cin >> n;

		while (n--) {
			string s; cin >> s;
			if (s.size() > 10) {
				cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
			}
			else
				cout << s << '\n';
		}*/

		/*int n, k=0; cin >> n;
		while (n--) {
			int a, b, c; cin >> a >> b >> c;
			if (a + b + c >= 2)
				k++;
		}
		cout << k;*/

		/*int t; cin >> t;
		while (t--) {
			int x, y, k; cin >> x >> y >> k;
			if (x > y) {
				if (k >= x and y == 0)
					cout << 1 << '\n';
				else if (k >= x and y != 0)
					cout << 2 << '\n';
				else {
					if (x % k == 0 and x - y >= k)
						cout << 2 * (x / k) - 1 << '\n';
					else if (x % k == 0 and x - y < k)
						cout << 2 * (x / k) << '\n';
					else if (x % k != 0 and x - y >= k)
						cout << 2 * (x / k) + 1 << '\n';
					else if(x % k != 0 and x - y < k and y > k)
						cout << 2 * (x / k) + 2 << '\n';
					else if (x % k != 0 and x - y < k and y <= k)
						cout << 2 * (x / k) + 1 << '\n';
				}

			}
			else {
				if (k >= y and y == 0)
					cout << 0 << '\n';
				else if (k >= y and y != 0)
					cout << 2 << '\n';
				else {
					if (y % k == 0)
						cout << 2 * (y / k) << '\n';
					else
						cout << 2 * (y / k) + 2 << '\n';
				}
			}
		}*/

		/*int t; cin >> t;
		while (t--) {
			int x, y, k, hodx = 0, hody = 0, itog; cin >> x >> y >> k;
			if (x % k == 0)
				hodx = x / k;
			else
				hodx = x / k + 1;
			if (y % k == 0)
				hody = y / k;                                                          ЭТО СУКА ПРАВИЛЬНОЕ РЕШЕНИЕ!!!!!!!!!!!
			else
				hody = y / k + 1;
			if (hody >= hodx)
				itog = 2 * hody;
			else
				itog = 2 * hodx - 1;
			cout << itog << '\n';
		}*/

	/*int t, x = 0; cin >> t;
	while (t--) {
		string s; cin >> s;
		if (s.find('+') == -1) {
			x--;
		}
		else {
			x++;
		}
	}
	cout << x;*/

	//int t; cin >> t;
	//while (t--) {
	//	int l, r, k, k1 = 0, itog = 0; cin >> l >> r >> k;
	//	/*for (int i = l; i <= r; i++) {
	//		for (int j = l; j <= r; j++) {
	//			if (j % i == 0)
	//				k1++;
	//		}
	//		if (k1 >= k)
	//			itog++;
	//		k1 = 0;
	//	}*/
	//	itog = r / k - l + 1;
	//	/*if (r % k != 0)
	//		itog++;*/
	//	if (itog < 0)
	//		cout << 0 << '\n';
	//	else
	//		cout << itog << '\n';
	//}
	
//int t; cin >> t;
//while (t--) {
//	vector<int> v;
//	int n, k = 0, dl = 1, vk = 0; cin >> n;
//	while (n--) {
//		int h; cin >> h;
//		v.push_back(h);
//	}
//	/*sort(begin(v), end(v));
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i];*/
//	if (v.size() == 1)
//		cout << 0;
//	else {
//		for (int i = 0; i < v.size() - 1; i++) {
//			if (v[i] <= v[i + 1]) {
//				dl++;
//			}
//			else {
//				k += dl;
//			}		dl = 1;
//		}
//		for (int i = 0; i < v.size() - 1; i++) {
//			if (v[i] > v[i + 1]) {
//				vk++;
//			}
//		}
//		if (vk < k)
//			cout << vk << '\n';
//		else
//			cout << k << '\n';
//	}
	
	//ll n, a1, k, p; cin >> n >> a1 >> k >> p;
	//vector<ll> v(n), maxi;
	//v[0] = a1;
	//for (ll i = 1; i < n; i++) {
	//	v[i] = ((v[i - 1] * k) % p);
	//}
	////for (int i = 0; i < n; i++)
	////	cout << v[i] << ' ';
	//for (ll i = 0; i < 5; i++) {
	//	const auto para = minmax_element(v.begin(), v.end());
	//	ll max = *para.second;
	//	maxi.push_back(max);
	//	nul(v, max);
	//}
	//for (ll i = 4; i >= 0; i--)
	//	cout << maxi[i] << ' ';
	/*sort(v.begin(), v.end());
	for (ll i = v.size() - 5; i <= v.size() - 1; i++)
		cout << v[i] << ' ';*/

	/*int n; cin >> n;
	vector<int> v1(n), v2(n);
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	for (int i = 0; i < n; i++)
		cin >> v2[i];
	for (int i = 0; i < n; i++) {
		int max = 0, ned = 0, maxn = 0;
		if(v1[i] == v
		
	}*/

//int t; cin >> t;
//while (t--) {
//	string s; cin >> s;
//	int a, b;
//	a = int(s[0])-'0';
//	b = int(s[2])-'0';
//	if (s[1] == '<' and a < b)
//		cout << s << '\n';
//	else if (s[1] == '<' and a == b)
//		cout << a << '<' << b + 1 << '\n';
//	else if (s[1] == '<' and a > b)
//		cout << a << '<' << b + (a-b) + 1 << '\n';
//
//	if (s[1] == '=' and a == b)
//		cout << s << '\n';
//	else if (s[1] == '=' and a < b)
//		cout << a+(b-a) << '=' << b << '\n';
//	else if (s[1] == '=' and a > b)
//		cout << a << '=' << b + (a-b) << '\n';
//
//	if (s[1] == '>' and a > b)
//		cout << s << '\n';
//	else if (s[1] == '>' and a < b)
//		cout << a+(b-a)+1 << '>' << b << '\n';
//	else if (s[1] == '>' and a == b)
//		cout << a+1 << '>' << b << '\n';
//
//}
//int a, b, c, t; cin >> t;
//while (t--) {
	/*cin >> a >> b >> c;
	if (a == b)
		cout << c << '\n';
	else if (a == c)
		cout << b << '\n';
	else
		cout << a << '\n';*/

	/*char sim;
	vector <string> v(3);
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
		if (v[i].find('A') == string::npos)
			sim = 'A';
		else if (v[i].find('B') == string::npos)
			sim = 'B';
		else if (v[i].find('C') == string::npos)
			sim = 'C';
	}
	cout << sim << '\n';*/

	/*ll a, b = 0; cin >> a;
	vector<int> v(a);
	for (ll i = 0; i < a; i++) {
		cin >> v[i];
		b += v[i];
	}
	if (round(sqrt(b)) == sqrt(b))
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';*/

//	int n; cin >> n;
//	string s; cin >> s;
//	for (int i = 0; i < n; i++) {
//		if (s[i+1] == 
//	}
//}
//}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

void bubbleSort(vector<int>& v) {
	int n = v.size();

	// Outer loop that corresponds to the number of
	// elements to be sorted
	for (int i = 0; i < n - 1; i++) {

		// Last i elements are already
		// in place
		for (int j = 0; j < n - i - 1; j++) {

			// Comparing adjacent elements
			if (v[j] > v[j + 1])

				// Swapping if in the wrong order
				swap(v[j], v[j + 1]);
		}
	}
}

int partition(vector<int>& arr, int low, int high) {

	// Choose the pivot
	int pivot = arr[high];

	// Index of smaller element and indicates 
	// the right position of pivot found so far
	int i = low - 1;

	// Traverse arr[;ow..high] and move all smaller
	// elements on left side. Elements from low to 
	// i are smaller after every iteration
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	// Move pivot after smaller elements and
	// return its position
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

// The QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {

	if (low < high) {

		// pi is the partition return index of pivot
		int pi = partition(arr, low, high);

		// Recursion calls for smaller elements
		// and greater or equals elements
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

ll bin_stepen(int ch, int st) {
	if (st == 0) return 1;
	if (st % 2 == 0) {
		ll per = bin_stepen(ch, st / 2);
		return per * per;
	}
	else
		return bin_stepen(ch, st - 1) * ch;
}

void resheto(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	vector<bool> prime(n + 1, true);

	for (int p = 2; p * p <= n; p++) {


		if (prime[p] == true) {

			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

//vi fibon;
vi fib(int n) {
	vi fibon;
	//fibon.resize(n+1);
	if (n == 0) {
		fibon.push_back(0);
		return fibon;
	}
	else if (n == 1) {
		fibon.push_back(0);
		fibon.push_back(1);
		return fibon;
	}
	else {
		fibon.push_back(0);
		fibon.push_back(1);
		for (int i = 2; i < n; i++) {
			fibon.push_back(fibon[i - 1] + fibon[i - 2]);
		}
		return fibon;
	}
}

vector<int> prefix_function(string& s) {
	vector<int> p(s.size());
	for (int i = 1; i < s.size(); i++) {
		int j = p[i - 1];
		while (j > 0 && s[j] != s[i])
			j = p[j - i];
		if (s[i] == s[j])
			j++;
		p[i] = j;
	}
	return p;
}

vector<int> z_function(string& s) {
	vector<int> p(s.size());
	p[0] = 0;
	for (int i = 1; i < s.size(); i++) {
		int j = 0;
		int k = 0;
		int teki = i;
		if (s[i] == s[j]) {
			while (s[i] == s[j]) {
				k++;
				j = k;
				i++;
			}
			i = teki;
			p[i] = k;
			k = 0;
			j = 0;
		}
		else
			p[i] = 0;
	}
	return p;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	/*int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		if (s[0] != '1' or s[1] != '0')
			cout << "NO" << '\n';
		else {
			if ((s[2] != '0') and s != "10" and (stoi(s.substr(2, s.size() - 2)) >= 2))
				cout << "YES " << '\n';
			else
				cout << "NO" << '\n';
		}
	}*/

	/*int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		if (n == 1)
			cout << "YES" << '\n';
		else if (n == 2) {
			int flag1 = v[0], k = 0, flag2 = v[1];
			if (flag2 != flag1 + 1 and flag2 != flag1 - 1)
				cout << "NO" << '\n';
			else
				cout << "YES" << '\n';
		}
		else{
			int flag1 = v[0], k = 0, flag2 = v[1];
			if (flag2 != flag1 + 1 and flag2 != flag1 - 1)
				cout << "NO" << '\n';
			else {
				for (int i = 2; i < n; i++) {
					if (v[i] == flag1 + 1 or v[i] == flag1 - 1) {
						flag1 = v[i];
					}
					else {
						if (v[i] == flag2 + 1 or v[i] == flag2 - 1) {
							flag2 = v[i];
						}
						else {
							k += 1;
							break;
						}
					}
				}
				if (k == 0)
					cout << "YES" << '\n';
				else
					cout << "NO" << '\n';
			}
		}
	}*/

	/*int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int m; cin >> m;
		while (m--) {
			string s; cin >> s;
			if (s.size() != n)
				cout << "NO" << '\n';
			else {
				int k = 0;
				for (int i = 0; i < n - 1; i++) {
					for (int j = i + 1; j < n; j++) {
						if (v[i] == v[j]) {
							if (s[i] != s[j]) {
								k++;
								break;
							}
						}
						if (v[i] != v[j]) {
							if (s[i] == s[j]) {
								k++;
								break;
							}
						}
					}
					if (k != 0)
						break;
				}
				if (k == 0)
					cout << "YES" << '\n';
				else
					cout << "NO" << '\n';
			}
		}
	}*/

	/*int a, b, a1;
	cin >> a >> b;
	a1 = a;
	vector<int> v;
	v.push_back(b);
	while (b != a) {
		if (b % 2 != 0 and b % 10 != 1) {
			cout << "NO";
			break;
		}
		else {
			if (b % 2 == 0) {
				b = b / 2;
				v.push_back(b);
			}
			else if (b % 10 == 1) {
				b = b / 10;
				v.push_back(b);
			}
			if (b < a) {
				cout << "NO";
				break;
			}
			else if(b == a) {
				cout << "YES" << '\n' << v.size() << '\n';
				for (int i = v.size()-1; i >= 0; i--) {
					cout << v[i] << ' ';
				}
				break;
			}
		}
	}*/

	/*int n, k, pos1 = 0, pos2 = 0, ka = 0;
	string s = "abcdefghijklmnopqrstuvwxyz", s1;
	cin >> n >> k;
	vector<char> str(n);
	vector<vector<char>> v(n);
	for (int i = 0; i < n; i++)
		v[i] = str;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				v[i][j] = 'a';
		}
	}
	for (int i = 0; i < n; i++) {
		ka = 0;
		for (int j = 0; j < n; j++) {
			if (v[i][j] = 'a')
				ka++;
			if (j < n / 2 and ka == 0)
				v[i][j] = s[pos1];

		}
	}*/

	/*if (n % 2 != 0) {
		for (int i = 0; i < n; i++) {
			vector<char> str(n);
			pos2 = pos1;
			for (int j = 0; j < n; j++) {
				str[j] = s[pos2];
				if (j >= i and j < n/2) {
					pos2++;
					if (pos2 > k - 1)
						pos2 = 0;
				}
				else {
					pos2--;
					if (pos2 < 0)
						pos2 = k-1;
				}
			}
			for (int p = 0; p < n; p++)
				cout << str[p];
			cout << '\n';
			if (i < n / 2) {
				pos1++;
				if (pos1 > k - 1)
					pos1 = 0;
			}
			else {
				pos1--;
				if (pos1<0)
					pos1 = k-1;
			}
		}
	}*/

	/*if (n % 2 != 0) {
		for (int i = 0; i < n; i++) {
			vector<char> str(n);
			pos1 = i;
			for (int j = n - 1; j >= n%2+1; j--) {
				str[j] = s[pos2];
				str[i] = s[pos1];
				pos1++;
				pos2++;
				if (pos1 > k)
					pos1 = 0;
				if (pos2 > k)
					pos2 = 0;
			}
			for (int p = 0; p < n; p++)
				cout << str[p];
			cout << '\n';
		}
	}*/

	/*int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	while (q--) {
		int i, k, kol = 0, kp = 0; cin >> i >> k;
		while (k--) {
			set<int> mn;
			int dlmn = mn.size();
			if (i + v[i] > v.size()-1 or i + v[i] < 0) {
				cout << "NO" << '\n';
				kol++;
				break;
			}
			else if (v[i] == 0) {
				cout << "YES" << '\n';
				kol++;
				break;
			}
			else if (v[i] + v[v[i] + i] == 0) {
				cout << "YES" << '\n';
				kol++;
				break;
			}
			else {
				i += v[i];
				mn.insert(i);
			}
			if (dlmn == mn.size()) {
				cout << "YES" << '\n';
				kol++;
				break;
			}
		}
		if(kol == 0)
			cout << "YES" << '\n';
	}*/

	//int t; cin >> t;
	//while (t--) {
	//	int n, m, k = 0, sum = 0; cin >> n >> m;
	//	vector<string> v(n);
	//	vector<int> vi(n);
	//	for (int i = 0; i < n; i++)
	//		cin >> v[i];
	//	for (int i = 0; i < n; i++)
	//		vi[i] = v[i].size();
	//	/*bubbleSort(vi);*/
	//	for (int i = 0; i < n; i++) {
	//		sum += vi[i];
	//		if (sum <= m)
	//			k++;
	//		else
	//			break;
	//	}
	//	cout << k << '\n';
	//}
	//cout << 52254522632 % 9;

	//int t; cin >> t;
	//while (t--) {
	//	/*int n; cin >> n;
	//	cout << n - 1 << '\n';*/
	//	/*string s, s1; cin >> s;
	//	for (int i = s.size()-1; i>=0; i--) {
	//		if (s[i] == 'q')
	//			s1 += 'p';
	//		if (s[i] == 'p')
	//			s1 += 'q';
	//		if (s[i] == 'w')
	//			s1 += 'w';
	//	}
	//	cout << s1 << '\n';*/
	//	int m, a, a1 = 0, b, b1 = 0, c; cin >> m >> a >> b >> c;
	//	ll summ = 0;
	//	if (a >= m) {
	//		summ += m;
	//	}
	//	else {
	//		summ += a;
	//		a1 = m - a;
	//		if (c >= a1) {
	//			summ += a1;
	//			c -= a1;
	//		}
	//		else {
	//			summ += c;
	//			c = 0;
	//		}
	//	}
	//	if (b >= m)
	//		summ += m;
	//	else {
	//		summ += b;
	//		b1 = m - b;
	//		if (c >= b1) {
	//			summ += b1;
	//			c -= b1;
	//		}
	//		else {
	//			summ += c;
	//			c = 0;
	//		}
	//	}
	//	cout << summ << '\n';
	//}

	/*int t; cin >> t;
	while (t--) {
		int k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
		vector<int> v;

		for (int i = 1; i < r2; i++) {
			if (pow(k, i) < r2)
				v.push_back(pow(k, i));
			else
				break;
		}

		for (int i = l1; i <= r1; i++) {
			if
		}
	}*/
	//int t; cin >> t;
	//while (t--) {
	//	int b, k, flag = 0, bv7 = 0, bv17 = 0; cin >> k >> b;
	//	vector<int> bv(b);
	//	for (int i = 0; i < b; i++) {
	//		cin >> bv[i];
	//		if (bv[i] != 7 and bv[i] != 17 and bv[i] != 1 and bv[i]!=289 and bv[i]!=2023)
	//			flag = 1;
	//		if (bv[i] == 7)
	//			bv7++;
	//		if (bv[i] == 17)
	//			bv17++;
	//	}
	//	if (flag == 1)
	//		cout << "NO" << '\n';
	//	else {
	//		if(count(bv.begin(), bv.end(), 7)>1 or count(bv.begin(), bv.end(), 17) > 2)
	//			cout << "NO" << '\n';
	//		else {
	//			cout << "YES" << '\n';
	//			for (int i = 0; i < 1-bv7; i++)
	//				cout << 7 << ' ';
	//			for (int i = 0; i < 2-bv17; i++)
	//				cout << 17 << ' ';
	//			for (int i = 0; i < 1-bv7+2-bv17; i++)
	//				cout << 1 << ' ';
	//		}
	//	}
	//

	/*int t; cin >> t;
	while (t--) {
		int n, suma = 0, sumb = 0, dif = 0, kop = 0; cin >> n;
		vi a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			suma += a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			sumb += b[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i])
				dif++;
		}
		if (dif > abs(suma - sumb))
			kop++;
		if (dif == 0) {
			cout << 0 << '\n';
		}
		else {
			if (suma == sumb) {
				cout << 1 << '\n';
			}
			else {
				kop += abs(suma - sumb);
				cout << kop << '\n';
			}
		}
	}*/

	/*int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll s = 0, koch = 0, kn = 0, kch = 0;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0)
				kch++;
			else
				kn++;
		}
		if (kch != 0)
			cout << 1 + kn << '\n';
		else
			cout << kn - 1 << '\n';
	}*/

	/*vs mes{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	string m; cin >> m;
	int nm, itm; cin >> nm;
	auto it = find(mes.begin(), mes.end(), m);
	itm = it - mes.begin();
	itm += nm;
	itm %= 12;
	cout << mes[itm] << '\n';*/

//int t; cin >> t;
//while (t--) {
//	int n, k, p; cin >> n >> k >> p;
//	if (n * p < abs(k)) {
//		cout << -1 << '\n';
//	}
//	else if (abs(k)%p==0)
//		cout << abs(k)/p << '\n';
//	else {
//		cout << abs(k) / p + 1 << '\n';
//	}
//}

//int t; cin >> t;
//while (t--) {
//	int n; cin >> n;
//	string s; cin >> s;
//}

	string s; cin >> s;
	vector<int> a;
	a = z_function(s);
	for (int i : a) cout << i << ' ';
}
