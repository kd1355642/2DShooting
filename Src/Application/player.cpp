#include "Scene.h"
#include "player.h"

void C_Player::Init()
{

}

void C_Player::Update()
{
}

void C_Player::Draw()
{
	//①空の行列(matrix)に作成した移動行列を渡す
	matrix = Math::Matrix::CreateTranslation(playerX, playerY, 0);

	//②移動行列セット！
	SHADER.m_spriteShader.SetMatrix(matrix);

	//③描画！！
	SHADER.m_spriteShader.DrawTex(&m_playerTex, Math::Rectangle{ 0,0,64,64 }, 1.0f);
}
