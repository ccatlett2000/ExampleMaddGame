#ifndef CUBE_H
#define CUBE_H
#include "gameobject.h"
#include "renderedobject.h"
#include <vector>
#include <glm/glm.hpp>
class Madd;
class Cube : public GameObject{
    public:
        Cube();
        ~Cube();
        bool Render();
        bool Update();
        bool ReloadShaders();
    private:
        RenderedObject* cubeMesh;
        std::vector<glm::vec3> cubePositions;
		int textures[2];
};

#endif //CUBE_H