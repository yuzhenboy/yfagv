�}�o  �  �m��p���u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�>�ZK?R�t�l�M�M�W�t���r�t�o�c�`wL���D&��l탽�Z'�
��ITa���^E�s6Yς
gT�n�N�����)r�(���'��-�׭k�#S�|�Nl��j�*Pʲ D����v88Waq��]�2�l'�1؃���\�{�-ؒ�Cϑs�!��<T582��MP����o1`8��_�uf�Բ?�Ղ�s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�+�A[�׼�ٔ�������$�?�@�į_�;����Y��4�pUV��^�j�=,+���D����t@�O-::#0��F�2����Ӱ��WR��9lĒ�D9�iΓ�q�FY�L4����92�㔅�%$�����I�z��ڱ.�~Վ���_���qŧM��Ŭ���S���$'�'l���CJL�w������������x��e������k�]eW(y��]���q��6:�c|@��o��ܱñ<bP�����șq2�V埋Իԙ��%��H���6'�V�(�wz�,vl��׏i�����LkG�B2h�f �{Wm���a��d��������rT���Cx�O��AR��>P���l<$-�~m;-���6��T���z ͢=90��[������F�݋��(��ҍ�j%�K�7lx_�@�sM��G���rcm�2H��8�bm�%����՟���iD��ї¼=�y�a貪I.>�� rw�ƜlD.	"A 0�� �E;�.�0]z�ST�Xܧ��3b}S���Hd�,�Z4��0��x���KR�n���ڨ2�:q�<�)����9<{n�d�rA�NZ7n�3���%���S�f�e�����1�2%���\�*��X'�N�~�z�#ԲR~���k�g�ԺX�:��~��p�vU�8����/������AX���&>�!I�+�p!����� �<�q��(��@@y;�L�&�	�&v-i��T��U����� X �l�L��7�އ-��ay�H%���X��O��w]EV��M������j��l����#�5oO��W�d�\��A0��^>��]'=?�Iq���uG��b��E�����Ɩ�N�F��6�=@ �'Lj���tc��#��λALQ�T�U�/��J��[� U�c�Rn��v��Ik� ²*���{f3�\�ʷg�d�%�0�X)�����p����oy����m�� �_\�4۞J/������`U�'����;qd�l)�*���Y3��y>G
T����̅���뽠z�/��!�	IۄOC1�`�)pJE��jP ����~�;� ��sa-�c��nD	�Z�y�|�3U�G��K�(P���"3�CV�:�o�֔�[���(.l'�ʲ�>�C��Y��,��B�חԲ�d���l�@�7�G�EY7/$���j{�J8Mw��+���X��m�`�_DNnB&
��2Y�C�G-�xl�*t�u	�F����P���K3u��;Τ�k6�{U�9��%j�^��X���V���=�L�R:��#�="��G��v�W;��H��A�h�\+���L�L��Um	b�v��Mj���B �^�gF[��� DT�;�ǉ&/E`f��j�:���QNrY%sj������Y9� m�#���n�L.�jTfY�h�7`G�i)M8��5|�I?Ú���&~}����C��V�]^��p��#��GA�ݟR�I��?������UdpL�ޞ��jR���l�&5��&D�;�����a���!����J&���Ƣ���C�(6���y�H��-Z6�;�v��P�tҗ��.`a8Q?�>h�4YS�l������;��
�H�$�{�䚷Im����-�S~�(G#���c�/�b<ۓ#�sʗl�l.���}�_kY��*Wz��L�Z� {�.����1`����)����f!^��@�����m���gŊ�H�;� "/�'�����Q*�c���
�2�[����Z**9�k_n��a=z�2�N��ԅEU>���KKMF��A���p�9��i�1z�׀%��2 \�D(��Ɔ޼'��(���k�
|�
��C��rF�\Iq�֌�x�8Z��<�uL�U ��f"�$T�l��4#WWW@`u�«���o���̏����.��0�(����-�'�|(B�+X���K��-�x�j���3��,QiV������j��*���	څW�f-�����p��k�?��5�s��}�y��y���itO1n ��#Step _initStep;
	QRSensorDataType _dataType;

	SensorPoint _sensorPos;
	SensorPoint _secondLocatorPos;
	
	ParameterConfigManager* _paramConfigMgr;
	CLayoutManager* _layoutMgr;

	MessageBuffer* _messageBuffer;

	SerialPort _serialPort;

	CThread<PFLocator> _initThread;
	CThread<PFLocator> _requestDataThread;
	CThread<PFLocator> _parseDataThread;
};

#endif