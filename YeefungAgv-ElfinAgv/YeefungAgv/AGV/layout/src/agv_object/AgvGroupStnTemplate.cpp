�}Ro  1  ���8o���u
��� ʣ�;c7o��zd\��웃�HJ�����gb+24�zf��f��
����k��{���i���Z���Ô1ݰ1��U�hoK;�	*�b�I6tu�%��ab�d#�Ģ �Ҫ�ONn�Jp�͹m��F�3���Io��ٹ��H��ݾX�H�{�{%���\�2������U�y��Zߡ�z`��´o����^�Tƴ��L�+ϕ@*�,o�?9�(�p��+O#Z��!&B'��-%�U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�(O�����Xb[u�-�V8��zv�x*%�Z;��>�5*O�B|Ϋ��X!�j��-��}��Ϩo��h�(JIZ�9Ņ�G�^Z�g\��%t��m|(	��z�h%I�x iL;����C�0c豆���Ҥ�.p�A�G���"��a5�}��A��M�	�B���Σ+�a,?���Uм���c�R�S:;{�;�Gi؝���xi���<�#�۽�p�[�	,����0��#V�ݰ��0�>��9��fe_4���(m����ƚf�7�&sn�3V�K�9l�.+3��l�CG�N�����;XVY��^��~3bl1�0$e�ƴ��`��Ni����&oBh`�c1�K�j#�鑹
�%1	�VP<L}�6~W*+(ʌ*R����o[L�-����o`rDS��wM���!X��:�'�b�]V(�k�
��5�>a��ȡ_K���tA~�������k�'kx����t���P����~v8�ߩ��4r�:�Kŝ���Tg��4�B�t);
	}
}


bool CAgvGroupStnTemplate::Read(std::ifstream& fin, int& code, std::string& strValue)
{
	CAgvStationTemplate::Read(fin, code, strValue);

	while(fin.good())
	{
		LayoutDocument::ReadLayoutGroup(fin, code, strValue);

		switch(code)
		{
		case 0:
			return true;
		case 80:
			{
				COpCode pNewOpCode;
				pNewOpCode.Read(fin, code, strValue);
				_listOpCode.push_back(pNewOpCode);
			}
			break;
		}
	}

	return false;
}