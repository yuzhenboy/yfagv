�}'o  �  |0l�8"���u
��ʣs%��n���%@xz��9T�C	��٘oA;b��٧�&��2u�*߼A��dZ
������}���y�U�s	�J�7�
�҅`�Ʋ���)4��(:�B�Tu����'A\] VP�4и�O�r�ͦ�tU�E;f���}
�R&�?�T���F_���J�ʍ��~'���:oʾ����U�0�ڻJH�Y���Z�D�¬��wD-P�>��l�A�ˑ�tNS\йt��2��yJ�C�ø��o+�G��<�X�tGC��Oz�z�P�cղN�-t�����}B���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�,na]8�Ȏ���R��X�ǅ�U�rtC����«a�)^m9��PP�Dd'o��DSJ�V���c�j��H��{��6А�s�Dќ�ѓ�j�	3��kxi�h̗U?�z�{�,as�i�}O�Tg��x���Փ��{���K�����V�w�������'4kZ����N��W�jz	WL��q�O|�/^�1��WF" @(0�襻�o2%���@���B�v�
b�E8� qZ�*oD9_�J��A����輍M�TN᳙Ä�-h���jXݭG��C��S(1�Lh��᱈쒪�iZ�پ�xon��o�g]���)t/^�!��ջJ̐A����(y�����]���-�GM�TK� ��p�5\��y*9?�W^m��.]�������4�t���#�I�������,����I�*�/��a=)�^���Qy��b�j
���?aMXv,J]L\M����}��T���R'\�WSf��M���?c���CH�HN

	int _currAngle;
	int _prevAngle;
	int _naviAngle;

	SerialPort _serialPort;
	MessageBuffer* _messageBuffer;
	CThread<MSG2000> _parseDataThread;

	SensorData _sensorData;
	ofstream _outputFile;
};
