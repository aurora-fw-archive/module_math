#ifndef AURORAFW_MATH_MATRIX_H
#define AURORAFW_MATH_MATRIX_H

#include <AuroraFW/Global.h>

namespace AuroraFW {
	namespace Math {
		template<int N, int M, typename T>
		struct AFW_EXPORT Matrix {
			T m[N][M];
		};
	}
}

#endif // AURORAFW_MATH_MATRIX_H