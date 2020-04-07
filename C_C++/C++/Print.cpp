#include <iostream>
#include <string>
using namespace std;

class BasicPrinter {
	string model, manufacturer;
	int printedCount, availableCount;
public:
	BasicPrinter(string mo = "", string ma = "", int av = 0) { model = mo; manufacturer = ma; printedCount = 0; availableCount = av; }
	virtual void print(int pages) = 0;
	virtual void show() = 0;
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getprintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void printoutPaper(int mass) {	availableCount -= mass; }
};

class InkJetPrinter : public BasicPrinter {
	int availableInk;
public:
	InkJetPrinter(string mo = "", string ma = "", int av = 0, int ink = 0) : BasicPrinter(mo, ma, av) { availableInk = ink; }
	void print(int pages) { if (getAvailableCount() >= pages && availableInk >= pages) { cout << "����Ʈ�Ͽ����ϴ�" << endl; printoutPaper(pages); availableInk -= pages; } else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; }
	void show() { cout << getModel() << " ," << getManufacturer() << " ,���� ���� " << getAvailableCount() << "�� ,���� ��ũ " << availableInk << endl; }
};

class LaserPrinter : public BasicPrinter {
	int availableToner;
public:
	LaserPrinter(string mo = "", string ma = "", int av = 0, int ink = 0) : BasicPrinter(mo, ma, av) { availableToner = ink; }
	void print(int pages) { if (getAvailableCount() >= pages && availableToner >= pages) { cout << "����Ʈ�Ͽ����ϴ�" << endl; printoutPaper(pages); availableToner -= pages; } else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl; }
	void show() { cout << getModel() << " ," << getManufacturer() << " ,���� ���� " << getAvailableCount() << "�� ,���� ��� " << availableToner << endl; }
};

int main() {
	BasicPrinter *printers[2];
	printers[0] = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	printers[1] = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl << "��ũ�� : ";
	printers[0]->show();
	cout << "������ : ";
	printers[1]->show();

	int answer_i1, answer_i2;
	char answer_c;

	do {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> answer_i1 >> answer_i2;
		printers[answer_i1 - 1]->print(answer_i2);
		printers[0]->show();
		printers[1]->show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer_c;
	} while (answer_c != 'n');
}