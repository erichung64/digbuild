#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <glm/glm.hpp>
#include "Block.h" // Assuming you have a Block class

class World {
public:
    World(unsigned int width, unsigned int depth, float blockSize);
    void render() const; // Method to render the world

private:
    std::vector<Block> blocks; // Collection of blocks in the world
    unsigned int width, depth; // Dimensions of the world
    float blockSize;           // Size of each block

    void generateFlatWorld();  // Method to generate a flat world
};

#endif
