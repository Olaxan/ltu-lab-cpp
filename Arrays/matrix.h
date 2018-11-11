#pragma once
class matrix
{
public:
	matrix(int width, int height);
	int index(int x, int y);
	int getColSum(int x);
	int getRowSum(int y);
	~matrix();
};

