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
private:
	map<int, string> first_names;
	map<int, string> last_names;
};