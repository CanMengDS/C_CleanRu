#include<iostream>
#include<Thread>
#include<map>
#include"system_clean.h"
#include"MengFileManager.h"
using namespace std;
typedef unsigned int choies;

map<string, string> target_path;

//void testFunc(string path,MThreadPool& threadPool) {
//	if ((filesystem::status(path)).permissions() != filesystem::perms::none) {
//		cout << "����ӵ��Ȩ�޲������ļ�" << endl;
//		this_thread::sleep_for(chrono::seconds(1));
//		threadPool.enterTask([&] {
//			for (auto& e : filesystem::directory_iterator(path)) {
//				if (e.exists() && e.is_regular_file()) {
//					cout << e.path() << endl;
//				}
//			}
//			});
//	}
//	this_thread::sleep_for(chrono::seconds(1));
//}

int main() {
	//target_path.insert(pair<string, string>("���������ļ�(�Ƽ�ɾ��)", "C:\\Users\\33953\\Downloads"));
	//target_path.insert(pair<string, string>("��ʱ�������ļ�01,����������ļ�(�Ƽ�ɾ��)", "C:\\ProgramData\\Microsoft\\Windows\\WER"));
	//target_path.insert(pair<string, string>("��ʱ�������ļ�02,����������ļ�(�Ƽ�ɾ��)", "C:\\Windows\\SoftwareDistribution\\Download"));
	//target_path.insert(pair<string, string>("Windows���»���(�Ƽ�ɾ��)", "C:\\Users\\33953\\AppData\\Local\\Temp"));
	//target_path.insert(pair<string, string>("ϵͳ��ԭ��(����ɾ��)", "C:\\Users\\33953\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	//target_path.insert(pair<string, string >("Ӧ�ó��򻺴�01(��������ֶ�ɾawa,��Щɾ��������ռ�,��Щɾ�˻�Ӱ������������� �t(ܳ��ܳ ) (����ɾ��) ", "C:\\Users\\33953\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	//target_path.insert(pair<string, string>("Ӧ�ó��򻺴�02(����ɾ��)", "C:\\System Volume Information"));
	//target_path.insert(pair<string, string>("Windows ���󱨸�(�Ƽ�ɾ��)", "C:\\Users\\33953\\AppData\\Local"));
	//target_path.insert(pair<string, string>("DirectX ��ɫ������(���Ƽ�/����ɾ��)0.0", "C:\\Users\\33953\\AppData\\Roaming"));

	MThreadPool threadPool(12);
	MScreen meng(&threadPool);

	choies cs;
	while (true) {
		system("cls");
		meng.showMenu();
		cin >> cs;

		switch (cs) {
		case 1:
			cout << "����1s��ʼ����..." << '\n';
			this_thread::sleep_for(chrono::seconds(1));
			meng.startClean();
			this_thread::sleep_for(chrono::seconds(30));
			system("cls");
			break;

		case 2:
			meng.showDetails();
			system("pause");
			break;
		}

	}
}