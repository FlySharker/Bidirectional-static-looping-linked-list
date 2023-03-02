#include "Assistance.h"
#include "DblStaticList.h"

using namespace std;

int main(void)
{
	char c = '1';
	dblStaticList<double> la(10);
	dblStaticList<double> lb(10);
	double e;
	int i;

	while (c != '0') {
		cout << endl << "1. �������Ա�.";
		cout << endl << "2. ��ʾ���Ա�.";
		cout << endl << "3. ȡָ��Ԫ��ֵ.";
		cout << endl << "4. ����Ԫ��ֵ.";
		cout << endl << "5. ɾ��Ԫ��.";
		cout << endl << "6. ����Ԫ��.";
		cout << endl << "7. Ԫ�ض�λ.";
		cout << endl << "0.�˳�.";
		cout << endl << "ѡ���ܣ�";
		cin >> c;
		switch (c) {
		case '1':
			la.Clear();
			cout << endl << "����e(e = 0ʱ�˳�):";
			cin >> e;
			while (e != 0) {
				la.InsertElem(e);
				cin >> e;
			}
			break;
		case '2':
			lb = la;
			la.Traverse(Write<double>);
			cout << endl;
			lb.Traverse(Write<double>);
			break;
		case '3':
			cout << endl << "����Ԫ��λ��:";
			cin >> i;
			if (la.GetElem(i, e) == NOT_PRESENT)
				cout << "Ԫ�ز��洢." << endl;
			else
				cout << "Ԫ��:" << e << endl;
			break;
		case '4':
			cout << endl << "����λ��:";
			cin >> i;
			cout << endl << "����Ԫ��ֵ:";
			cin >> e;
			if (la.SetElem(i, e) == RANGE_ERROR)
				cout << "λ�÷�Χ��." << endl;
			else
				cout << "���óɹ�." << endl;
			break;
		case '5':
			cout << endl << "����λ��:";
			     cin >> i;
			     if (la.DeleteElem(i, e) == RANGE_ERROR) 
			 		cout << "λ�÷�Χ��." << endl;
			 	else
			 		cout << "��ɾ��Ԫ��ֵ:" << e << endl;
			     break;
		case'6':
			cout << endl << "����Ԫ��ֵ:";
			cin >> e;
			la.InsertElem(e);
			break;
		case'7':
				cout << endl << "����Ԫ��ֵ:";
				cin >> e;
				i = la.LocateElem(e);
				if (i == 0)
					cout << "ָ��Ԫ�ز�����." << endl;
				else
					cout << "ָ��Ԫ�ص����Ϊ��" << i << endl;
				break;
		}
	}

	system("PAUSE");
	return 0;
}