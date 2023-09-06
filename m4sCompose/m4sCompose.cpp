#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
//Verson 1.0
int main()
{
	string a, b;
	cout << "声音：";
	cin >> a;
	cout << "视频：";
	cin >> b;
	string wz = "ffmpeg -i " + a + ".m4s -i " + b + ".m4s " + (a.size() <= b.size() ? a : b) + ".mp4";
	system(wz.c_str());
	return 0;
}