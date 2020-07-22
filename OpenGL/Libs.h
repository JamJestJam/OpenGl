#pragma once

//console
#include <iostream>
//manipulate files
#include <fstream>
//manipulate string
#include <string>
//better arrays
#include <vector>

//add functions to draw
#include <glew.h>
//create window and draw area
#include <glfw3.h>

//funny mathematics
#include <glm.hpp>
#include <vec2.hpp>
#include <vec3.hpp>
#include <vec4.hpp>
#include <mat4x4.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

//load imagest etc
#include <SOIL2.h>

//include our class
#include "Shader.h"
#include "Texture.h"

using namespace std;
using namespace glm;

//base point in 3D
struct Vertex {
	vec3 position;
	vec3 color;
	vec2 texcoord;
	vec3 normal;
};