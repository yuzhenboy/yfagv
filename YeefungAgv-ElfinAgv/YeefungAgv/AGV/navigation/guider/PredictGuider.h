�}�o    ���q�����u
�� ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�>�-��R���`��hA؅�����?�}Ia)���m����7a��j(��^df��
�b8��Z`�s��~Sɪ.�cD>:��աY�E�C"���zp��0� bG�V��qxp>Ll��&(�d��[�="dRƻ���σL�@%A�mt���pV��'��gp4t�fT���� o���kv<�JRw8���f�K���6�0�R
�كs���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql,���Ҳ1���(� 񸿷z)��b*�rX�5�w�	IԼ���|�^����j�J�@s�l��J�7�CU�v5:�'��lb��wfl��%��;`(a;��bs�U��S���Z*Q���wE.;$;��"��TrO# ��+����n��}���ڣ��I.	�Z/�O�����/>�qF�y��Σ@3��qO�@\��?�`��>�F�ҙZAlWE|�lI��Bv��k�ʶ;�@��l[��a�Y%Z���cͰ��k���������H�~�!��Ĳ{��T>�ǂ!X���K:�'�g��p�Ӑ�L�$ڮx+ڠx�����}kQΛt�,�׵�IYC����
����e̶�/;j%��;U����X](Aa�i
�"Xv�5$Ih�B2��jT+�~H�Ќ��kB��?E3�f���+�	����b�<�g֙�|�?���P�^�Y��������V���Ԁ>]�Y4ekԠ1��;�^�'��ϼO��2*���^�dout::CAgvSubSegment* subSegment) override;

	int GetSetSteer() override;

private:
	layout::Vector2 _desiredRefPos;
	layout::Vector2 _futureRefPos;
	layout::RadianAngle _desiredNavTheta;


	double _deltaTheta;
	double _deltaPos;
};


#endif // __GUIDER_PREDICTGUIDER_H__