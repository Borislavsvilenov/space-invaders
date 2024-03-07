#include "Bullet.hpp"

Bullet::Bullet(int x, int y, int vx, int vy, int w, int h, std::vector<Collider*> &colliders, std::vector<Empty*> &objs) : bullet(x, y, vx, vy, w, h, colliders) {
  objs.emplace_back(std::addressof(bullet));
}

void Bullet::shoot(Vector2 pos, Vector2 vel) {
  bullet.pos = pos;
  bullet.vel = vel;
}

void Bullet::hit() {
  if (bullet.collided) {
    
  }
}
