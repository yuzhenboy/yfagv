�}�o  d  �'����_��u
��ʣs$�n��%\t\��y�(��hr��tSl:7D�>�[��LM%���K����۵~ܝsr�|(И=���D�=~���<`'��}�~w_��n�-/�i+l7U: ��$̘6��R��y����M��3z����4��RBBPm�QDZ��j��!�+�(��Q4�����k�Q�s�v�O���wb5&V���~˄�i � �bd�2�GH�7
��Z�o�Ѣr���Ma;�J��A�rڔ�d�I�.�d�( 	ԐM�:�@���JX��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�5�~V��W�#G!�kx�G� C���.D��`��#k@7�����g2���ʓ
�����ȩб5O.�=�_�V�5 ���(��Ish8�f�ή��=񒮣%��7�Ḛ�Q9�bB�+����D� J�W)^f��` ���p�V@M�8���gE��ml�2/9�[�|��,�[�3��iF�_s���ٺ�5M>6lr���5j�������Hg����I�G6u(ܯ��d�%���_p�z��v8��4`̱��L�u�~��z#s��4�߀�WSe�νQ��S	��_D��ts��f/��Őx���jogN�ċA9�vϾ�k���/9Tq��� ��W�k�9[��ژf�E��>���b�Q]w�Xչ.�<9�|���L��x�*x/I�$%Iv5O�eЖj}�R!<8oW6��N��lL���H�Vu��;������?^�l�6�t��{s�ø��w�A${y��`�-/z�ЯMY��o� �=�#W�U�>�\l�+�AZֽ�͔a���y���
�~��Dj���l=%h��#;�5Ta:���mB��>a���AG��	�^�zI_.���3�y|=b%)1�~M��s�����j��5��5�۪��L��/�n�zB]�\=�`�%gS��Z8�����g��h�s�����)�����Y�|�S���+%��|o��~V�gK�/�ƛ���_��O�ӏy��$Q��m������`1�Q}U������T�� Y�CRn��R6��αñKI���ܾ��i4�A��Ͷй���t��G���HWD�zw�o�Hn�h,y����j����?i�Ik,N�3%�zYe�݄ �Σ�N�ϳ���s�]-Ꙓ#�K��QV��d��2�l.v�fx3�ҋ|l�R�S���6J��8k��T�����Q	���Ɣ��v�����j%�{$L�m�fNQ��:�Q�����,6F�L�KO��޸��������|[D�P��Gm���gX���Y���LeX��ioMgr->SetDO(DO_ReverseRotation, 0);
		_ioMgr->SetAO(AO_Voltage, 0);
		Enable(false);

	}
}

int OrientalDriver::GetEncoderValue()
{
	return 0;
}

void OrientalDriver::Enable(bool flag)
{
	_isEnabled = flag;

	_ioMgr->SetDO(DO_Brake, flag ? 1 : 0);
}

bool OrientalDriver::IsEnabled() const
{
	return _isEnabled;
}