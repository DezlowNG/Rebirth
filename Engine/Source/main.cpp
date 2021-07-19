#include <Rebirth.h>

class App  :  public rb::Application
{
	void Init() override
	{
		window.Width = 1600;
		window.Height = 900;
		window.Title = "EVERLASTING CODING";

		settings.imagePath = "Assets/Images/";
		settings.fontPath = "Assets/Fonts/Font.ttf";
	}

	void Label() override
	{
		scene("2.jpg");		
		showSprite("1.png");
		playMusic("Assets/music.ogg");
		text("������������ ���� � �������! ��� ������������ ������� ��������, ��� ������� �� ����������� (������� ������� �� ������ ��������), ��������� (��� ��������, ��� �������), ���������� (��� ���������� ������ � ���� ��� ���� �����) � ���� �������, ��� ����� �������� �� ���� ���. �� ������� ������ ���������� ������� � �� ����� ������, ������ �� �����, �� ������ ��������������� � ��������. ��� ����� ������� �����������. ��������, ���, ������ ������, ���������� �������� ���������� - �� ���. ��� ���������� ��������� ����� �� ��������������� ��� ��� ����. �������� �� ���� ���������!");
		showSprite("2.png");
		text("Dezlow", "�� ������ ����� ���������� ����� 20 �����, ����� � ��� �� �����������, ���� ��������� ���� ��, �����, ��� ����� ���� ������ ������. ������������ � ������, � �������� ������� ������������ ������ ����, ����� �� ��������� � ������� � ����� ��� ������� ��������.��������� �� ������� �");
		stopMusic();
		hideSprite("1.png");
		text("Dezlow", "TEST");
		scene("1.jpg");
		text("TEST2");
		text("|\"!@#$T^&%");
		scene("3.jpg");
		text("test");
	}
};
 
int main()
{
	try
	{
		App* p = new App;

		p->Run();

		delete p;
	}
	catch (const std::exception& ex)
	{
		spdlog::get("log")->error(ex.what());
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}