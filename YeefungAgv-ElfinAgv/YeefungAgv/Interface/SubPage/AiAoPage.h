�}�o  �  �G_���9��u
��`ʣs�a�n�����d#��:��WrP�o�:%�z�������̢�qp���i����K�;��bh�X�3'���rI?�x\5�����1�21J�
�N&�S��Ps���3�K�	�P�A��Y��ݭ��{ķE��q�F)�+����]��ޔ��c�#f+�u
kr&�WM�RWsS�S�R�^�x^�@�nؚ���u��S��0��ջ?�pւ*�l�����|r?��Ny$�-�����,ܳ�K�;RZs2<KVq�M�$��'�{Avw	��)�&^���9�����K֧����������1��'�5\��2L�H����"cu���vr��:y�P��썟��F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qctive(){return true;}
	virtual void RetToDefaultPage();
	virtual void RestoreInputFocus();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	afx_msg LRESULT OnUpdateList(WPARAM, LPARAM);

	DECLARE_MESSAGE_MAP()
private:
	CListCtrlCl m_ListAiAo;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
