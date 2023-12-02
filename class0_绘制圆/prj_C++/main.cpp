#include<iostream>
#include<graphics.h>

int main()
{
	//初始化
	initgraph(1280, 720);

	int x = 0;
	int y = 0;

	BeginBatchDraw();

	while(true) //主循环
	{
		ExMessage msg;
		while (peekmessage(&msg)) // 读取数据
		{
			if (msg.message == WM_MOUSEMOVE)
			{
				x = msg.x;
				y = msg.y;
			}
		}
		// 绘制画面
		cleardevice();
		solidcircle(x, y, 100);
		FlushBatchDraw();
	}
	//释放资源
	EndBatchDraw();

	return 0;
}
