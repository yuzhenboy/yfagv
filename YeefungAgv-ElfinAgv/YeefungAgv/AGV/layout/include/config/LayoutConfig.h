�}�o  "  �|��WJԠ�u
��ʣs:��n��u|tx�t��|Ή�x(��q�H�'(RxfL	\��S�I',���9�I:���*iй�[�	~d�| 3ȹ���g\�:Z�[�M��9��9��l8��I<�^�֣O�]��b6E�;v�~�3�?�v�v�\d�t �J�:�cE��)l��e7"ſ�uV�r���u|
IU��Q����	�Թ� 㽝���ku

s*ϛn���K��d�B�Y���4U�rX�1��??���i̤�.��X�a����єpK��α�AgGNL0�d�����s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qineLength(int len) {_lineLength = len;}

	int IsObjectVisible(int type);
	void SetObjectVisible(int type, int bShow);

	int IsIdVisible(int type);
	void SetIdVisible(int type, int bShow);

	std::vector<int> GetInvisibleObjects();

private:
	void SetupVisibleObject(const std::string& strValue);
	void SetupVisibleId(const std::string& strValue);

	int _systemType;
	int _lineLength;

	std::map<int, int> _visibleObjects;
	std::map<int, int> _visibleIds;
};

}



