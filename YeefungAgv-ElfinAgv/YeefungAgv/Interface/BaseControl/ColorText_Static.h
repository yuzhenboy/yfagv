�}�o  �  dk�Y�(!��u
��� ʣ�$a�n��urx��h�f�o�Q����N*ܿF�-�e��<�6�X�4�^��z �����*��wEn^V�o?������kR�)��2��Wg."+�`Y�u��J���fP��)��g6%Pj5�td���<E�Mk�@(溒��~�?K��b4S�.��4c�)�d��r�u�h}��D���la�g�\&�7���LHͦM��
���3H�
�)!�����h�p��7�5�i2R��C?��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�'X�m�C{4���Le)�#W�]������=�6�!A|�'g�m�����K�jX(�P��,Lb��$����`=���z����{wB?�#F���2���$ŧ�[D�8��jJF	�gN�h��B�;�#vu�H���M�bh&eX�{w0�Dy�u��9s���W�A�ܑg4]����@7G�P�{5���v5��=9E�TAʦ��SRq�����V'�<�<�[������-�p��	8x�ՎC�d��3�/�=V>�Ƕ��5��4�b��*�/�ޟ���oH)d��h@g7(��<�*X&,JS�o��N��:�!��rya�c"�����~(#`޹=m�T�WL�I���"�=Nj��pI�fd`�z�w�fH`#q���P4�U�����I�ش���^��u�K\�P��1�
�b.!?Ndt�I�g��nݻ�\e1�a����2��L`��V��?��ël�L�$�Ӳ{M��S5p{�vbq�?Gs�����Έ0�=A�l�+�A[�����Ua�!?QHQb�l��ŴV��Ч����.͇��=m�!�8��nk&�cO��KJ(h��򳷪�&�V�(��i�| i�IV���ۂ�4�	.�Y���'�{l?�&ɴ������fm,._�o��{h�U��^���sS��I9�A�q�W�vM,�S���jcُ'm��IG�3@5'�=�֠�����?���P�@=��l����!`�0zl��	���b�� u�/=4��4q�ۡ��`B�ҥ��>��h	���ҭЩ���iٶ,���'�+!�A�U?I�e2��׏$����Ezz�_/}
�gF�S.j���l�������ḪB��Cr���^Z�E��vC��]:��m�"Y[c�%#O���>����zɪ=c��e��䯣PM��e�����9��ӌ�@!�-�h�����(|i5h��  �Qs��L)��G�;�̴-=a�N-�t����q��[��	F�O�<������nԇ//{{AFX_MSG(CColorText_Static)  
//	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);  
//	afx_msg BOOL OnEraseBkgnd(CDC* pDC);  
	//}}AFX_MSG  
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();

  	afx_msg void OnPaint();
// 	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
protected:
	virtual void PreSubclassWindow();
};  