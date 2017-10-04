#ifndef AURORAFW_MATH_MATRIX4X4_H
#define AURORAFW_MATH_MATRIX4X4_H

namespace AuroraFW {
	namespace Math {
		template<typename T>
		struct AFW_PREFIX mat4 {
			mat4();
			mat4(T diagonal);
			
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