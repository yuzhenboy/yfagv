�}�o  �  ڄE�'�����u
��� ʣ�;�֯��u|dxg�E��X[���%k��҂��퇲������P����ɢOme��.@��i�5���z}�� �Ċj�ʰƃ�x����ε�H'0w25�n���GT3)�� +�[�?˵���m���VS�s�+��������c#�5�vC �2�E�
]��78˃_�N��I8If�/�=�X�B��~[
��;.�#��9����e��Ĉ�;�����c��S�-I:�}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�&5�昹l�y��+T;�UFPx�:=��&� ��fR��E*aD;�r-���pW��<�A�D�X�H�w��y��cǯ���5�$E�{��i�LV��(�H�Q�@�i�4Q>k+�_�����,=��:@�hez�|S�u�I�DX_����VeY��*Wz��a�K�|�k���n����h����ru��]��ڷ��~�O��z�m�?� "/�'���QݠQ
�{���)��\����=ez�cBa���pGP�2L5�X��OU'ԭ�GGFF���@���p�9��a�1z���p'��7R|�t����ԉ#���v���3�z��Ʋ'q��&��eM����l�#=vp��<�n"a�D;��L)�Y�O��%o&PPCeon������=o���������#�!��x�1\;�F@�f+6���32G�x5�����e�K���H�/<��͢;���"TE����~�l?w�b^����%��,�w�|�
з����l�onName, CString &lpString);

	void SetStructValue(CString lpszSection, CString lpszKey, LPVOID lpStruct, UINT uSizeStruct);

	BOOL DeleteSection(CString sectionName);
	BOOL DeleteKey(CString sectionName, CString keyName);

	CString GetFilePath();

private:
	CString iniFilePath;
	static const int maxSections = 256;
	static const int sectionNameMaxSize = 33; // 32λUID��
};
