// div.h
#ifndef DIV_H
#define DIV_H
#include <string>
#include <curses.h>
#include <vector>
#include "element.h"

class Element;
class Div
{
	protected:
		std::string				m_name;
		int						m_xPos;
		int						m_yPos;
		int						m_height;
		int						m_width;
		WINDOW*					m_window;
		std::vector<Element*>	m_elements;

		WINDOW* createWindow();

		void draw();


	public:
		//TODO(feature) add constructor that centers the div
		/// Constructor that takes x/y and width/height
		Div(std::string name, int yPos, int xPos, int height, int width);
		Div(std::string name, int height, int width);

		void render();

		void destroy_win();

		int height() { return m_height; };
		void height(int height) { m_height = height; };

		int width() { return m_width; };
		void width(int width) {m_width = width; };

		int yPos() { return m_yPos; };
		void yPos(int yPos) { m_yPos = yPos; };

		int xPos() { return m_xPos; };
		void xPos(int xPos) { m_xPos = xPos; };

		WINDOW* win() { return m_window; };
};

#endif
