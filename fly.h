#include <iostream>
using namespace std;

class fly {
			public : 
					int alive = 1 ;
					bool isDraw = true;
					bool isIncreaseR = false;
					bool isInitFly = false;
					int	MINX = 20;
					int MINY = 20; // 20
					int	MAXX = 700;
					int MAXY = 480;
					
			private:
				int x,x0,y,y0,directionx,directiony;
				int left ;// random left right, left = 1 , right = 2
				int toggle;
				int r = 10;
				
			public:	
				friend int randomso (int);
				int getX();//v
				int getY();//v
				int getX0();//v
				int getY0();//v
				
				void setLeft();//v
				void update();//v
		
				void checkInitFly();//v
					
				void move();// ham di chuyen //v
				
				void randomPosition();// random vi tri xuat hien ban dau//v
			
				void checkPosition(); // kiem tra xem ruoi con o trong khung hinh khong, tang so' mang. len 2 neu' cham. tuong` trai' phai?//v
			
				void setStartDirection();//v //random direction khi moi bat dau

				void drawFly();
				void removeFlyWhenMove();//v 
				void removeFlyWhenClick();//v 
				
				void increaseR();
	};
