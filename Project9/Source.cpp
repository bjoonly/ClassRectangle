#include<iostream>
using namespace std;
struct Coord {
	int x;
	int y;
};
class Rectangle{
	int width;
	int height;
	char symbol;
	Coord coordinates;
public:
	Rectangle():width(1), height(1), symbol('*'), coordinates{0,0}{}
	Rectangle(int size):Rectangle(size,size){}
	Rectangle(int width, int height){
		setWidth(width);
		setHeight(height);
		symbol='*';
		coordinates.x=0;
		coordinates.y = 0;
	}
	void setWidth(int width) {
		if (width > 0)
			this->width = width;
	}
	void setHeight(int height) {
		if (height > 0)
			this->height = height;
	}
	void setWidthHeight(int width, int height) {
		setWidth(width);
		setHeight(height);
	}
	void setXY(int x, int y) {
		setX(x);
		setY(y);
	}
	void  SetSymbol(char symbol) {
		this->symbol = symbol;
	}
	void setX(int x) {
		if (x >=0)
		coordinates.x = x;
	}
	void setY(int y) {
		if (y >= 0)
		coordinates.y = y;
	}
	int getWidth()const {
		return width;
	}
	int getHeight()const {
		return height;
	}
	char getSymbol() {
		return symbol;
	}
	int getX()const {
		return coordinates.x;
	}
	int getY()const {
		return coordinates.y;
	}
	void print()const {
		
		for (int i = 0; i < coordinates.y; i++)
			cout << endl;	
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < coordinates.x; j++)
					cout << " ";
				for (int k = 0; k < width; k++) 
					cout << symbol;
				
				cout << endl;
			}
	}
};

int main() {
	Rectangle r1(5),r2(3,4),r3;
	cout << "First rectangle:\n";
	r1.print();
	cout << "\nSet symbol for first rectangle.\n";
	r1.SetSymbol('1');
	r1.print();
	cout << "\nSet coordinates for first rectangle.\n";
	r1.setXY(4,2);
	r1.print();
	cout << "\nSecond rectangle:\n";
	r2.print();
	cout << "\nSet width and height for second rectangle.\n";
	r2.setWidthHeight(2, 4);
	r2.print();
	cout << "\nThird rectangle:\n";
	r3.print();
	return 0;
}