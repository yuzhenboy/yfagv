�}o  �  �����#{��u
��� ʣ�$ׯ��%|d\h�KM^����ȗ�*�I�ƫ]�èB/&��ѕ�C�ǉn�8O��s��X�Q��#�ޜ���(�ALh��a@7}�R�:�x�ŧ�R&7?��c���:%B�p�����B�\��PW?11R�ի)F�`p�����I��e�Δgk<��)��O|,�~���"�@�������c�h�K$J�|.�ɟ֓�fpie�ص._�c���BŴ���B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD[.}�$6G Ox��bɸ�a2����R��#�� U���W���x�:��<�ƅB Ѷs���O2k����Iy�BV�j�'�F��Z�M��7J5�S���S�A�I�]M�߻#���H��L���g�s�G� ��'����+��*n��.3��..������� �Y�GnCZ�z+�:4�Q8�L�,�d�+4J_�[������^c�O"��WAi�*�9��s%,@t%{���z"�U�se�� '��_�T�T���^���)�}���Am��LU׮��ؘX1���f��n��>_=*i�U��g~Z�"��R�vL�J��B���Wn��P�53�|k��������^�ʫ�)��,�\,����x]��2����N2��}��%ͣ<�)�����E?���v%����B�L�sb�����"������cț7e��m�q@��t9�:{C��Y��W^$�U��.���h2]]K�x�������P�E�үɒV!��=�ng lpszKey, LPVOID lpStruct, UINT uSizeStruct);

	BOOL DeleteSection(CString sectionName);
	BOOL DeleteKey(CString sectionName, CString keyName);

	CString GetFilePath();

private:
	CString iniFilePath;

	IIniFile *iniOperation;
};
                                                  