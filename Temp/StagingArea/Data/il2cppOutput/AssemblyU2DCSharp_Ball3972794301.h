#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Paddle
struct Paddle_t763152128;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// Paddle Ball::paddle
	Paddle_t763152128 * ___paddle_2;
	// UnityEngine.Rigidbody2D Ball::rigid2D
	Rigidbody2D_t502193897 * ___rigid2D_3;
	// UnityEngine.Vector2 Ball::velocity
	Vector2_t2243707579  ___velocity_4;
	// UnityEngine.Vector3 Ball::paddleToBallVector
	Vector3_t2243707580  ___paddleToBallVector_5;
	// System.Boolean Ball::hasStarted
	bool ___hasStarted_6;

public:
	inline static int32_t get_offset_of_paddle_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddle_2)); }
	inline Paddle_t763152128 * get_paddle_2() const { return ___paddle_2; }
	inline Paddle_t763152128 ** get_address_of_paddle_2() { return &___paddle_2; }
	inline void set_paddle_2(Paddle_t763152128 * value)
	{
		___paddle_2 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_2, value);
	}

	inline static int32_t get_offset_of_rigid2D_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___rigid2D_3)); }
	inline Rigidbody2D_t502193897 * get_rigid2D_3() const { return ___rigid2D_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigid2D_3() { return &___rigid2D_3; }
	inline void set_rigid2D_3(Rigidbody2D_t502193897 * value)
	{
		___rigid2D_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigid2D_3, value);
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___velocity_4)); }
	inline Vector2_t2243707579  get_velocity_4() const { return ___velocity_4; }
	inline Vector2_t2243707579 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector2_t2243707579  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_paddleToBallVector_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddleToBallVector_5)); }
	inline Vector3_t2243707580  get_paddleToBallVector_5() const { return ___paddleToBallVector_5; }
	inline Vector3_t2243707580 * get_address_of_paddleToBallVector_5() { return &___paddleToBallVector_5; }
	inline void set_paddleToBallVector_5(Vector3_t2243707580  value)
	{
		___paddleToBallVector_5 = value;
	}

	inline static int32_t get_offset_of_hasStarted_6() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___hasStarted_6)); }
	inline bool get_hasStarted_6() const { return ___hasStarted_6; }
	inline bool* get_address_of_hasStarted_6() { return &___hasStarted_6; }
	inline void set_hasStarted_6(bool value)
	{
		___hasStarted_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
