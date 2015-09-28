#ifndef _VKTPIPELINEVERTEXUTIL_HPP
#define _VKTPIPELINEVERTEXUTIL_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2015 The Khronos Group Inc.
 * Copyright (c) 2015 Imagination Technologies Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and/or associated documentation files (the
 * "Materials"), to deal in the Materials without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Materials, and to
 * permit persons to whom the Materials are furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice(s) and this permission notice shall be included
 * in all copies or substantial portions of the Materials.
 *
 * The Materials are Confidential Information as defined by the
 * Khronos Membership Agreement until designated non-confidential by Khronos,
 * at which point this condition clause shall be removed.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
 *
 *//*!
 * \file
 * \brief Utilities for vertex buffers.
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuVectorUtil.hpp"

#include <vector>

namespace vkt
{
namespace pipeline
{

struct Vertex4RGBA
{
	tcu::Vec4 position;
	tcu::Vec4 color;
};

/*! \brief Creates a pattern of 4 overlapping quads.
 *
 *  The quads are alined along the plane Z = 0, with X,Y taking values between -1 and 1.
 *  Each quad covers one of the quadrants of the scene and partially extends to the other 3 quadrants.
 *  The triangles of each quad have different winding orders (CW/CCW).
 */
std::vector<Vertex4RGBA> createOverlappingQuads (void);

} // pipeline
} // vkt

#endif // _VKTPIPELINEVERTEXUTIL_HPP
