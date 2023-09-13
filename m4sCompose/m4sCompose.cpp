#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
//Verson 1.1
string GetName(string a, string b)
{
	string use = a.size() <= b.size() ? a : b;
	if (use.find(".m4s\"") != string::npos)return use.erase(use.find(".m4s\""), 5) + ".mp4\"";
	return use + ".mp4";
}
int main()
{
	string a, b;
	cout << "声音：";
	cin >> a;
	cout << "视频：";
	cin >> b;
	string wz = "ffmpeg -i " + a + " -i " + b + " " + GetName(a, b);
	system(wz.c_str());
	return 0;
}