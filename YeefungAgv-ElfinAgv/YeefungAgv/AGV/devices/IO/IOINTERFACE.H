�}=o  �  #��]D��u
��1ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5� �B[�~���`IL�!�)��0%��?�Q9r~rQ䌖��cgj��L>(}a�OC��k���?4����ʋ��fH_Nh�/�:C��f
0�ǠTG�蛮���_.n����.]z�U��?�#��
�,�g���	
�>aT��]�X:	�y������_�����!�j_�a��,'���K#]s�ZZ<�/��0���L�m�^Y����n'�/����'��s�p���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
	virtual bool Initialize() = 0;
	//Digit IO 
	virtual int GetDI(int bitNum) = 0;
	virtual int GetDO(int bitNum) = 0;
	//virtual int GetDO() = 0;
	virtual void SetDO(int bitNum, int value) = 0;

	//Analog IO
	virtual int GetAI(int bitNum) = 0;
	virtual void SetAO(int bitNum, int value) = 0;
};
#endif // __IO_IOINTERFACE_H__
