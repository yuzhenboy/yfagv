�}�o  �  �VR
u_��u
��4ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5� ��j�B�f)*5
�mݏ@��^�j��+�G�	��j��O�T�:��F����ƣ�n���ʬ���Cչn?]�o�q��ła���Ns�}��lB� ���Ϻ�2�N'ڕ��6���b��
�Ȟ��h�g����i�~���mqC3��P{�oMJ ��%ҡ�^<=枦�
6����,F�%�5h��I�vFE���!���ͦ�-�%8{��(p��^�C���|_�;e�Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q\Event.h"

enum InsertState
{
	Insert_Start,
	Insert_Finished,
	Insert_Error,
};

class InsertFinishEvent : public Event
{
public:
	InsertFinishEvent() {}
	~InsertFinishEvent() {}

	int insertState;
};


#endif // __EVENTS_INSERTSYSTEMEVENT_H__