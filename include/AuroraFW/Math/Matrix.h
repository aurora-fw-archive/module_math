#ifndef AURORAFW_MATH_MATRIX_H
#define AURORAFW_MATH_MATRIX_H

namespace AuroraFW {
	namespace Math {
		template<int N, int M, typename T>
		struct AFW_PREFIX Matrix {
			T m[N][M];
		}
	}
}

#endif // AURORAFW_MATH_MATRIX_H