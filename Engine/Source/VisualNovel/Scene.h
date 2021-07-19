#pragma once

#ifndef SCENE_H
#define SCENE_H

#include <OpenGL/GLTexture.h>
#include <OpenGL/GLShader.h>

namespace rb
{
	class Scene
	{
	public:
		Scene() {}
		~Scene() {}

		void Init();

		void Render();
		void Load(std::string imagePath);

		bool mDissolve = false;
		bool mIsStart = true;
	private:
		Texture mSceneTexture;

		Shader mSceneShader;

		bool mIsLoaded = false;
		
		double mTextureAlpha = 0.0;

		std::string mTexturePath;

		unsigned int mVAO, mVBO, mEBO;
	};
}

#endif