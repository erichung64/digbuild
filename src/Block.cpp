#include "Block.h"

Block::Block(glm::vec3 position, float size) : position(position), size(size) {
    // Initialization code for the block
    // This could involve setting up vertex data, etc.
}

void Block::render() const {
    // Rendering code for the block
    // This will involve binding appropriate buffers and making draw calls
    // You will likely need to pass a shader program to this method
}
