�}�o  	  Elv>E<���u
��� ʣ�:�n���u\dXQ�<�3i��;b�K<'���XY�����Nǌ�c���r	�F�?�O��u��l�z*����u�
�Sʣ���tɃ��[�RSx��*I#�8(�~0P�]]�)�R��]�y��9�9L!�L�^ǅ���З�R��U,1�]?�<\���0'�7ʆ6�ЅV��6.���{R<3�\͠��e�5u�>^��"5�ci׺Z\�I��&�(Q�k��}�`6�K`VvTQG�"S�r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD&�{��B�qs�d�y�KL+���-z+P�zl��߷}����� ��ev9�v�a�(pϿ=�%{�Q9@*����>��A�S�1��,N�I�l�{�
�ʀ�Y�fvB� �R������Ñ�}���#Kc��W�rc�Zz2�i(��J�<]�I:1�$n�5R$�?�X��Jb]��+�Mؙ�N���ɶ��8!��H�o�Cr^{	b��"T�7^8i�Uma%����_��%�9���c2�}�N���O��TQ%�&�{K�,ǡ�&��ܥ�u�`��s��܊���}	��ifGQ޲�<q�2BL+~�s��M-�k2>�̠�ռd �?I��,�QK�ԁ�}�!�����pȻ�y^�����/6; ~}����R@�:����* l9!�)�ʔ:-�9�Vtȉʹ���-?�(5Ԅx�r�����G��S��a�-����[dơ���򨶤j��7��2�-������]���7O)�n�J!���9lD,�~j^�T�.�ߴ�pj0 Q<i~�i�� ����N
�q��a�hd�Tu콅So.X&����ށ�I�Ԭ*~ktNvѩ��a��Y_P*�Adf��H�Қr?R�=8J����Q�t��K�����fd����=������0�^�ŹbO�@\Ӯ##�u�B��^*x�=Cͼ�ՏĈ�&���Jڎy�2��ְS$�E)y[�S�)M���Qߦ��xAӎ���<`h�1���g{>
�XVok^�.���a6�9�
�@���͞�������,�����`(Z�0��_�f��v
�^�sr�Ӑ%��R���� �9��d�I���A\�Z��63�Ф��ꬄ�c������͌��XJI)����v��{��zk�'$�B��[$uq�HB�
h����.v�L9��t����E}vz���5,�en[��ő���?��rVr�=$�}lV'k�����1m�����l��p9A�['�$Gt0ȃO~�w?e�y��%/2�"l�$�6k,:�����Sb��"��^Cs� jOЦ� �{��J�oo�.�3��%���s�˹�@����;����Okx��ㆽm�
\,�Bd岯�ɿ����^]1Q{�@��73��A	n� �c`�"�g\����څJ���~�bg��'7N%ӤJ�w�8�����S9'e0�(�������`��kC�������o!���f�3�i	[T�o3G���Mv�d�A��U�x o�3B���a�I�w��r�#$�#H�Y�p�f�������2�Oָ����S)�myL��3P�Iu#�*f�q	�V3y��&[H��ZB������@�4ja���I��n@G�vݘ���w���u���-i[#�U�4��c�(>��Ubk)����[�L1�QR����vBRҟh���98uť��@�����B."�oD��\�����0����Ȳ��lL�HC�\J�˃�o���;�����<)l�_�i3H�)v�݇8�����Z�!V���=�BZ���&l�"@D�g6�a����ɕ��4A���_�/�ɔӮ��c� �v��ߓPv��aN��Ԅ*���9o��[��Y�.�>0��Dn���Z�̳*�Ȇ�@&j�0�#;_/G[|q�`{�V亓��
�6Č70#R��m�h*g-@�,�C�]Őá����R\�5{������+e����6���	F���j��M��R-[�	��	&!���
�I�wBh�E���3 �E���*�=�$�'�iT���Q�~��F��6�0�^��C/"�ڥP:��Z���ӡ�<"F�[��	��d�_CV�h~%�n8�h�(F�<nT��b��rT98Js(_|"���yS`��ɼ05&9@�M 
�~˛���l��[���� �\Pe,hX��&�;��Cj�<�{l~#���k/�����H������}� �fȓ� 4�B��*���(�]���FZ��.b�x�k3V��+:�ޒ�����>I��-yM�;8W��%��F|��ۄ��s��~��l���UᏌKP& GetOutSegmentList() {return _listOutSegment;}

	bool IsOnStation() const;

	bool CanDeleted() const;

	void show();

private:
	 CBoundBox GetBoundBox();

private:
	Vector2 _position;
	COBB2 _obbRect;
	int _angle;
	int _searchAngle;
	double _angleAdjust;
	int _navigationAreaId;
	int _templateId;
	int _plcBit;
	std::list<int> _listBindStnId;
	std::list<int> _listInSegment;
	std::list<int> _listOutSegment;
};

}




