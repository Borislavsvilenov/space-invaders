#pragma once
#include <raylib.h>
#include <vector>
#include <iostream>
#include "../engine/Empty.hpp"

class Bullet {
public: 
  Empty bullet;

  Bullet(int x, int y, int vx, int vy, int w, int h, std::vector<Collider*> &colliders, std::vector<Empty*> &objs);

  void shoot(Vector2 pos, Vector2 vel);
  void hit();

};