�}xo  �  �����'���u
��� ʣ{%��n���w?�D�F���$J��J��=3u
�ޕ�_�U���or���۱���-��0%�~�c�ܳ�?�����E�$�6��f��
��@��z�k�����$Pm��FyG��sDl�A��φ�z�i���7}��v���ϯ�w�j� ��/�̄h��V����|����x2z��G��~���;m5>����r����OP�DU��3�B93�¯�[�F�����8N�!qHCƢH�6��V�r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�'3T̎�@g@t���mv�1� �&������!��͂_�_��e�ťۇ�q�P��'`�Ƹ;������ƾ����3M�n��P��@x�qxB����l)��)��0սh�:"I<x������6���:�g�G�ǜ�!��>]�
V���	��G�T�*q�}���J�.}:�h��\�r��a�x�lNo�'���.�Y��[IySQ��P5�J�e��d�F�C>6�����kӪ���(����^�㒡��ϸ2����#��$ �)�ue߂Gѿl]��u�&@ �cyM}�2�{	���#n��*��4��yљ��)��7�����=��*o���\z)�ߥ�ף�+o(B>PB��4�1��"Q�<6��� ��Y�m`�]K�0��m~��'y{FG�����z�c������ʫsy��c�GtK����S�y�hC~k��`��(	_�(ا�>C�W��)%����N���l~b�l�_��RE9[��͒�G����l-�K=>χoNT�H�>w�����[!{�5i�h�=����P?���g���ӭ�t$���bWX�PfKؕ���M0����zF��R?����o�Ң(��mֲ�r���1���J�ҍ
�sy���N�ξYnz�<��S>�U���"�ٖ&�Uq�cӬ��s�eX���\���+,6�Su��76�gO/Qv�/��
��d\�����(6d��cK�6��n�j(��l�L��v�M�Y+yԒ�-�C��8^�k6�'����}���F�Ř�A�w�R�I#��O�:��L�l���!wW�?b�DyD��q>#��N���puZ6*�/�����w�=�sG`a���"��D=i�Q�e�|]u�J	縁��t5���=�J|nǤ�q~QÈ3��81���1�'�x5���ћ�k]~X �LMaΟ��k<Ȱ�:4@k_?ﻋ�=em�O �����t�+X�����k�2�8���3R��<� 5�~���#efW�;0��ml0��t4%�6�ֳ(�>7.sp�a�{ H�\��"8��܃O���l���R�{�d5�(v�x���p�].��`��9�?��P�e��,�~�X<^�����?����c��f���B\.�@��TZ"��V��P�K>K7:A�CB�'T/4r�q|R8�9�u-Jy��Y~�����R��M3z4 ��XS�|�Qњ�k������m�D��(ֺ�d�Jmݔ�ܢ�#������(R��ՙoO���w�do����N����!�S�E���zf��4t ����N��9.Оu�d"�}�o��}�FE��`�!HD�����0Y��nś���"�n|���O��-��I��a�1�w������0��b�8|@�p\-V]aVrk�6�!�V&cn��w�ʟ�)E
E������A��I%F`�pY��t�-��@E��s۵���+l����Z�8y�}xHX�Xg���;	H����V�l����1�HeF��shl+l����^�\���dOF0�y�5�)o�k�x���f M��Hb���9tOô�J��G{�/� EJ��z�����Q�Qk|�1��O��Z��E��~�O��+�u[g+iK���6j���4�'`f�h����I�a�9R���~���uf�5|�n�J>�=�)V�1�M�pe�#��fC��`��}Gs��i��}�"�Nл{�?s��|1EJ�dtɘg��_:�8PƏ&��2��T/T�8!�Qf�&XG��QEi�)\�����6jC6��d�H%t���L�Y�̰-놫fX���f2�>�����p}���|�#7�I�ΦY��,�|̚��p�Ds�v,_?=��+�6�FT�:�R.z�'ܱ�t��^3{�V$��]S���D��ݿ�����0��I{��A�6�Zx�[��	W2���:ȎW��[<�8�u��Y�.P�y�<���'�<Q�|��;Hf��������z:���ǹ�q��B���AMtx;

	list<WaitAckMsg> sendFrameQueue;	//����Ҫ���͵�֡
	ThreadMutex sendFrameQueueMtx;

	list<WaitAckMsg> sendingFrameQueue;	//�������ڷ��͵�֡
	ThreadMutex sendingFrameQueueMtx;


	struct AckInfo
	{
		FRAMEID frameId;
		unsigned short crc;
	};

	map<MsgType, AckInfo> lastMsgId;

	SNGenerator msgIdGenerator;

	ITransportLayer *transLayer;

	MessageCRC crc16;

	bool isRunning;

	AgvInfo *agvInfo;

	bool isAgvInitialized;
};
