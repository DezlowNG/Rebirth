#include "Screens.h"

namespace rb
{
	void Screen::Init()
	{
		const char* vertexShaderSource = "#version 330 core\n"
			"layout (location = 0) in vec3 aPos;\n"
			"void main()\n"
			"{\n"
			"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
			"}\0";

		const char* fragmentShaderSource = "#version 330 core\n"
			"out vec4 FragColor;\n"
			"void main()\n"
			"{\n"
			"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
			"}\n\0";

		sh.load(vertexShaderSource, fragmentShaderSource);

        float vertices[] = {
             0.1f,  0.05f, 0.0f,  // ������� ������
             0.1f, -0.05f, 0.0f,  // ������ ������
            -0.1f, -0.05f, 0.0f,  // ������ �����
            -0.1f,  0.05f, 0.0f   // ������� �����
            };
        unsigned int indices[] = {  // �������, ��� �� �������� � 0!
            0, 1, 3,  // ������ �����������
            1, 2, 3   // ������ �����������
        };

        glGenVertexArrays(1, &mVAO);
        glGenBuffers(1, &mVBO);
        glGenBuffers(1, &mEBO);

        // ������� ��������� ������ ���������� �������, ����� ��������� � ������������� ��������� �����(�), � ����� ������������� ��������� �������(�)
        glBindVertexArray(mVAO);

        glBindBuffer(GL_ARRAY_BUFFER, mVBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mEBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        // �������� ��������, ��� ������ �������� ���������, ����� glVertexAttribPointer() ��������������� VBO ��� ����������� ��������� �������� ������ ��� ���������� ��������, ��� ��� ����� ����� �� ����� �������� ��������� �������
        glBindBuffer(GL_ARRAY_BUFFER, 0);

        // �������: �� ����������� EBO, ���� V�� �������, ��������� ���������� ������ ������ �������� �������� � V��; ���������� �������� EBO.
        //glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

        // �� ������ �������� �������� V�� ����� �����, ����� ������ ������ V�� �������� �� �������� ���� VAO (�� �������� �������� ����� ���������).
        // ����������� ������ VAO ������� ����� glBindVertexArray(), ������� �� ������ �� ������� �������� VAO (��� VBO), ����� ��� �� ��������� ��������
        glBindVertexArray(0);
	}
	void Screen::Render()
	{
		sh.use();
		glBindVertexArray(mVAO); // ��������� � ��� ���� ������ ���� V��, �� ��� ������������� ��������� ��� ������ ���, �� �� ������� ���, ����� �� ���� ������� ����� �������������
		// glDrawArrays(GL_TRIANGLES, 0, 6);
		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	}
}