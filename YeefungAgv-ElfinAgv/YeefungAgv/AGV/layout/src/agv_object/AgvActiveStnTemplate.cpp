�}�o  .  z����C��u
��� ʣ���n��z=��?�)�b=C�5x$d�5=q��1Qq�SQ�:�Q����b�<�:w��CN��}����O1�Yӫ�'��yd��k����@.���j��i��
�����<�c2}��	q�?'��2�T��E,o����BO$�u�8��-�H�3)�ߊ~4�*�O!�m�s4�%%�Q�\����w��vrW�]+=����Ǒ��z��G�%y&7,��O�u���L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql,����20���(�'v0bS�h)�b�2예RRc�T����F!h��uhⓇ�K���s�I���e�f��4S�ȑp�Nc�݈e�����٬�?���A�r�O��X���wɈ3	��f ��j�|O-*	�v���A[��~�7��'y7 Qz���^��)>�qG�a�Ǉ�-L�6�Ty�L [��K�x��:�N���IZQa�|��Brnץ`졤#���qM��{�G� ��deл��|�����������N���ЄQ�(�E:�ѐ*e���=���h�?��u����%�=օ(%Ҧ#��[���j}m@���Jy��ߓeY��O��D����f(��[�A+A��E*с��ZTW)&�^�9Gw�zG�]7��1�sM�ƫ��4x��9C 3����/�y	�����<�g֙�|�?���P�^�Y��������V���Ԁ>]�Y4ekԠ1��;�^�'��ϼO��2���Ȏ�de, std::string& strValue)
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
				_listActiveOpCode.push_back(pNewOpCode);
			}
			break;
		}
	}

	return false;
}
