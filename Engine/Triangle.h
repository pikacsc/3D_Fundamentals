#pragma once

#pragma once

#include "Vec3.h"
#include <vector>
#include "IndexedLineList.h"

class Triangle
{
public:
	Triangle(float size)
	{
		const float side = size / 2.0f;
		vertices.emplace_back(-side, -side, -side);
		vertices.emplace_back(side, -side, -side);
		vertices.emplace_back(-side, side, -side);
		vertices.emplace_back(side, side, -side);
		vertices.emplace_back(-side, -side, side);
		vertices.emplace_back(side, -side, side);
		vertices.emplace_back(-side, side, side);
		vertices.emplace_back(side, side, side);
	}
	IndexedLineList GetLines() const
	{
		return{
			vertices,{
			0,1,  1,3,  3,0, 
			0,5,  5,1,  3,5 }
		};
	}
private:
	std::vector<Vec3> vertices;
};