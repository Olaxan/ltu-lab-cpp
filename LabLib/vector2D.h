#pragma once

namespace efiilj {

	class Vector2D
	{
	public:
		Vector2D();

		~Vector2D();

	private:
		int* arr[4] = { 0,0,0,0 };
	};

}

