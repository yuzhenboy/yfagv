�}!o  V  ��v�"���u
��ʣe'��F���~��g��8+�q�Ʌ�dD��٭��ni9+�t����eJ�gG���7�}��$���+F�/s���g��s�X���d��IM;��=T#z{EU,l��w�m��c!M���ϱrOx�J������+��!�O[�):"|j	#J��;z5�ǾL�_<�wz�*�R�3S��Ӈ��6�I�S�eǧ	TY�&����$�e�}�Dc���r	J��dA�mt?I��?�.��ǽƾ⮆�
�%F�4T%��+/>�a�2�����@O�h4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql)�*�C�
�������.�=�U�l{+�:��S4?x�8��.�1�?(�hv,��3���<aX���.)rG]1�P�p��-�-[>@�׫0#�c1�O�����k��T?����`/��Y��<���	�8V�W�~KB�6�zk�(ł��T��7�G/��‵;���\�� ����N�t��j(�X#��5� *�@Hn5$��X8j�3K�
Zv��t�e�x���
���kC��+���E.q�\)�a�h�I'�=��x���y���V� �V��)�x��bݔz�K��hg��G�:Y�e����U�YՒ a�0ޱ{m�D|e��|�f�qb���KdK�0���">rGYRb��o�+�W+����P6�`t[O�!��b��b���!�%e�m3U�s�yRs��;�ͫ����a4�q�9=�[je�Q�x0s�t�H�����2C��;�DLHTה��^���2�.�؎������eCx8 �qQ;��Sess(void *arg);
	void CmdAnalysis(Cmd cmd);

	int CommProcess(void *arg);
	void SubscribeEvent(bool isSubcribe = true);

private:
	CThread<LocalMode> cmdProcThread;
	CThread<LocalMode> commThread;		

	TaskManager* _taskMgr;
	CommManager* _commMgr;
	DevicesManager* _devicesMgr;

	AgvInfo* _agvInfo;
};

#endif // __MODE_LOCALMODE_H__
