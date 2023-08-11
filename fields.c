/* fields.c -- ���岢ʹ���ֶ� */
#include <stdio.h>
#include <stdbool.h>

/* �ߵ���ʽ */
#define SOLLD		0
#define DOTTED	1
#define DASHED	2

/* ��ԭɫ */
#define BLUE	4
#define GREEN 2
#define RED		1

/* ���ɫ */
#define BLACK		0
#define YELLOW	(RED | GREEN)
#define MAGENTA	(RED | BLUE)
#define CYAN		(GREEN | BLUE)
#define WHITE		(RED | GREEN | BLUE)

const char* colors[8] = { "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white" };

struct box_props {
	bool opaque : 1;
	unsigned int fill_color : 3;
	unsigned int : 4;
	bool show_border : 1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 2;
};