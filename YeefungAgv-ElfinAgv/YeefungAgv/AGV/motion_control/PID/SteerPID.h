�}o  r  ���E�X��u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��B-�S.%=�s^�.�b<j�\t�f2C;f��?v�>�3E ȸ&����=��J�Kz��N���<�P���W�d N���3����s�5R�*P�[��Z.����
|a�MŸwri]j$~�s�����dIO��쇁Tж��<�摌/<k���F��Q;'M��(�P2�Dt�,;�p�5��ͪE���H����s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q;

	double Calculate(double currAngle, double setAngle) override;

private:
	Pid_t GetSteerPidParam();

	double ek;
	double ek1;
	double sumI;
};


#endif // __PID_STEERPID_H__