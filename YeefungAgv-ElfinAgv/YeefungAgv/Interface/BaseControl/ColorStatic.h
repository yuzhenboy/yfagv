�}�o  �  ���x��x��u
��� ʣ�$��i��%�I��Fu�azq� u�I����!�6>�@G��/���u�?�/��P�z{`�*���c��`��<�u.J=��Q\U��;�ɒ�]������r7;S��=v*9��;�l����i
|4�i�S�X�?�h"#'�9�G�Y6+� ŋ���N �:h(A��K�V}�k��׸䮴`�/�qF��k�.�����#zh&w�@�E<R�l�W�92��ۡ���N򼘴Ì��r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�,na]h�̎��ꟕ�7��&h�&~F�lM`��x
���S[����y���e���S>� �����<�fFbm�vd-ϊ&Ԗ���g�$�w}�c�EV��:dxT�9c��DQ?p�sz�_���BZ�/Q	����k� �z��g�wo]A�����}��Sd��8��	J	WL��p��OC�U�x]��Wd] D!K$Ȼ���|mJ���>{�ئF�r�
�;X/�>1[�g!Ea /~���,���'�;ʀ�?�`3ყ���fM���}Yπ6��/��U#9�'zJ���������&	���vn
��z�.U���8l|����шӅv����3x�����Ұ[����DLB�.l,���f�-�0�*t2Y7�jbP��a1H��׉�>��;� ��
�S�����,ˌU�q� �*�(��_�=)�^���Qy��b�j
���?aMXv,J]L\M����}��T���R'\�WSf��M���?c��CHmINlD+�{���Ds1�9�V�� 2]GI߳�8+W�?�)�����|T�6f@(1i��j'4�R�H�s�;\������x���� �0��5�U�p�t'{�͓�;�ySq~��ԋ`����YY3=3��y��t�n�f<(�C.N싥�c��O/�D��Q��,}N!�m�Q�6_]4���3��\��?�r;��s����kO��e����e�e��������� �J�kcj����.,��NO!�\�]�aRV�r4)���	�M��<�x�??��=,��Z�Mö́��YQ�Zn��?�?oa.���RDV�$�U���� K���2�(��w�7�K��V�9�|�m`���k�0Y�=O\(�J\h�_,�	��f�+k���	_��|��#��]%�FWCcɉ�5|��;[�I�������}^�˅��MRH\�'/��ۤr0��'qH�VJ�V��{ڡkjso�9��Bu����8�-��Z��@��c���`+/J1�qH	{�mHeX�k<olorStatic)  
//	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);  
//	afx_msg BOOL OnEraseBkgnd(CDC* pDC);  
	//}}AFX_MSG  
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();

	afx_msg void OnPaint();
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
protected:
	virtual void PreSubclassWindow();
};  