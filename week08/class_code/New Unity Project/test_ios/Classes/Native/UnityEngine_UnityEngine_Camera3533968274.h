#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1908940458;

#include "UnityEngine_UnityEngine_Behaviour3120504042.h"

// UnityEngine.Camera
struct  Camera_t3533968274  : public Behaviour_t3120504042
{
};
struct Camera_t3533968274_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t1908940458 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t1908940458 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t1908940458 * ___onPostRender_4;
};
