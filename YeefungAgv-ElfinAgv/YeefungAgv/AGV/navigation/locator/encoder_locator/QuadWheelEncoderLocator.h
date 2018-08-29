�}�o  �  �����!�0��u
��dʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�>Bl�K3���.��!k6<V�%�-R�8*�m�h��V�M��N$e�HWII�m�+	O�M2���t�c�EYX>澼Z$�PJ}.zU��c��t�.��@R�,猾��')�m���BYE�w�#4h����/� ۔r�Yx�VZ���u�]��}���J
����v�I8v�k6uYGB�x��l�!����ݝ�;��*����ή�[N<T:9���H�Z�e�>����k��Ͱ�I?`p�H�ȇ���9���<���fr<Kοb��[:�;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�����:(�o/��*$��ׅ�!��~�̏;��`L�_\#9=��'��e�x�Qeo���6�K̏~�	&�M��[VD��Q^��8�׻�&5�;�G�$^D9孤̍.Jt���Ţ|�6Gm��Լ��iN���/p��[�c:\F����S�Si��xe����D���A�Jd�ZgɌbIR�2���&�y�
maĦ�7~�dC�����d��O29#���)��2���~-���z4a�|/��9���_���Ⱥ/}!<��� �,�|����;9DR.VdG�g}r�[�^ˉ�y��'&��S.@���Z��'����d.㍗��A�E�Ն}3授��Ԉ�l���=�9�{�2R�޵���u��O��ޅ��>&xk�-μL9�`�|YeV�u>�cuX����x/H-\����I�'�����N�ɚ��z]O{����vrcu�����`�i�E�;���Z�h+�q����X�bM��E��}�d�̸Pbool Initialize() override;
	bool GetPosition(SensorPoint* pos) override;

	void Start(const SensorPoint& initPos) override;
	void CorrectPosition(const SensorPoint& pos) override;
private:
	int CalculateProcess(void* param);

private:
	SensorPoint _currPosition;

	CThread<QuadWheelEncoderLocator> _calculateThread;
	MotionController* _motionController;
	ParameterConfigManager* _paramCfgMgr;

	RefPointInfoGetter* _refPtInfoGetter;
};

#endif // __LOCATOR_QUADWHEELENCODERLOCATOR_H__