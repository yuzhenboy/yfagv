�}"o  �  ��'qUu��u
��dʣ{$�����%_xx3�	��p����\�5���O:/�r��kj�;����\�.��)cmW����P��f+�:y�kQ[��z�xs�yA§��Ȥ��5!�8�!K�)��d�'tƾ�k�]�br��N &��K��U_���|!+�C
C���y�xH9��`��	���ʗ19CffX�M��(�O���M���j�I�O���=��H��ê�e��?gǠ� F������Mٱ���Y��rwTH4م�W{T�G��OD �c���yPhUx t�F�&�	�Yޥ�(��\B��%]B2�ݓ b��ͽ�ڤdҨ�W�U>H�
?�2�Gԟ"~���ZT��p�b�;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q virtual void AdjustLayout(const CRect& subRect);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	int m_nMode;
private:
	CColorText_Static m_strMode;
	CButton m_MMode;
	CButton m_LMode;
	CButton m_HMode;
	CFont* m_pChkBtnFont;
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
