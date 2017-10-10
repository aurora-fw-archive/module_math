#ifndef AURORAFW_MATH_MATRIX4X4_H
#define AURORAFW_MATH_MATRIX4X4_H

#include <AuroraFW/Global.h>

namespace AuroraFW {
	namespace Math {
		template<typename T> struct vec3;
		template<typename T> struct vec4;

		template<typename T>
		struct AFW_EXPORT mat4 {
			mat4();
			mat4(T diagonal);
			mat4(T* elements);
			mat4(const vec4<T>& row0, const vec4<T>& row1, const vec4<T>& row2, const vec4<T>& row3);
			
			vec4<T> getColumn(afwuint_t ) const;
			void setColumn(afwuint_t , const vec4<T>& );

			//Static methods
			static mat4<T> identity();

			static mat4<T> orthographic(T , T , T , T , T , T );
			static mat4<T> perspective(T , T , T , T );
			
			static mat4<T> translation(const vec3<T>& );
			static mat4<T> rotation(T , const vec3<T>& );
			static mat4<T> scale(const vec3<T>& );

			T m[4][4];
		};

		typedef mat4<float> Matrix4x4;
	}
}

#endif // AURORAFW_MATH_MATRIX4X4_H