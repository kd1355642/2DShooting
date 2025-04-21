#pragma once
#include"player.h"

class Scene
{
private:

	// �e�N�X�`�� �E�E�E �摜�f�[�^
	KdTexture m_playerTex;
	C_Player m_player;

	// �s�� �E�E�E ���W�Ȃǂ̏��
	Math::Matrix matrix;

public:

	// �����ݒ�
	void Init();

	// ���
	void Release();

	// �X�V����
	void Update();

	// �`�揈��
	void Draw2D();

	// GUI����
	void ImGuiUpdate();

private:

	Scene() {}

public:
	static Scene& GetInstance()
	{
		static Scene instance;
		return instance;
	}
};

#define SCENE Scene::GetInstance()
