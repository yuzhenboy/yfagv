�}jo  �  w6D> |���u
��#ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�~��?�r,��HL�!�)��0%���e_.3~I�t��	uv�ݮ��K�6���{�Trb��Ya��7�4�?7�?u�(��ڔEFЧ�e�C��%9p�n����۞�@mxG���z�V�ħ��;���}���b"E�3��m��wo��h�w��:�>�;v=�������&��]ﵼs�S���ˤ�AbDz�M��o����8��syCs�a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql)�*�C�����r��#=��I0Ɉ ��eQB�V&�E�m��iq����D�c��b����z� ��/��q��Y
X�����d@U��2�������E�+�#3*�BfYָZ��<�.@s.��,1�j����嘴�u��*��1R.xE��0�v��7�Gk�����g�=��0��*����n�dږ%f���)�I�[Q
t3 ��vl�S,�g!)�p|�K6�R�^�=���x̹�G3A��$Ҹ�^bET�u 0�w�S�B]�[��d��Ոp��D�c��%�-"��G��u�}b��Y1��G�d�.j���\� ��
9m�ߧ%A�AxE���%�F}���0�W�ش#hO Mf��|�9�P(�����w&�a	DB� ��b��K8���N�n1�t@p/<�n�0gb)r�I�;�ͫ����a4�q�9=�[je�Q�x0s�t�H�����2C��;�DLHTה��^���2�.�؎������eCx8 �qQ ��Sint taskId);

	void PublishLocalTask(TaskInfo& taskinfo);
	void PublishHostTask(TaskInfo& taskInfo);

	void PublishOperationFinishedEvent(int opResult);

	int TaskProcess(void * arg);

private:
	bool _isRunning;							//�Ƿ�����������ִ�б�־
	int _taskIdCounter;
	HANDLE _doTaskEvent;

	std::list<TaskInfo> _allTasks;
	CThread<TaskManager> _taskProcThread;

	AgvInfo* _agvInfo;
	Operator* _operator;

	RWLock _tasksLock;
};

#endif // __TASK_MANAGER_TASKMANAGER_H__
