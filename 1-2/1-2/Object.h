#if !defined OBJECT_H
#define OBJECT_H

#include "mesh.h"
#include<string>
#include<iostream>
using namespace std;
class Object{
public:
	Object(const char* meshName, const char* localPath);
	mesh* object;
	float scale[3];
	float rotate[4];
	float transform[3];
	string textureType;
	vector<string> textureName;
};


class Scene{
public:
	Scene(const char* sceneName, const char* localPath);
	int objectNum;
	Object* objects[10];
};



#endif