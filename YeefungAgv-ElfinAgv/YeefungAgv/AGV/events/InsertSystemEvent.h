�}o  �  ��a�^n��u
��-ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5� ��j�팥�E�5
�mݏ@��^�j��+�G�	��j���J�q�D�Mo�-�p�K|gC?b��~(\�5�`�t��0=j
�,^o�E��I��@���`g��my���3g$��Le�
(z���I@Y��R&o��r���l�����H�
\YyE V��[�K-�h�M��PLԱ�gܦD��P��P����O:%� D���w������d�[�5����|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlude "event_bus\Event.h"


class InsertSystemEvent : public Event
{
public:
	InsertSystemEvent() {}
	~InsertSystemEvent() {}

	int insertType;
	int insertPoint;		//�Զ�����ģʽ�£����ֶ���Ч
};


#endif // __EVENTS_INSERTSYSTEMEVENT_H__