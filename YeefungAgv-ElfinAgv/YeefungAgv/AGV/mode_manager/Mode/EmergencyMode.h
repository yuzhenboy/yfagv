�}'o  R  H���_��u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�`z,#
��ԑ��,iA؅�����?�}Ia�I�\l����S�z�Ƞ�%T	�N��*- ��;���`�5��+��
&��5����4��I���yd_ff}��6_��e�0-xߺ��ʺw�4�=o�#��v~Y��@��I��<c��rO��Il#��Gm!�iO�g��i���y�pѡ^X���=�#�KO�.���~��p����4o���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qs EmergencyMode : public Mode
{
public:
	EmergencyMode(DevicesManager *devMgr);
	~EmergencyMode(void);

private:
	void Initialize();

private:
	DevicesManager *devMgr;
	//OperationKnob * knob;					//�����ֱ�

	CThread<EmergencyMode> operationProcThread;		// ���������̣߳����ֱ��Ϳ��������м���
};

#endif // __MODE_EMERGENCYMODE_H__
