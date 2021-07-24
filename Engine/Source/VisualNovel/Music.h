#pragma once

#ifndef MUSIC_H
#define MUSIC_H

#include <irrklang/irrKlang.h>

namespace rb
{
	class Music
	{
		float mVolume = 0.5f;
		float mTempVolume = 0.0f;
	public:
		Music() { SoundEngine = irrklang::createIrrKlangDevice(); }
		~Music() { }

		void play(const char* path) {
			this->path = path;
			playMusic = true;
		}

		void stop() {
			isStop = true;
		}

		void SetVolume(float volume) {
			mVolume = volume;
			SoundEngine->setSoundVolume(volume);
			mTempVolume = volume;
		}

		void update() {
			if (SoundEngine->getSoundVolume() < mVolume && isPlaying && !isStop || (playMusic && !isStop))
			{
				if (playMusic && !isStop)
				{
					mTempVolume = 0.0f;
					SoundEngine->setSoundVolume(0);
					SoundEngine->play2D(path.c_str(), true);
					playMusic = false;
					isPlaying = true;
				}
				SoundEngine->setSoundVolume(mTempVolume);
				mTempVolume += 0.001f;
			}

			if (isStop && isPlaying)
			{
				if (mTempVolume < 0.0f)
				{
					SoundEngine->stopAllSounds();
					isPlaying = false;
					isStop = false;
					return;
				}
				SoundEngine->setSoundVolume(mTempVolume);
				mTempVolume -= 0.001f;
			}
		}
		irrklang::ISoundEngine* SoundEngine;
		bool isStop = false;
		bool isPlaying = false;
		bool playMusic = false;

		std::string path;
	};
}

#endif