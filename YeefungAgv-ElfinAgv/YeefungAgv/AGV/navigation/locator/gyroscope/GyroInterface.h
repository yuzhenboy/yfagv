�}�o  �  ,,�K�2s���u
��9ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��"�Z��S2t>!/-iA؅�����?�}Ia�-��s���V�f���$-%j���%��N����X80�П-����1����̟Nc>5�r�����M�B���siT*��?F��o�(%���Q!�Y�j��/g��`72��CI\8��^��ع^3 D�%��H�C��z��&~d�D.���f���qnF�a���k;976��.�:�z{uځ�,]m����D��z_�M�'�jN?-��ⷒ	y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qyroInterface
{
public:
	virtual ~GyroInterface() {}

	virtual bool Initialize() = 0;
	virtual bool GetAngle(int* angle) = 0;			//���غ���

	virtual void Start(int angle) = 0;				//���������Ǽ���
	virtual void CorrectAngle(int angle) = 0;		//���������ǽǶ�
};

#endif