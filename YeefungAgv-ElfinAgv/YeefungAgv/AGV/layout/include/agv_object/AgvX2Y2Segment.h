�}!o    BM�݂���u
��ʣk��o��;����B6L�|�0��?��Ayz���Fd����?~.���{�۪E����ᑭ�NE,�V���Q��ˠ֮�1���װL���J>����.�ݝ�Pſ\��5fH<o�*s�-��4j�)龑��N����]�$�(
6hʩ���&���Bp7��~���cc?y�WI���@��V�ɸV��E����[m�/R�hb&ε���/�5A~� n������J��5�qL0n�[A�r�V��A^����Z��s@�J=}���[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q

private:
	CAgvSubSegment* GetX2Y2SubSegment();
	void GetArrowPoint(const Vector2& destPoint);


#pragma region Layout Use Only
public:
	/*************************Layout use only****************************/
	virtual bool CreateSubSegment(const Vector2& startPoint, const Vector2& endPoint, double startAngle, double endAngle);

	virtual void UpdateStartPosition(const Vector2& pos);
	virtual void UpdateEndPosition(const Vector2& pos);
#pragma endregion Layout Use Only

};

}

