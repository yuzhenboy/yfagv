�},o  �  ��(�RA��u
��ʣ�;�.���ud|h��nVVm6C1�}��{���D�������u���1�mM��D��S#� �c��{S��+��k.��m�	��R��?�<&]�H׾bOp���H��Z�Ic��F{���aa�'rE�f5�/L�3*)$���2�0�l8�r9ڷ�)� �0�A����t"׎�΀�o@-�|�he>����\�_�0�f��m�],a8�R���#EPE�Ǒ�{>?
n,@G]�|�{d�n��?;���j����b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qol flag = true);

	void OpenRightTurnLight(bool flag = true);

	void OpenAlarmLight(bool flag = true);

	void OpenNormalLight(bool flag = true);

	bool IsEStopLightOpen();

	bool IsBatteryLowQuantityLightOpen();

	bool IsLeftTurnLightOpen();

	bool IsRightTurnLightOpen();

	bool IsAlarmLightOpen();

	bool IsNormalLightOpen();

	int lightStatusUpDateProcess(void *arg);

	AgvInfo* _agvInfo;
	IOInterface* _ioCtrl;

	CThread<PilotLamp> _lightStatusUpDateThread;
};

#endif

