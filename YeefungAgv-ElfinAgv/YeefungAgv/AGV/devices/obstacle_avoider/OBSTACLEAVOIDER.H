�}o  �  �.l71H��u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�����ʿj2�'��-��l%�}>�Y���ky��ǖ���1Bb�@�PZ���\8OPg�����'��>X2�ɕ:W��}����ڜ�YU��c��b9���c�Xxn��)nK��Q�(Jr���7�����i�ɡ�1\�EDò6ɜ�c�����I�jN,�vp=��U�l������qUi�h�[kMOe���'�N� Ě��LP��v���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q_Normal = 0,
	Status_SlowDown = 1,
	Status_Pause = 2
};

class ObstacleAvoider
{
public:
	virtual ~ObstacleAvoider(void);

	virtual bool Initialize() = 0;

	virtual void Enable() = 0;
	virtual void Disable() = 0;
	virtual bool IsEnabled() = 0;
	virtual void ChooseArea(int area) = 0;
};
#endif // __OBSTACLE_AVOIDER_OBSTACLEAVOIDER_H__
