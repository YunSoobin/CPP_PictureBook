#include <stdio.h>

class OrangeBox {
public:
	OrangeBox();
	~OrangeBox();
	void Add(int addorangeBox);
	void Del(int delorangeBox);
	void Empty();
	int GetTotal() {
		return total;
	}
private:
	int total;
};

OrangeBox::OrangeBox() {
	total = 0;
}

OrangeBox::~OrangeBox() {
	printf("������ ���� ������Ʈ �ӹ� �Ϸ�\n");
}

void OrangeBox::Add(int addorangeBox) {
	total += addorangeBox;
	if (total > 100) total = 100;
}

void OrangeBox::Del(int delorangeBox) {
	total -= delorangeBox;
	if (total < 0) Empty();
}

void OrangeBox::Empty() {
	total = 0;
}


int main() {
	OrangeBox myOrangeBox;

	myOrangeBox.Empty();
	myOrangeBox.Add(5);
	myOrangeBox.Del(2);
	printf("���� ���� ������ : %d��\n", myOrangeBox.GetTotal());
	return 0;
}