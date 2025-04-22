#include <iostream>
#include <vector>
#include <xmmintrin.h>

struct Vector4
{
	float x;
	float y;
	float z;
	float w;
};

Vector4 Add(const Vector4& lhs, const Vector4& rhs)
{
	Vector4 ret{};
	ret.x = lhs.x + rhs.x;
	ret.y = lhs.y + rhs.y;
	ret.z = lhs.z + rhs.z;
	ret.w = lhs.w + rhs.w;

	return ret;
}

Vector4 Add_SIMD(const Vector4& lhs, const Vector4& rhs)
{
	Vector4 ret{};

	__m128 va = _mm_loadu_ps(reinterpret_cast<const float*>(&lhs));
	__m128 vb = _mm_loadu_ps(reinterpret_cast<const float*>(&rhs));
	__m128 vc = _mm_add_ps(va, vb);
	_mm_storeu_ps(reinterpret_cast<float*>(&ret), vc);

	return ret;
}

int main()
{
	Vector4 v1{ 1.f,1.f,1.f,1.f };
	Vector4 v2 = Add(v1, v1);
	Vector4 v3 = Add_SIMD(v1, v2);

	

 	return 0;
}