�}5o  p  ��6�Yȏ̠�u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�>5"4ʧJ�ͬ��@�)��*V��?��M�>�[h���A�@R�,��{��)��f�Wa����e���z����{��)��ᱛ9Ʒ�}tB�r;�M����<�f��nG]�@�j��{c��Q���Uy!1�߮�%��q֨D����"�V�D3��ʙ���\W"Q��ep����;��c�
d�6�?u�Vm���b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
	double iMax;	//��������
};

class PIDBase
{
public:
	virtual ~PIDBase() {}

	virtual double Calculate(double, double) = 0;
};


#endif // __PID_PIDBASE_H__