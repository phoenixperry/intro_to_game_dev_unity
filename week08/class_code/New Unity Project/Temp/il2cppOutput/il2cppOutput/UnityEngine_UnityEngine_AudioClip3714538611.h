#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t749510018;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t2977871350;

#include "UnityEngine_UnityEngine_Object3878351788.h"

// UnityEngine.AudioClip
struct  AudioClip_t3714538611  : public Object_t3878351788
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t749510018 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t2977871350 * ___m_PCMSetPositionCallback_3;
};
