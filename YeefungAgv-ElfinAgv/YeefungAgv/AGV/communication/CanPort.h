�}�o  �  $��*����u
��.ʣC$ׯ��%(X�=�nV��N�L�j�C��M��x���
��3y����[j�J�r�q�\ޓ�à���P�N������T�i1�bO�T_���m��8�^�6;;�9�Ӑ�j<S���.<	� �q�˘+Z�ڼ�5��_C��Ҝj��b�֜\|��?'	 Rc�I�* �����6947����dz��0�5*0O�t�"�d�'Z�5��g���]�K*\HvY`s�q�Z��$^bYy������䶸:y�(ӑ��uߏ؝��du7 Y������U���n����al��|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qta);
	int	RecvAllData(canmsg_t *pData);	// �����������������ݶ���

	void ClearRxBuf();

protected:

	// synchronisation objects
	CRITICAL_SECTION	m_csCommunicationSync;

	// handles
	HANDLE		m_hDevice;		   // read  

};

#endif 
