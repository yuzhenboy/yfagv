�}�o  3  M4�0�{Ơ�u
��� ʣ��a�o���畿{�:�����uI\��Tq���O��|��@�K{����/��ٴ��3��ɔ�U�a�.����U�92hI�9�6j�B���4/q��!C�"��u����>f����U���< t���i��]�M����U�V<t��k�i��MD�.,xAm����h*R��d؇�ݗJ���gMt�c/�7/��ִ�Z��X�0��Orڱ�vi�����l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qvHomeStnTemplate(void)
{
}


void CAgvHomeStnTemplate::Write(std::ofstream& fout)
{
	fout<<"0"<<std::endl;
	fout<<"HOME STATION TEMPLATE"<<std::endl;

	CAgvStationTemplate::Write(fout);
}


bool CAgvHomeStnTemplate::Read(std::ifstream& fin, int& code, std::string& strValue)
{
	CAgvStationTemplate::Read(fin, code, strValue);

	LayoutDocument::ReadLayoutGroup(fin, code, strValue);

	if(code == 0)
	{
		return true;
	}

	return false;
}
