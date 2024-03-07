#pragma once
#include <raylib.h>
#include <vector>
#include <cmath>
#include "Collider.hpp"
#include "Player.hpp"
#include "Empty.hpp"
#include "../Objects/Bullet.hpp"

class Game {
public:
  int WindowWidth;
  int WindowHeight;

  std::vector<Collider*> colliders;
  std::vector<Empty*> NPCs;
  std::vector<Bullet*> Bullets;

  Player player;

  Game(int w, int h);

  const bool run();

  void initWindow();
  void closeWindow();
  void update();
};