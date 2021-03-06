/*
*  Thank you for staying with us.
*  (c) Oneiro Games 2019 - 2021
*/

#include "Sound.h"

namespace rb
{
	Sound::Sound()
	{
		SoundEngine = irrklang::createIrrKlangDevice();
	}

	void Sound::play(const char* path)
	{
		SoundEngine->setSoundVolume(mVolume);
		SoundEngine->play2D(path);
	}

	void Sound::stop()
	{
		SoundEngine->stopAllSounds();
	}

	void Sound::SetVolume(float volume)
	{
		mVolume = volume;
		SoundEngine->setSoundVolume(volume);
	}
}