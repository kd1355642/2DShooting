#pragma once

class Scene;

class C_Player
{
public:
	C_Player() {}
	~C_Player() {}

	void Init();
	void Update();
	void Draw();
	void MapHitX(float posX, float moveX);
	void MapHitY(float posY, float moveY, bool Jump);

	void SetTex(KdTexture* pTex) { m_pTex = pTex; }
	void SetAlive(bool alive) { m_alive = alive; }
	void SetOwner(Scene* pOwner) { m_pOwner = pOwner; }
private:

	float playerX, playerY;
	int playerFlg;
};