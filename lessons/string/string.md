String Functions

strlen() function:

int main()
{
	char gender[] = "Female";

	printf("%s", gender);

	printf("lenght: %zu", strlen(gender));

return 0;
}

strcpy() Function:

int main()
{
	char color[] = "Blue";

	char bestColor[strlen(color)];

	strcpy(bestColor, color);

	printf("%s", bestColor);

	return 0;
}

strcat() Function:

int main()
{
        char text1[] = "Hello";

        char text2[] = "How are you?";

        strcat(text1, text2);

        printf("%s", text1);

        return 0;
}

strcmp() Funtion:

int main()
{
        char text1[] = "abcd";

        char text2[] = "efgh";
        int result = strcmp(text1, text2);

        printf("%s", result);

        return 0;
}
