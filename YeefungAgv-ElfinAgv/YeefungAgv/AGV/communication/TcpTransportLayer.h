�}�o  �  �zq�E[͠�u
��� ʣs��n��{]#�?�DY_ �{�s#��oN�E�fo�Ѱ���\N^�����z_�����N�z�3:������c�zEU�6�vL�0;3V�b~�UY�;R����˗�[�a���(�J���	���I��4@�]��4�k�F��ia�B���9�*ٖ[#v?7�\k2շY�j^�2G��*��gc�5v쏤'�;2�Y>#K����`����z	����"�..*?�"SV�Ā��k����0�'p����x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�-h�����Sa�މX-,���hE#�w�����f��`��g��Z��2���_�)�S�Z� ���;�����鑓�m����&�ػ��Zx�;"�q�R�1XɎ��;E)���C�h�a�s���^�����:�ꝁMG�9������M�G.w�Z�
"���L�y'��_̂�J�f��Sm՜w%�����8	�mY����'�vŉ9m/�W��DU�#��ޕ�P�N��
���G��%Y<t&O��/��G`(�Yʳ}��6��i=�<�f�g_��D�uyd��J�c5�ӣ׉3x@'Ԉ#��p9�L�^���GJk&^Hy��H�f5j�7���
zZi/�i}o%�1l֭7�D��Wy �K3�o�ŢQ�:H�Ǭ�{�i1�@0��˼��U��&�=���F�f� ��ɫ����J�R�
�p���tf1[~����G/��
!�zR]I3�6*�1o� @;�s%�q�E^S��TtO��ґ#���L\"jE�HY��ageHeader(char *dataBuffer, int &writePos);
	int RemoveOnePackage(char *dataBuffer, int &writePos);

private:
	string serverIp;
	int serverPort;

	CommManager *commMgr;

	CSocketClient socketClient;

	CThread<TcpTransportLayer> connectThread;

	static const int BUFFER_SIZE = 256;
	static const int PACKATE_SIZE = sizeof(Message);
	static const int HEADER_SIZE = sizeof(Header);

	char recvBuffer[BUFFER_SIZE];

	int writePosition;

	MessageCRC crc16;
};

