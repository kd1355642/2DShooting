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
	//�@��̍s��(matrix)�ɍ쐬�����ړ��s���n��
	matrix = Math::Matrix::CreateTranslation(playerX, playerY, 0);

	//�A�ړ��s��Z�b�g�I
	SHADER.m_spriteShader.SetMatrix(matrix);

	//�B�`��I�I
	SHADER.m_spriteShader.DrawTex(&m_playerTex, Math::Rectangle{ 0,0,64,64 }, 1.0f);
}
