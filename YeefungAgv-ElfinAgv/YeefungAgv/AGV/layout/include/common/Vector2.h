�}�o    ��S\[6���u
��� ʣ�d�/��@
�lJ;~����S5�T!2�f2v�y�B�)R�(��)_Jj"���z�D����V�q�':v��c ��H��9���!���!+�иg�|g�w��趁�~L�%���&��%�M
�b�h ��1��x������w~���4�<�A)s�M~�Fk�S��)��ǳ,�[&�gZlSJ���<b��vi�����l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql� ��K��$y�
Q�z����<,�����P$j�-O,�9� O���帨�z�M�Q���]�& �z3�O���ǹ��M�=�}C]�"�&J��ܽ�wq5o��8������O�([)�̸��Z[<v�z0o�����Q��ݨQ���K�r�x?��~vT�a�m�G>�ro;qy�҄�2�c���i�lw��J\�t�_<��!��A �:� e@�b4���#Q�W*>��䵅�GQd曟vǒ��M����O��D��]#z�^lqJ?&[�Yf��t� V&�h�s������HU/͵#^9�����} ��O�,YW���Va���0�T\4�ss�)���Zk�Ơ74���o�{�����Y.͂+/�/雕3�z<�H�/F:�<_4KU�I4�5��������)���W{�����=�̮K���&2Q�)m\\�*�F{��~��{��~��,�����Vhu�E!�J��A�<�;����O�f5ҩst;
	double AngleTo(const Vector2& v) const;

	double Magnitude() const;
	void Normalize();

	Vector2 NormalVector() const;

	Vector2 ToInteger();
	Vector2 ToLong();

	int IntX() const;
	int IntY() const;

	static double AngleBetween(const Vector2& v1, const Vector2& v2);
	static double Cross(const Vector2& v1, const Vector2& v2);
	static double Dot(const Vector2& v1, const Vector2& v2);

public:
	double x;
	double y;

private:
	bool _isValid;
};

}



