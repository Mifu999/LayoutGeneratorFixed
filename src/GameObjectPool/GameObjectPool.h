#pragma once

class PoolObject;

class GameObjectPool
{
protected:
    static const std::vector<PoolObject> POOL;

public:
    static const PoolObject *fish(std::mt19937 &rng, std::function<float(const PoolObject *)> filter);
};
