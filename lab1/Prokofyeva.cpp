
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int DVP, DSP, TREE;
	printf("������� ��������� ���, ��� � ������ (� ��/�3): ");
	scanf_s("%d %d %d", &DVP, &DSP, &TREE);

	int w, d, h;
	int m1, m2, m3, m4, m5, m, count;

	printf("������� �������, ������ � ������: ");
	scanf("%d %d %d", &d, &w, &h);

	if ((d < 50 || d>90) || (w < 80 || w>120) || (h < 180 || h>220)) {
		printf("��������� �� � ���������. ���������� ��� ���. ���������� �������� ��� ����� (������� (50-90), ������ (80-120), ������ (180-220)."); 
		
	}
	else{
	m1 = (w * h * 0.5) / 1000000 * DVP;
	m2 = (h * d * 1.5) / 1000000 * DSP * 2;
	m3 = (w * d * 1.5) / 1000000 * DSP * 2;
	m4 = (h / 100 * w / 100 * 0.01) * 2 * TREE;

	// ����� (������ ����� 1.5 ��):
	if (h < 200) count = 4;
	else count = 5;
	m5 = (w * d * 1.5) / 1000000 * count * DSP;

	m = m1 + m2 + m3 + m4 + m5;
	printf("����� ����� (� ��): %d \n",m);
}
	return 0;
}
