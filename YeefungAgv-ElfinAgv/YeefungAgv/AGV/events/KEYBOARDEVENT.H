�}zo  �  �c2 f��H��u
��,ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��ZT;*?�2�'aO4hA؅�����?�}Ia�i��Q�x�S��֌B׭�Z67�+V@�9�ۊ�0݌��k����[c�JIn��9��tJ�W}���u谰5��F�� �Uy5��P���s;�kb.�����r�>j�LC����P[%1��h�o���A�U��X@�gW�m�$�+��t~�?�{˛G4�*����(�[��!���Y���p=� ���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q_Pressed = 1,
	Key_Released,
};

class KeyboardEvent : public Event
{
public:
	KeyboardEvent(void) {}
	~KeyboardEvent() {}

	unsigned int key;
	KeyState state;
};


#endif // __EVENTS_KEYBOARDEVENT_H__