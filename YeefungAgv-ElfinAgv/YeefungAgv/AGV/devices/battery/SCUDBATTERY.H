�}�o  �  �4��
�]T��u
��0ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5���4�D>R*�gIL�!�)��0%���e�)=�_�(�kD��z�Bc-�.��"���{�x��-���J��kS�P���92'��t��^�*fSo8�W-s��~O����u���$�]V�8"9��8j	9�+�Z���f	�طt������A���S���K�g.�H�f�'?��͏H�'Cg�Ͻ���N�;� �MPB����a� �$Tɴ%�u�� ���n?2�$!Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql-�K=�Y�ټ�!��2���Ce��0K0*g��PS`i�82�a&�K�/0�A��kȑ�x{�����w�6O�DM'�:�>��$���Z�~TLaW����d�����H'��2��6��V_�R�F�%/�*:*!�*l��Z ��\O:rcVT_{�f�����ĕ �����k����#��76�"mMq�}��2��FZ�����Dk"��m2�L� 6��b���?�d�`,.1��R���#S�MFZ�zB&m��`5�aO����s�E�)axJ:��[�UΚO�o���#sD�&b�^6��@7$��豼�qk?x=�:���̬c�,�:BBWbK��m+��/GE�O���52�3
���f}P���h�mnių�9B��[��S[�ґ<��2�<kJ������d	pGh^y�_A~�Ť�GCy���'9G��WK�����`κ(����,�=����M��Yw���*��B��l��@����x�*��L:�"���v�nitialize() override;
	void Charge() override;
	void Uncharge() override;
	int GetPower() override;
	bool IsLowPower() override;
	bool IsCharging() override;
	bool HasError();

	//Event handler
	void OnSystemInfo1Changed(SystemInfo1 sysInfo);

private:
	int UpdateProcess(void* param);
	bool IsVeryLowPower();
	bool _isReady;
	SystemInfo1 _systemInfo1;

	CThread<ScudBattery> _updateThread;
	IOInterface* _ioMgr;
};
#endif // __BATTERY_SCUDBATTERY_H__
