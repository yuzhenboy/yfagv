�}�o  �  ��W��S����u
��%ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��4⊧3]lW�����ъz����*7{�>媬��F�~u��=�=��aL��hg��n�ߩJb��ܢδ��z��誻���
(v|���.��=����N���q�<�\D������u׿6#��nRb׷�)T���0�3@�4��=���Y����j�R�2��M!�P��̟p��Qk�Z��մ���Q%8�f��s4ZV%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qc:
	virtual ~BatteryInterface(void);

	virtual bool Initialize()  = 0;
	virtual void Charge() = 0;
	virtual void Uncharge() = 0;
	virtual int GetPower() = 0;
	virtual bool IsLowPower() = 0;
	virtual bool IsCharging() = 0;
};

#endif // __BATTERY_BATTERYINTERFACE_H__

