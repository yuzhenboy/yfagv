�}�o  *  ��6$��[8��u
��� ʣ���o���c���mK�(�c�p�n+�4�%r?>@Qt;0O0R�2��Dz~'-�Ĝ�m���s��H�J��D\���d��+�����d^��[�4�IuX�}-m(� {��bt71���3/��LC��:����>pr*�e'�ik�O�,6k�6���UW�)��X�ɵs����7g�����}#�
��^&CAN'�W9vk)N4��vi�����l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�����M�Wq����<�
OE����`P�A5@�t�^9�*�xXb�9���������I>�8&?��p�����
s1E/u�m>'�,:������^R0����A/cZ�]��OihgJ��B�>��0�X*�a������R��4��c_�P8�{tLAؔS�vZ����L%N���~���Z$/��e�a'��2�+"�WwNa���ue7jr��y���*�n��SB� �!H6������*AȽKWJ�/�`e���v6{�Kų́%�~5k�S�f�:�l�ñ����$L"8g$��
͏u�v1.(�����8��^��}R���sEWJ��i��ꪩ��Ilf�����y��g;+�"�ʿ��&��x�i%�SC���驆X����u���Fyh0Y�}��*ߗ��zzX*���g�2564��̡4~�=�4�$z�mz�HO�6~�'�4'/~�f���&�]^�B��\㡎tܵ��F��m4��M�[sn�7�\H��w�elete point;
	point = NULL;
}

void LayoutAdapter::AddSegment(CAgvSegment* segment)
{
	delete segment;
	segment = NULL;
}

void LayoutAdapter::AddStation(CAgvStation* station)
{
	delete station;
	station = NULL;
}

void LayoutAdapter::AddCluster(CAgvCluster* cluster)
{
	delete cluster;
	cluster = NULL;
}

void LayoutAdapter::AddText(CAgvText* text)
{
	delete text;
	text = NULL;
}

void LayoutAdapter::AddQRCode(CAgvQRCode* qrCode)
{
	delete qrCode;
	qrCode = NULL;
}