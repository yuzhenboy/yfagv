�}qo  �  ���Y@�j���u
��� ʣ�$��/���%_l\!��������~��x��>��[$��d�����s؊v�p@�CIv���;����:����\&���Ju�UގE硳�����+�5@B�pkI�mݙ-E��%=�͉<��i:���I²?�x�Q��ѕ�,�~���^�2�F��D��4Ԟ��ͷ1�y���Ǖ���~�����G
^@����N4��vi�����l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql/��� p�X��N���K��2C�V�iԠ�̈]�!b���B��Q�� Ͽ����	�0�Է��D��T�l"ud5�LT�/��2T+�� �W���lkL���v��Br.��
0µ�(R��Z8���E >��E�� �H[(�w�}z�}��rX�V�8^��s����ڜ�̺Y<H@E�ns�.lm��t���`K�zt��jf�H6W��o������,�('�>W�Lz�A���p^V*MbU�0�� �U�.6 �C�;n�:s'�|�����@: ���7f�'m�;�D�J%g��Hi�Ԭ�v�{���cddHRϫs�؏9���lJy'�U�{�L)9R�Dˡr�2vj0�W�ZrPiS+����FS�f�9I)�� ��L���=���9���H�����Gt5�L"�&x|��i 
��O�т>,lgL><�������U��������Θ��*��Ҋ�s{�6��]�u�V�/Q���b3#����+%��}�awParam
{
public:
	CAgvDrawParam(void);
	~CAgvDrawParam(void);

public:
	int type;
	int id;
	COLORREF color;
	bool isShowId;
	bool isSelected;
	bool isSearched;
	CString strText;
	CRect boundRect;                             //��Χ�д�С
	Vector2 IdPosition;                       //ID��λ��
	std::vector<Vector2> vecPoint;     

	PointDrawParam ptDrawParam;
	SegmentDrawParam segDrawParam;
	ClusterDrawParam clusterDrawParam;
};

}


