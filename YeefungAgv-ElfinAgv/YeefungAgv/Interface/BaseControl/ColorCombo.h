�}eo  �  �Ƅ3I��ݠ�u
��+ʣ{$�.��%d|i��w��헾XS��Y�o
���[*8)I@����3��CŃ�*\<Bm�_�rh��ฟ�o�`ݯ._�a�?X���&kHA��2�	�
7� �>�|4�"牖�!�^�ǌ��~w�2pM�HWF���ߕ���]�{$�~�-:�Ȏi�8���p�g��.x���yaͰ���C`#D�wEC~(�>�bZ7�H��x�y(P��^b����GIP���'���Mk���`��1��SXr?�8����S27bi������^�����[�
?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qtColor;}
	inline void SetBdColor(COLORREF bdColor){m_bdColor = bdColor;}
	void SetDropdownBitmap(UINT id);

protected:
	COLORREF m_normalBgColor;
	COLORREF m_focusGgColor;
	COLORREF m_txtColor;
	COLORREF m_bdColor;
	CBitmap* m_pBMArrow;
	CFont* m_pFont;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnCbnDropdown();
	afx_msg void OnCbnCloseup();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};


