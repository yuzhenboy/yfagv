�}o  �  ]�b�;�|M��u
��� ʣMz��c���!�m���o��>T��U��,Rz+���*�'��J��oVV �m��n�	�Ft��t4��e�^|t�95.�P��ވc�q�v��P7���A���m�:�Ȕ3X�~�C~�Ծj�6ŵ�]��/Yi	FNS�UN*7��,�
�]�W�DI����CS�b����g��J��hq䝵���\+�mfhω)N4��vi�����l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�(O�A&�?�8pQ���I��A��p��*~��P�AB2t��������X3X�B�k��I�P,�.��7���ú'Xͬ��Q֟O<�e�M�:L�5�"�]>3s�Ό�X����j<^��cv`�O�[ۯ%R�ߊ!r� #ʙ�Q�����ZA����Tx���<W=�c �}Q�.�r�P�Dt򊓻�<k����~�	&҅��PN�Vצ~�w84��zA��闚i���~��|eRmƮ�)b��Ћ�S�"� wX�2w��x7������h�@Z�Y����w�����^��NVd]}V�c�����Z��Ha���8iNn%�AS>�����A3�E���K���E~7Ts�� (;J2Ą����(]
�<��Хh V%6���f���	�2��i�<�]V(�k�
��5�>a��ȡ_K���tA~�������k�'kx����t���P����~v8�ߩ��4r�:�Kŝ���Tg,���B�l*|=ʫ� ��&�EO΁��6�|���i �H?b�l�?F�M1	������ ـ3ډ�(��O=݂��7C��#�.Ճ2��Y���;\l�t���]���OT�����Z��P���i�(B�C<�=�ꏒ)$PA��u闂ˎ��!���r��6;����x����{kfo��MF�mo
��;9�]z�^�*�`Y��aqc֐�m��B�(KA7KLch.��zS��ɾ��w�A|��{����>{�.¼���l1^${��D>�Ȉ:�ݔh��gdm��F4:�Ç+%a��w? ͵j�2�k�6���2)�K�eȉ	%�2+��9bVHpEkm��A�y�܈e΢�ׇ#Y����O�+��L�^؉:�;2��t����H��ѦΎH�0�D8�f�P	��;��T�p�B��j<#0#��^��p��3T�&���7MDG����ur:��w�A
��$�1յ�!ԔT��ra�N��UuQ����Y\�<i�6�$Pl*|=:�h�$���
-��9ê�V���j���|�>�����R,��:�T�_8���ޕ~3�V�O8O�^��r}0�:邊�"�i�hy���ߧo]��ʯ��(n{�����2ۢ���HQFT�ed��3��9Ƴ�n�+�.�2��,�q���x^�?�蛹{kfoXD�3 `��)Z�r9�1�G�wg��Wm~���#�p�s�PK8gh?��pB\CD
��XM�˱��emh��
�
�(z�`GR" WU����[}��S �¾&���6��i+
pǽ+|9�ذ<(=g��2WE����L��l���T�T�՚�"���o��K��"�j��u^;����ߍx�f衿7Z�2��L�4m��R>�:��;�KS6�M7h�]�L�~�$E�%�6Ae��|�z�r�{�C��G6?=
��5�>a��ȡ_K���tA~�������k�'kx����t���P����~v8�ߩ��4r�:�Kŝ���Tg,���B�l)�*�5����D F폪�����h�߲:b�[XG���*{S�~i,<�@�P��y�C�2������S#~6�C�
�zRˑ߮�����񹟀vu[Cw�Ľ�$q���򧋕?�TQ��{�V}<�]�v��f����!�6����N]�����1*	D�7�G�I�'i��U�R��\��*����L�v��)g�s��5�A�_z@;+��X=&j��M>�|j�i=�hX�<�;�e'�kn8��E͹�Uk,�4�)�s�Xy�X��?�֜NՈp��E�c��)�/گ��w�Q��Yt��\�5�Z$�<Nȥ4�s���T��a�@P~�Z�I�/Qw���	�;�ӂ+'eP@(�$��(����T0}T+)Y�`p'B�*��^��`ޡ�0�u	�q\tP��I?!g�A���������
���>����@m������h����j�;C>�8Y��u������.W�������8}����lG
��6D��TryEnterCriticalSection(&write_lock) ) //���Խ���д���ٽ���
	{
		EnterCriticalSection(&read_lock); //��������ٽ���
		return true;
	}
	else
		return false; //����ʧ�ܣ�����д
}

void RWLock::writeUnLock()
{
	LeaveCriticalSection(&read_lock); //�뿪�����ٽ���
	LeaveCriticalSection(&write_lock); //�뿪д���ٽ���
}