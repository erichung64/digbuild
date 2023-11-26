#ifndef BLOCK_H
#define BLOCK_H

#include <glm/glm.hpp>

class Block {
public:
    Block(glm::vec3 position, float size);

    void render() const; // Method to render the block

private:
    glm::vec3 position; // Position of the block
    float size;         // Size of the block

    // Additional attributes like texture, type, etc., can be added later
};

#endif
