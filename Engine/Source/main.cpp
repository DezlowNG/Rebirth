#include <Rebirth.h>

class App  :  public rb::Application
{
	void Init() override
	{
		window.Width = 1600;
		window.Height = 900;
		window.Title = "The last evening by candlelight";

		settings.imagePath = "images/";
		settings.fontPath = "fonts/Font.ttf";
	}

	void Label() override
	{
		changeBox("ui/textbox_blood.png");
		scene("bg/room4.jpg");
		playMusic("music/Beginning.ogg");

		text("�����", "����, ���� ��� ���� ������. � ��� �� ��� ������ ���������?");
		text("� ����� ��������� ����� � ���. ������ ����� ���� �����, �� ��� ���� �������.");
		text("�����", "������ �� ���� �����");
		text("�����", "���! ���! ��� ��?!");
		text("���-�� ������ �����.");
		text("�����", "�������? �� �����? ��, � ������ ��� ���� ��������. ����� �� �� ������, ����������.");
		text("�� ��������� ������ ������� ���� � ���. � ���������� ���� ��������� � ���� ������, �� ������ �� ��� ������� � ����.");
		text("�����", "��� �� ���.");
		text("� ��������� ������ � ���� � � ������ �� ��� �� ���������� �� �����.");
		text("�����", "� ������� \"��� �� ���\"!");
		text("�����", "��� ������ ��� ��������� �� ���� ������?!");
		
		stopMusic();
		changeBox("ui/textbox_normal.png");
		scene("bg/classroom.jpg");
		playMusic("music/AcousticMeditation2.ogg");
		
		text("������! ���� ����� ��������� �����. � ������ ������� ����� � �� �������� �������������... ����������.");
		text("�� ������ ������ ��������������� � �� �������, �������� ������ ��� ��� ������� ����. ������, � � ��� �� ���� ������ ����� ���� ���������� ������ ��� ���.");
		text("���� ���� ���� �������, �� ����� �� ����� ����... ��� ��� �����.");
		text("���, ���� � ������� ����������, �� ���� ����� �� ��� � ���� ���-�� �������� �������� ��� � ��� ���� ������ �����������.");
		
		stopMusic();
		showSprite("sprites/ayako_smile.png");
		playMusic("music/BigBlues.ogg");
		
		text("����", "������, �����.");
		text("�����", "�-������.");
		text("����", "�������, �� ������� ������������ � �����? ������� �� ����!");
		text("�����", "��������, �� ����. �� ���� ������� ���� �����.");
		
		hideSprite("sprites/ayako_smile.png");
		showSprite("sprites/ayako_unhappy1.png");
		
		text("����", "����� ���");
		text("��� �������� ���� �������� ��� �� ����.");
		text("����", "���� � �����!");		
		text("�����", "� ����� ��� ���...");

		hideSprite("sprites/ayako_unhappy1.png");
		
		text("�� ������ ����� ���������� ����� 20 �����, ����� � ��� �� �����������, ���� ��������� ����");
		text("�����", "��, �����, ��� ����� ���� ������ ������.");
		text("������������ � ������, � �������� ������� ������������ ������ ����, ����� �� ��������� � ������� � ����� ��� ������� ��������.");
		text("��������� �� ������� � �������� ��� �����-�� ���������, ���� � ����������� �� ��������, ���� �� ����������� ����, ����� ����� ���� ����������� �������� ���� ���������� ������� �������.");
		
		playSound("sfx/school_bell.ogg");
		showSprite("sprites/shizyka_normal1.png");
		
		text("����� ��������� ������ ��� ������ � � ����� ����� ������� ������ � �����-�� ���������� ��� ��������. ������ ����� ��������� ��� �������� �� ���������� �������, ���������, ���������� �����, ������.");
		
		stopMusic();
		
		text("�������", "������ ����, ����. ��������������.");
		text("�������", "�����, ������, �����������.");
		text("���������", "�-������������, � ������� ������, �-����� ������ ������. � ���� ������� � ����� ������ � ������� �� ��� ����������.");
		text("�� ����� ��� ����� � ������, ������� ������ � � �����-�� ������ �������.");
		text("����� ������������� ������� ������ ��, ����� �� ����� �������� ����� ��������� �����, ������� ����. �� � ����� ���� ������� � ����������� � ��� �������.");
		text("������", "������, ����� ����� ����� � �-�����?");
		text("�����", "�? �, ��, �������, ��� �������. ������������.");
		text("�����", "������ ����� ��� ���� ����� �� ����? ������� ���� ����� ��������� ����.");
		text("�����", "����� ����� ���, � �� ��� �� ������ �� �������� ������, ��� ������ ����� �� ����. ���� ����� �������� �� �� ������, � �� ���� � ������ �������.");
		text("�����", "���, ������ ������ ���� ������������ �������, �� ��� ������� ���� �� ����� �����-�� ����.");
		
		hideSprite("sprites/shizyka_normal1.png");
		
		text("������ 30 �����...");
		text("�������", "���, ����� ��������. � ����� ������� ���������� ����� ������ �� ����� � �������� ������� �����.");
		text("��������� ������ � ������� �������� ��������. ����� �������� ��� � ��� ���������� ������ ���������, ��� ����� ������� ���� ������ �� ����� ���������� ��� �� �����.");
		
		scene("bg/school_roof.jpg");
		playMusic("music/AcousticGuitar1.ogg");

		text("�����", "����, ����� �����, � � ����� ���� �����. �������� �������� ��������.");
		text("������", "�� �����...");
		text("� ������� �� ������ �������� �������� �����.");
		
		showSprite("sprites/shizyka_normal1.png");
		
		text("�����������, ����� ������ ������ ������ � ������� � ����� ������� ���������, ����� ������� �� ���...");
		text("��� ���������� ������� � ��������� ��� ��� �����.");
		text("�����", "������ ��? ��, �� ��� �� ��� � �����. �������. ���� �� ������� ���� �����? ���� �����.");
		text("������", "������� �������������..");
		text("��� ��������� ��������.");
		text("�����", "� ���� �� �� ����� ����?");
		text("������", "� ���� ��� ���.");
		text("�����", "�����");
		text("� �������� �� ���� ����.");
		text("�����", "��� � ���� ������ �����...");
		text("������", "���? �����? �� �� ����.");
		text("�����", "������, � �� ��������.");
		text("�����", "�� ����� ���� � ������� ����� ��������.");
		text("������ ������� ����� �� ���� � ����� ���.");
		text("������", "�������.");
		
		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_smile.png");
		
		text("��� ����������, �� ����� �� ������� ����� �����-�� ��������.");
		
		hideSprite("sprites/shizyka_smile.png");		
		showSprite("sprites/shizyka_normal1.png");

		text("�����", "��� � ���-������ �����������?");
		text("������", "���.");
		text("�����", "� �� ����� ��������, ����� ����� ���� �����-���� ������� ��������� ���� �����.");
		text("�����", "������ ���.");
		text("������", "������?");
		text("�����", "�� ��� ���� ������� �������. � ������� ���� � ����� � ���������� ��������, ����� ���� ��� ���� ������ ������ ����� ��������� ������. � ������� �� ������ ��� � ������ � ����-����������. ����, ��������, ��� � � �������.");
		text("������", "� ��� �� ��������?");
		text("�����", "� �� ����� �� ������������.");
		text("������", "�� ����� ����, ��������.");
		text("�����", "������, �� �� ��������, ������� �� ����.");
		text("�����", "������ �� ��� ��������� ����� ������� � ������ � ��������� �� ����.");

		stopMusic();
		playMusic("music/OneFineDay.ogg");

		text("������", "� ������� � ��� ����� ��-�� ������ � ������. ���� ��� ����������. �� ���� ������. �� ���� �����.");
		text("������", "������ ���� ���� ���� ����������, ����� ��� �����, ������� ��� ������, ������� �������.");
		text("������", "� ���� ���� � �� ��������� � ������ ������������ �������, �� �� ��� �� ������� � �����-�� ������� ��� ��� �������� �������, ������� ������ ����� ���� ����������.");
		text("������", "����� ����� ��� � ������ �������� ������ ���� � ������� � ��������.");
		text("������", "���� ����� �������, � ���� �������� �� ����. � ������ ����� ���� ����� �������� ������. ����� ����� ������ � �����-�� ����� �� ������ � �����.");
		text("������", "�� ���� ��� �� �������� � ������ �������� �� ��� ���. �� ������ � �����. ��� ������ �������� ����� ����������, �� ���� � ������-�� ����� ���������, ������� � �� ��������.");
		text("�����", "������ �� ����� �� ���� ��������.");

		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_smile.png");

		text("������", "������ �� ������� ���� ������.");
		text("��� ����������.");
		text("�����", "�����, �� ������ �� ��������, ������������?");
		text("��� � ��������� ��� � ����� �������.");
		text("�����", "�������� ��� ��������� � ������� ����, ��� ����� ��������� ���� �������, �� � ��� ��� ������, ������� �� �������� ������ � �������, ��-�� ���� ��� �������� � ��������� ������������.");
		text("�����", "� ���� ������ � ���� ������� �������� � � ����� ���������� �� ���� �� �����.");
		text("�����", "����� ��� ����� � ������ ��������, �� ����� ���������� � ���, �� � � ����� ��������, ���� ����� ���� ������ ����.");
		text("�����", "��� ���� - ��������� ������ � ������ � ��������, � �� ����������� � ����� ���� ��� ����������, ���-��� ���� ���� �� ����, �� ���������� ��� �������, ����� �� � ����� �� ������������, � �� �����...");
		text("������", "� ���? ������ ��� �� ������� ������?");
		text("�����", "� �� ����. �� ����� ����� ������� ���� ���������� � � ������ �������� ���� ������.");

		hideSprite("sprites/shizyka_smile.png");
		showSprite("sprites/shizyka_normal1.png");

		text("����� ���� ������� �������� ��������.");
		text("������", "��� ����� �������...");
		text("�����", "��, �� ���� � �� � ��� �� ����� � ������� ��� �����.");
		text("������", "������.");
		text("�����", "����?");
		text("������", "�� �� �� ����� ���� ���� ������?");
		text("�����", "������ �� � ���.");

		playSound("sfx/school_bell.ogg");

		text("����� ��������� ������.");
		text("�����", "����� �� ����?");
		text("������", "���.");

		stopMusic();
		scene("bg/classroom.jpg");

		text("��������� ����� ������...");

		showSprite("sprites/ayako_unhappy1.png");
		
		text("����", "�����! �� ���?! ����� ������, ��� ���������� ��������.");
		text("�����", "� ��� ��� ���.");
		text("����", "����� ���� �� ������ ����� � ���� ���������...");
		text("�����", "�����, �����, ��� ��������, ������ ���������� ��������� ������ ����.");
		
		hideSprite("sprites/ayako_unhappy1.png");		
		showSprite("sprites/ayako_shy1.png");
		
		text("����", "��� � ������������.");
		text("�����", "���� �����������? �� �����, ��� ��� ������ ��������.");
		
		scene("bg/school_corridor.jpg");
		
		text("�� ���������� �� ������ ����, ������ ����� ��� ������ �� ����. ����� ��� ��� � ������� ��������, ��� ���� � ��������� ��� ������������������ ��� �������.");
		text("�����", "������ ����! � ����! ����, � ���� �������?!");
		
		showSprite("sprites/ayako_unhappy1.png");
		
		text("����", "�� �����. ��� ��������. ��...");
		text("� �� ���� ���� ���� �������� ������������.");
		text("����", "��� ����, ��� ������ �� ���������� �� �������.");
		text("�����", "�������, ����! �� ���� ��� ������� ��������!");
		
		hideSprite("sprites/ayako_unhappy1.png");
		showSprite("sprites/ayako_shy1.png");		
		playMusic("music/AcousticGuitar1.ogg");
		
		text("��� ����������.");
		text("�����", "���? �� ����? ������� �� ��������?");
		text("����", "�-���. ������, � ����, ��� ����� ���-��� ����� ����� �����������, � �����, �� ����� �� ��, ����� � � ����� ������������?");
		text("�����", "�� ������ ���� �� �� ������, �� ������");
		
		hideSprite("sprites/ayako_shy1.png");		
		showSprite("sprites/ayako_unhappy1.png");

		text("������", "���, �����, �� ��� �� ����? � ���?");
		text("����� ���������� �������� �������� ����� � ���� �� ������.");

		stopMusic();
		playMusic("music/Assasins.ogg");

		text("�����������, � ����� ������ ������.");

		hideSprite("sprites/ayako_unhappy1.png");
		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("����", "� ����.");
		text("��� ����� ���������� � ���� � ������ ������� � ������ ������ ��������� ��������, ����������� � ��������� ����� �������.");
		text("�����", "�������� ���...");
		text("������", "������� �������������. � ��...");
		text("����", "������. � ����. �� ����� ������ ���������� � ����� ������. ������ �����, � �� �������� �� �������.");
		text("�����", "��, �������, ��� ����, ������ ������, ���� ���� �� ����, �� ������ ����� � ����.");
		text("������", "� �����?");
		text("�� ����� ��� ��� �� ����� ��������� ��� � ������ �������.");
		text("�����", "�������, ���� �� �� ������. ��, ����?");
		text("����", "�������...");
		
		stopMusic();
		playMusic("music/AcousticMeditation2.ogg");
		
		text("�����", "��� � �������, ������-��.");
		
		scene("bg/street_morning.jpg");
		showSprite("sprites/ayako_unhappy1.png", 300);		
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("�� ��� �� ������ �����. ������ �� �� ��� �� �������� �� ����, �� ��������� ����������� �� ������ ������. �� �� �������� ������, �� �� ������ � �������, �� �� ������. �� ��� ����...");
		text("���� ���� �������� �������� � ����������, ���, ���� ����� ��� �������, ����������� ���. �� ���� ������, �� ����� ���� ���-�� �����������, � ���� � ��� ����� ������.");
		text("�����", "������, � ����� ���� ������ � ����?");
		text("������", "� �� ������! � ��� ����� �����?");
		text("�����", "�������. � ��, ����?");
		text("����", "�?! �� ����...");
		text("������", "�����!");
		text("�����", "�����, ����� ������.");
		text("����", "�� ��� �� �������.");

		scene("bg/lakeside_daytime.jpg");
		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("������ ��������� ����� �� ������ � ����.");
		text("������������ ����� ����, �� ������� �� �����, ������ ������������ ���� ����� ��������� ������. ��� ����� �� ����� � ����.");
		text("������ ���� ���������� ���� ��������, � ������� �� ����. ��� ��� ��� ���������� ����������, ����� �� ������ ���-�� �������, �� �� ��������.");
		text("����", "���, ���...");

		stopMusic();
		playMusic("music/BigBlues.ogg");

		text("������", "�����!");
		text("�����", "��� �����, ������?");
		text("������", "������.");
		text("��� �������� �� ������� �������� �� ��������, ������� ������ ����� ��� ������� �, ����� ������, �������.");
		text("�����", "�� ��� � ���� ��� � �� �������.");

		stopMusic();

		text("����", "�� ������. ���-�� ��� ���������. �, ��������, �����.");
		text("�����", "����� ���� ���� ���������?");
		text("����", "���, � ���� ��������, �������.");
		text("�����", "�� ������. ���� ���, ��� ��� �����, ����� ���� ��� ����� �����.");
		text("����", "�����.");
		text("� ��� �� ����� � ��� ������� �� ��������������� ����� ����������. �� ����� ���� ����� �� ���� �����.");
		text("�����", "�������, � ��� ��� ����� ������.");
		text("������", "����, ����! ���� ������, �����?");

		hideSprite("sprites/ayako_unhappy1.png");
		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_normal1.png");
		playMusic("music/AcousticGuitar1.ogg");

		text("�����", "�����, �� ����������?");
		text("������", "�����, ������ � ���� ����� ���.");
		text("�����", "������ ���������. �� ����� ������?");

		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_smile.png");

		text("������", "���������!");

		scene("bg/park.png");
		showSprite("sprites/shizyka_normal1.png");

		text("���������� �� ������ � ����� ��� ���������� �, �������� �� ��������� �����, �� ������ ��� ����.");
		text("������", "������� ������, �� ����� ���� �������, �� ������ �� ��� ���� �� ���?");
		text("�����", "���� �� ����. ����� � �������, ��������.");
		text("������", "�����. � ����� ����� � �������� �������� ��������?");

		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_smile.png");

		text("��� ���������� � ���������� ���� � ����.");
		text("�����", "������? �� ������?");
		text("�����", "��� ������ ��� ����...");
		text("������", "��, �����. � ������ �������� ��� ���� � ���� �������� � �� ���...");

		stopMusic();
		playMusic("music/FightScene.ogg");;

		text("����", "����������������!");
		text("�� �������� ���� � ������� ����� �������� �� �� �����, ������ �� ���������.");
		text("�����", "������. �� ���� �����, � ����� �������. ���� ���� ����� �� �����, ������� �������.");
		text("������", "��...");
		text("�����", "������� \"��\"! ���� �����.");
		text("������", "���������� ������...");

		scene("bg/abandoned.jpg");

		text("� ����� � ����������� ������, �������� 5 ����� � ������ �� ���� �����.");
		text("�����", "������� ������������ ����� ������ � ������.");

		scene("bg/park.png");

		text("�����", "��� �� ������ �����? �� �� ������������...");
		text("� ������� �������� ����� � ������."); // �����
		text("�����", "�������� �����.");
		text("������ ��� ������� ����������� ����� ���� ���� ����� � � ������� � ��������� �����.");
		text("�����", "������. ������ �� ���� ��� �������?");
		text("� ������������ ����� �� ���� � ������� ���, ����� �������� ��� ���� ���� �������� � � ����. ��� ���� �������� � ��������� ��� � ������ ��� ��� �� �������.");
		
		stopMusic();
		playMusic("music/Horror13.ogg");
		scene("bg/room1.jpg");

		text("�����", "���� �� ������... �������������... ��� �? ��� ����� � ����...");

		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("������ � ����", "�����! �������-�� �� ���������.");
		text("�����", "����? ������? ������ �� �����? � ������ ��� ��? ��� �� ����� ���������?");
		text("����", "�������, ����� �� ���� � �����? ��� ����� ��� ����� �����. ��� ���, �� ���� ����� ���� ����� ������������ ������� ������ � ������. � ������ ���������� ����� ���, �� �� ���-�� ���� ������ � ������ ���-��, ����� ���� � ��������� ���.");
		text("������", "� � ����� ������ �� ������ ����� ������ ��, ��� ������ � ����� �����, � ����� �������� ���� � ��� � � �����������.");
		text("�����", "������������� ��� ����� ������ �����. � ����-������ ���� ���������? ����� ������ ������� �� ������.");
		text("����", "� ���� ��� ���...");
		text("������", "� ���� ����, ������, ��� �� ���. � � �������� � ���� ���������, ��, ����? � ������ �� �����.");
		text("����", "��, ��� ���.");

		hideSprite("sprites/ayako_unhappy1.png");
		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/shizyka_normal1.png");

		text("�����", "����� ��������?");
		text("������", "���.");

		hideSprite("sprites/shizyka_normal1.png");

		text("� ���� �� ��� ������ ������� � ����� �������� � ���. �� ������ �� ����� ����� ������ �����.");

		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("������� ����� � ������ ���� � ������ � ������� �����.");
		text("�����", "����� ���������� �������. ��������, �� ������ ������ ��� �, ��� �� ���������� � ������ ������ ��. � ��� ��� ������, �� ������� �������� ��� ����.");
		text("�����", "�� ������ ��������� �� ����� ������ �� ����, ��� ��� ���������. ������ ������ ��������� ��� ����� �� �������� � ���� �������. ������� 3 ����� � �� ��������! ����� ���!");
		text("�����", "���� ���.. �� �����?");

		scene("cg/ayako_aoamoaao.png");

		text("����", "��� �� �� �����...");
		
		stopMusic();
		
		text("������", "�����, ��������!");
		text("������ ������� ����.");
		text("������", "� ��� ���� ���� ������, ����� ������ ����� �����! ���������!");
		text("�����", "��, �� �����.");
		text("����", "�����?");
		text("�����", "���� ���� ����, ����� ���������. �� ���� ������ ���?");
		text("����", "��.");

		scene("bg/room1.jpg");
		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("��� ������� �������������.");
		text("�����", "������, ������ � ��� �� ����� ����� ������. ���� ��� � ����� ������. ��������� ���������� ���. ����� ����� � ��������.");
		text("�����", "������.");
		text("� ����� ������� ����� �����, �� ��� ����������� � ������.");
		text("�����", "������, �������� �� ����� ��������.");

		hideSprite("sprites/ayako_unhappy1.png");
		hideSprite("sprites/shizyka_normal1.png");

		showSprite("sprites/ayako_unhappy1.png", -300);
		showSprite("sprites/shizyka_normal1.png", 500);

		text("� ���� ������ � ��� � ����� ������ �����. �������� �������.");
		text("�����", "���� � ����� � ���...");
		text("������", "�����! � ����� ��� ��������?!");
		text("����", "�����?");
		text("�����", "��, ��� ������. ������ �������� � ������ ���������. �� �� ����� �����, ���� �� ��� ������� ������������.");
		text("����", "���� �� � �����, ��� ����� ������.");
		text("������", "��������.");
		text("�����", "��, ��� ����� ������������.");

		scene("bg/black.jpg");

		text("�� ������� �� ������� � �������, ������� ������������� ��� ����� ����. �� ����� �� ��� � �� �����.");
		text("����", "��������, � ������� ����, ��� ����� ���� ������ ����, ������ �������!");

		scene("bg/room1.jpg");

		text("������� �����, �� �������� �� ���. ��� ������� ��� � ���� �� ������ � ������� �� ����.");

		showSprite("sprites/shizyka_normal1.png");

		text("������", "�� �� �� ����� ����.");

		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("����", "��, �� ��� ���������� �������������� ��, ��� ������ � ���� ������� ����� ��������� � �����������. ����� ����, �������?");
		text("�����", "� ����� ��� �������?");
		text("������", "� �� ����...");
		text("����", "�� � ��� ������ ���. � �������.");
		text("���������", "3� 2...");
		text("���", "�����!");
		text("���������", "1...");

		scene("bg/room2.jpg");
		playSound("sfx/explosion.ogg");

		text("�� �������� �� ������� � ����� ��������� �����.");

		showSprite("sprites/ayako_cry1.png");

		text("����", "��, ����");
		text("������� �� ���������� ����� ����. ����� ������� ������� �������� �� ���� ����.");
		text("�����", "����, ����.");
		text("� ���� ������� � ��������� �� ����.");
		text("�����", "�� ����! � ���� �� �� �������?!");
		
		hideSprite("sprites/ayako_cry1.png");
		showSprite("sprites/ayako_cry2.png");
		
		text("����", "�...");
		text("������", "� ������� ����� � ������� �������.");
		text("�����", "����, � ��� �� ������?");
		text("����", "߅ � �� ���� ������� �����, �����! ����������, �� �������� ����!");
		text("�����", "������, �� �����, ������, � ����� ������� � �� ��, ��� �� ����������� �� ����, ��� � ���� ���� ��������?");
		text("����", "����� ��");
		text("������", "�����! ����� ����! ����� ����! ���� ���� �����!");
		text("�����", "������������! �� �������, ����?");
		text("����", "��..");
		text("��� �����������. ��� ����������, ��� ��� ������ ��� ������� ���-�� ������, �� � �� ������� �� ��� �������� ��������.");
		text("�����", "����, ������� �� ��� ������, ����� ���� ��� �� ��������� ������?");
		text("����", "��!");
		text("������", "�� ��� �� ���? ���� ������ ������, ����� �� �� ����� �������.");
		text("�����", "��, �����.");
		text("����", "��� ��!");
		text("�����", "��� � �������?");
		text("����", "���, � �� ���� ����, ��� ����� ���������� �������� ����.");

		hideSprite("sprites/ayako_cry2.png");
		showSprite("sprites/ayako_cry2.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("������", "���, ��� ������, �� ����� ������ ����, ����� � ���������.");
		text("�����", "��, �����, ������� ������ � �� �������, ��� �� ����������. ����, ������� �� �����.");
		text("����", "��...");
		text("�����", "������� \"��\".");
		text("���� ������� �� ����� � �� ����������� � ��������� �������.");

		scene("bg/room1.jpg");

		text("����� � ������� � ������� ���� �� ������, � ��� ��� �������� ���, ������������� �� �����. �� ��� ������� ������.");

		showSprite("sprites/shizyka_smile.png");

		text("������", "��, �����. � ����� ��� ��������. � �����, � ������ ���� ���-��� �������. � ����� ����� ��� �� ������� ��������, ������ �� ��� ��� �� ���� ��������. �����, � ����� ����.");
		text("�����", "������� ����� �� �� �����.");
		text("� ��������� �� � ����");
		text("������", "�������.");

		hideSprite("sprites/shizyka_smile.png");

		text("�� ��������� ��� 30 �����, ������� ������������.");

		showSprite("sprites/ayako_smile.png");

		text("����", "�����, ��� ��� �������, � ���� ����.");
		text("�����", "������������, ����� ������������.");
		text("������", "���.");
		text("����", "�����, ������� �� ���");
		text("�����", "������, ��� ������, �� ���� �������, �� ���� ����������. ���, ��� �����, ����?");
		text("����", "��� �� ������ ������ ������, ��?");
		text("�����", "�������, ��� ��.");

		hideSprite("sprites/ayako_smile.png");
		showSprite("sprites/ayako_unhappy1.png");

		text("���� �����������.");
		text("����", "� ������� ������ ������");
		text("�����", "������.");

		scene("bg/room3.jpg");

		text("�� ������ ������� ������, �� ���...");

		showSprite("sprites/shizyka_normal1.png");

		text("������", "�����, � ����� ����, �� �� ��������. ��� �������.");

		hideSprite("sprites/shizyka_normal1.png");
		showSprite("sprites/ayako_unhappy1.png", 300);
		showSprite("sprites/shizyka_normal1.png", 1100);

		text("����", "������ ������� ��� � ���� � ���.");
		text("�����", "������, �� �����...");
		text("������ ��� ��� ������ � ������, �� ��� ���� ������� � ������� ����. ��-�� ����, ������ ����������� ����� �����-�� ����������.");
		text("�����", "������! ����!");
		text("������", "���");

		hideSprite("sprites/shizyka_normal1.png");
		hideSprite("sprites/ayako_unhappy1.png");
		showSprite("sprites/shizyka_close.png");
		changeBox("ui/textbox_blood.png");

		text("�� �� ����� �������� �����, ������� �������� ������ ��������.");

		scene("cg/shiza_kill.png");

		text("������", "���...��...");
		text("��� �������� ����� �� ���.");		
		
		playMusic("music/Horror13.ogg");
		
		text("�����", "�������! ����� �� ��� �������� �����...");

		scene("bg/room3.jpg");

		showSprite("sprites/ayako_smile.png");

		text("����", "������ �������.");
		text("�����", "��� �� ����� ��������?");
		text("����", "��� �� �������� ����, ��� ��� ����� ������, �� ������ ��� �� ��� �� �����.");
		text("�����", "��� �� ����� �� ������? ��� ������� ��� �� ��� ����� �� ���� ��������. ����, ��� � �����?!");
		text("����", "�����, � �������� ���� � ����� ������ �������, �������� ���� �� ��� ������ ������ � ��� ���������!");
		text("����", "�� ������� ����� ���� � ����� ������� ����� ���������� ���� ������?! �� ������ ��� �� ����� ������, �����.");
		text("����", "������ ��� ����� �� ��������. ������ ���� ������ �� � �.");
		text("�����", "���, ����, ��� ������� �� � �! � ����� ������!");
		
		stopMusic();
		playMusic("music/FightScene.ogg");

		text("����", "�� �� ���������� ������! � �� �������.");

		scene("bg/black.jpg");

		text("� ������ ������ ���� � ������ �������� �� ����, � ������� ����� �����. �� ��� ���� ������. �������� ��������� ������� � � ��������, ��� ��� �������� ���� �� ����.");

		scene("bg/room4.jpg");

		text("� ������ �����. � ������� ���� �����, ���� ���� ������, � ���� ���� �� ������ ������� � ���, ��� �����, � ������� �� ������ ������, ������ �� ����.");
		text("�����", "������� ���� ��������� ���� ����-�� ���, ����� ���� � ������...");
		text("� ��������� ������� ������� ������� � �� ������� �������� �� ���������� ���, ����������.");

		playMusic("music/Beginning.ogg");

		text("�����", "����, ���� ������. � ��� �� ��� ������ ���������?");
		text("� ����� ��������� ����� � ����� ���� �����, ��� ���� �������");
		text("�����", "������ �� ���� �����");
		text("�����", "���! ���! ��� ��?!");
		text("���-�� ������ �����.");

		showSprite("sprites/ayako_angry.png");

		text("����", "�������? �� �����? ��, � ������ ��� ���� ��������. ����� �� �� ������, ����������.");
		text("�� ��������� ������ ������� ���� � ���. � ���������� ���� ��������� � ���� ������, �� ������ �� ��� ������� � ����.");
		text("����", "��� �� ���.");
		text("� ��������� ������ � ���� � � ������ �� ��� �� ���������� �� �����.");
		text("����", "� ������� \"��� �� ���\"!");
		text("�����", "��� ������ ��� ��������� �� ���� ������?");
		text("����", "������ �� �� ������ ���� �� ����? � �� ���� ��� �����.");
		text("�����", "��� �� ����� ���� ������, �� ����� ��� �������, �� ������.");
		text("����", "����� �� �������� ���� ������ �������. ���� ����� ��������.");
		text("��� ������� ���.");
		text("�����", "��� ��..? ��� �� �������?!");
		text("��� �������� ����� �� ����� �����. �, ������������ � �����, ������� �������� �� ���, �� ��� ������.");
		text("���� ������ �� ����.");
		text("����", "�������, ���� ����� ������ ������. ������ ������� � �� ����� ������ ������.");
		text("�����", "������ ���");
		text("����� ����� � ������ ��� ���� ���� � ��������� �� ��������� ����� �� �������� �����.");

		scene("bg/theend.jpg");

		text("� ���������� �������� ����� ������� �������, ��� ������ � �������� ����.");
		text("����, ��� ���������� �������� �������. ��� ����� ������, � � ������ �������.");
		text("�����", "������� �� ��� � ����");
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
		std::cerr << ex.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}