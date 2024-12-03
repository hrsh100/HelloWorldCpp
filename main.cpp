#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    //输入名称
    cout << "请输入你的名字：";
    string name;
    cin >> name;
    cout << "你好，" << name << "！" << endl;
    cout << "欢迎使用C++!" << endl;
    cin.get();
    cin.get();
    return 0;
}