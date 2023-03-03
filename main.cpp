#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	while (0 < (n--)) {
		string s; cin >> s;

		const auto& l = s.length();
		auto now = s[0];
		cout << now;
		for (auto i = decltype(l){1}; i < l; ++i) {
			if (now != s[i]) {
				now = s[i];
				cout << now;
			}
		}

		cout << '\n';
	}

	return 0;
}