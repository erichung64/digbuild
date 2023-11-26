#include "World.h"

World::World(unsigned int width, unsigned int depth, float blockSize)
    : width(width), depth(depth), blockSize(blockSize) {
    generateFlatWorld();
}

void World::generateFlatWorld() {
    for (unsigned int x = 0; x < width; ++x) {
        for (unsigned int z = 0; z < depth; ++z) {
            // Create a block at each (x, 0, z) position
            glm::vec3 position(x * blockSize, 0, z * blockSize);
            blocks.emplace_back(position, blockSize);
        }
    }
}

void World::render() const {
    for (const auto& block : blocks) {
        block.render(); // Assuming Block class has a render method
    }
}
