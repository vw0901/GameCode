#include<iostream>
#include<graphics.h>

int main()
{
	//��ʼ��
	initgraph(1280, 720);

	int x = 0;
	int y = 0;

	BeginBatchDraw();

	while(true) //��ѭ��
	{
		ExMessage msg;
		while (peekmessage(&msg)) // ��ȡ����
		{
			if (msg.message == WM_MOUSEMOVE)
			{
				x = msg.x;
				y = msg.y;
			}
		}
		// ���ƻ���
		cleardevice();
		solidcircle(x, y, 100);
		FlushBatchDraw();
	}
	//�ͷ���Դ
	EndBatchDraw();

	return 0;
}
