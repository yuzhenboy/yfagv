�}�o     jt�s�s���u
��ʣ�$��i���%gzi�L���E^���c!���l_6�0���=��S(��R���K��Z[�ñd���Ǩk���xV��}�#ἑd&�v��<
���mޖ��[���#�"T��d�%��+GznW�(���.�������=y�/�3B���3�bN�/��b�V�T�h�g�<Ȗ�_���y�,0�\����~zCK��"B:,x7_a>�h	��(<Z��fT�7(;f��N�3fB>h��|��S��������,5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
	virtual void Write(std::ofstream& fout);
	virtual bool Read(std::ifstream& fin, int& code, std::string& strValue);

private:
	std::list<COpCode> _listActiveOpCode;
};

}



