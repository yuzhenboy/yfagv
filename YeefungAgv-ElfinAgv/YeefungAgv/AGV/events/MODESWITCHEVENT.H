�}�o  �  "�v�b��u
��1ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�@�,�[�*+m�ow,o9l%�}>�Y���ky��s����z$$��r��_�&=���gA�&�3��+�&?��vk%l�����ۿ�?u��ء��]�?L�0ȁ���sy,�73Q�m����W�W�b�>���Fa�[�y˗}�A�F��$=�]�� ����OnH���]�Eإq�'5�Y	�`�1�p�ٻ��N�<cڢW;"� U1V2�a-�n9��h��J�.�<��ɴ���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qude "event_bus/Event.h"
#include "vehicle/AgvMode.h"

class ModeSwitchEvent : public Event
{
public:
	ModeSwitchEvent() {}
	~ModeSwitchEvent() {}
	
	AgvMode_t mode;
};


#endif // __EVENTS_MODESWITCHEVENT_H__