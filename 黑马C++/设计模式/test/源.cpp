//#include <graphics.h>
//#include<iostream>
//#include <conio.h>
//
//int main()
//{
//	// 创建绘图窗口
//	initgraph(640, 480);
//
//	// 画渐变的天空(通过亮度逐渐增加)
//	float H = 190;		// 色相
//	float S = 1;		// 饱和度
//	float L = 0.7f;		// 亮度
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// 画彩虹(通过色相逐渐增加)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// 按任意键退出
//	//_getch();
//	getchar();
//	closegraph();
//	return 0;
//}
// 编译环境：Visual C++ 6.0~2022，EasyX_2023大暑版
// https://easyx.cn
//
#include <graphics.h>

int main()
{
	// 初始化图形窗口
	initgraph(640, 480);

	ExMessage m;		// 定义消息变量

	while (true)
	{
		// 获取一条鼠标或按键消息
		m = getmessage(EX_MOUSE | EX_KEY);

		switch (m.message)
		{
		case WM_MOUSEMOVE:
			// 鼠标移动的时候画红色的小点
			putpixel(m.x, m.y, RED);
			break;

		case WM_LBUTTONDOWN:
			// 如果点左键的同时按下了 Ctrl 键
			if (m.ctrl)
				// 画一个大方块
				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
			else
				// 画一个小方块
				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
			break;

		case WM_KEYDOWN:
			if (m.vkcode == VK_ESCAPE)
				return 0;	// 按 ESC 键退出程序
		}
	}

	// 关闭图形窗口
	closegraph();
	return 0;
}
