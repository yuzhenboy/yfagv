�}Lo  �  z9�*TqI��u
��ʣc$�n���u*h��)��aU���WQq��9|(:يN��.�-0�|�}�K�s{�9�Dn=�3�<����P��z����Lrx�F����ڽ���M�1�3n�ݑ�=R�T0�L5��ʝ�}轥]/���J��r"�g��녮R��[���.Rދ�ѯVعmQ	M�I17M{�*�E(�I��ZhT3�e����B~m��yU?���ub�o��\����9w}S�!��a�t!��?�/n0�R�}Y�H�{�/��&�%��/S���'��-]��w�xj��4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
{
	/*LONGLONG interval = 0;
	LARGE_INTEGER endTime = {0};

	QueryPerformanceCounter(&endTime);

	interval = (endTime.QuadPart - _startTime.QuadPart) * 1000 / _freq.QuadPart;

	_startTime.QuadPart = endTime.QuadPart;*/

	double interval = 0;

	DWORD current = GetTickCount();

	interval = double(current - _start) / 1000.0;

	/*TRACE(L"current count = %d, prevCount = %d, interval = %d\n",current, _start, current - _start);*/

	_start = current;

	return interval;
}
