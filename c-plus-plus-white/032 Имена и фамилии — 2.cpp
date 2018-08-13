#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Person {
public:
	void ChangeFirstName(int year, const string& first_name) {
		first_names[year] = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		last_names[year] = last_name;
	}
	string GetFullName(int year) {
		string first, last;
		for (auto year_first_name : first_names) if (year_first_name.first <= year) first = year_first_name.second;
		for (auto year_last_name : last_names) if (year_last_name.first <= year) last = year_last_name.second;
		if (first == "" && last == "") return "Incognito";
		if (first == "") return last + " with unknown first name";
		if (last == "") return first + " with unknown last name";
		return first + " " + last;
	}
	string GetFullNameWithHistory(int year) {
		vector<string> first, last;
		for (auto year_first_name : first_names) if (year_first_name.first <= year) first.push_back(year_first_name.second);
		auto it = unique(begin(first), end(first));
		first.resize(it - begin(first));
		string first_name = first.size() > 0 ? first.back() : "";
		if (first.size() > 0) first.pop_back();
		if (first.size() > 0) {
			reverse(begin(first), end(first));
			first_name += " (";
			for (int i = 0; i < first.size() - 1; ++i) first_name += first[i] + ", ";
			first_name += first.back() + ")";
		}

		for (auto year_last_name : last_names) if (year_last_name.first <= year) last.push_back(year_last_name.second);
		it = unique(begin(last), end(last));
		last.resize(it - begin(last));
		string last_name = last.size() > 0 ? last.back() : "";
		if (last.size() > 0) last.pop_back();
		if (last.size() > 0) {
			reverse(begin(last), end(last));
			last_name += " (";
			for (int i = 0; i < last.size() - 1; ++i) last_name += last[i] + ", ";
			last_name += last.back() + ")";
		}

		if (first_name == "" && last_name == "") return "Incognito";
		if (first_name == "") return last_name + " with unknown first name";
		if (last_name == "") return first_name + " with unknown last name";
		return first_name + " " + last_name;
	}
private:
	map<int, string> first_names;
	map<int, string> last_names;
};