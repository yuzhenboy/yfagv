�}o  �  ���8:;o��u
��� ʣs��n��{���W���f#�m�;��W�?�>c鯅��J�R0,k�GE�ː����6����N{c���䟸��D�nu;U���N`�j��&	����\��Ƣ����)��I�*"���6f��2��d_b��۔��_\?Ѹ���
w@GO3a����@O���wo��NM��X�]���u��q��ƶL�k� }�'�?����>���?�r�0[����;���Ý����T������2�n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql*|=�Pҗ:w�fҶ�r �M[OP}\I��S<%�)M�]��%��j������:�A�ɘ�H7����N����H�q�t��\A}����Rq��G�m=�d�0�>�2>��P�rӍ��{_�(F;��aSqh�a���խo�gql�"RU��X=��@z��y�b�{kfo��#-�He ��9�i*�i�/�:E��fvv���,�O�:�Iw	rX#��4ewe_���Ⱦ;��E����?}�5>㊹��wj;93U��f �̜3���'��O(k��k;<���80J��}	��j�(�k�!���)����B����Y%�����l��)�� �m��fX$����߅n����}�%��*�DC��{�)2��1�O �<3d��L�R�(~�#�;qk��;�^=��z�S��m3/!J���I:^�ȴD�qby�q�9�\�,�!m��������r(���E�W q'��+��1UX��e�Y�w�����{�=�8����, int &writePos);

private:
	int comPort;
	int baudRate;

	CommManager *commMgr;

	CSerialPort serialPort;

	static const int BUFFER_SIZE = 256;
	static const int PACKATE_SIZE = sizeof(Message);
	static const int HEADER_SIZE = sizeof(Header);

	char recvBuffer[BUFFER_SIZE];

	int writePosition;

	MessageCRC crc16;
};
