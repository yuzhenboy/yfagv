�}/o  �  ���mR&7Ҡ�u
��� ʣ�$��i���7J\U�i��@��4�/O���G:�v^�N-�8S�wg�a"SG��åVK`��R�Wk �p�2=����^��W����̸G�Q�؇�����,���F��ue�v�`���,��$x�6�@�h�ޣ�:.
��	pV�������I�kh��3�{?�,��X{g����������$�b莵��}t�e	Bhx������L���;O�仺N�>�Vl'lsL��-��t��r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
protected:
	int m_minValue;
	int m_maxValue;
};

class CFloatValidator : public CValidator
{
public:
	CFloatValidator(tstring pattern, double minValue, double maxValue);
	virtual ~CFloatValidator();

	virtual bool CheckValidation(tstring _dst);
protected:
	double m_minValue;
	double m_maxValue;
};

