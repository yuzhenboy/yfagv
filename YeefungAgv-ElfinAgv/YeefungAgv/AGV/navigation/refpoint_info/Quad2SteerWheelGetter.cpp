�}o  �  v"fJ}���u
�� ʣc%�n��u\t\���ì��Z���t���Qa����C������}C\fT�Ǐ5��:���H�	���R�n�*%"�`�vye��t��Ƙ )C��
V�ץF@��|n2=�9RA<Yh)NP�Ox����13,b哨�۾Y?��TɅ\��:��47���w�6�sy&��"%�s���{j�d���5�absH����}�1�t~�)s�����b>�:vw�E��3�.�ⲙ<��M�J��k0p»O�n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql*|=�Pҗ:w�fڲ���p)�3:�WK�vf|��*�a��`ۀ�AK;�Sk�I��8�֝;�t��I>���V�M"���1[�?�j����׸�T��łH"�EkJ���3晙��`>��BkN�$�x������r��w��,@����}X:8�3�M� ��6uŹ{kfo��$.�Nx��16�?e7�Z�-�2;��ypc����M�b�UH3]/p(��fNX/Ro��쁶���,��b.�N䍾��}cL8S��YA�Ҝ0���0��m&u�w.+�%Z��K��J�:�e�^���TO�A�7��g�̍�R$����� ����g�9��hO&����ʓd���z2����F
��-�,��;�T(L^�DB �~�l�o�n�	�SD��7(�<U�L�w�I��9j!J���I:^�ȴD�qby�q�9�\�,�!m��������r(���E�W q'��+��1UX��e�Y�w�����{�=�9�1��lD#�XsLu����I}�՘���u\�����ܕ@�b�D��)qG�V7�NGWjџg�=�9;t���Oc�i3c'u�LA��
�©�"i�a �l���*�z�R��W�;q���\cm	��Fl��h
!��"1��=Ӳ��!ߙ���/5�Z6��Zȹ�4��W�Ͽ@�����	y�y�bZ]XE/U��x���p՜k�^Q$V:�(@|rrMz�"�P��e���n�{$�H�Ш���Ora�`Q�?Ջ9A� i8b㖉�{oc ��iQ��aƥW[��!�͐,���.J��I�����o�du�ϯ0��6%da&ҫ�j6=���!`���_V��H�\��ݴA
�T���!���v���iTS_^���syu /C�}լ�{(���kp��	IA�X͍ѱr��Cq1X����&�q���޾}bB�6	{���[�g&�>
!{���P>?��
v��r���QGض�����u�w���
�`�#E�h�l�(O�����Xb�E�,!;2#%)d���Q�Db��3O�Uy���+@���Ѹ�]�Iۄ$$��͝��6�����oE���!pV�}4 Q�_��bC�c	غ�j8<��F[Y��+`�_0��ba��+�du56��5���E,S���WA���ΆR�Wsc���O֐�Չw�A�~_f�
�+�����:y���t�)�۽�p�Q&�b"
ש� ��q蔊��S�*�e#.��l'��ˀ��J�>�\M|�Px�_�-z�q.'�)�K\�H�����YE��C��+w 1�Inn�����)��5ς��*iwu)�Y�K�J)�㗫]�wR+�d	=R8��xzcW );ʁ!����2D���o{{q߫�m���{�Z�'�T�?�(�f.�v���V$�y̓Xw����z����0U@k���$�;毲�o?ΗѶ���w�J,1��F�!�����x�m¦ӽ�b*Ynfo.type = RefMove_Curve;
		refPtInfo.distance = R * (frontMoveDist / Rf + rearMoveDist / Rb) / 2.0;
		refPtInfo.radius = R;
		refPtInfo.radiusAngle = refPtInfo.distance / R;
	}
	else
	{
		refPtInfo.type = RefMove_Line;
		refPtInfo.distance = (frontMoveDist + rearMoveDist) / 2.0;
	}

	return refPtInfo;
}

double Quad2SteerWheelGetter::GetRefPointDistance()
{
	return GetRefPointInfo().distance;
}
