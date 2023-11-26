#ifndef BLOCK_H
#define BLOCK_H

#include <glad/glad.h>
#include <glm/glm.hpp>

class Block {
public:
    Block();
    ~Block();

    void render() const;

private:
    unsigned int VBO, VAO, texture;

    void setupBlock();
    void loadTexture(const char* texturePath);
};

#endif
