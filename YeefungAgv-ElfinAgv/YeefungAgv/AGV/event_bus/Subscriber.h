�}�o  �  ާ�=�����u
��/ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��B�"K�+�gǎ>��J�ڽ~lqh�o�X�&%|J��>	�o,�4�>A ~X�e��ۀ{A\�;���>����`�yFx�c�<!α%	^��u9_!�,��Iڈ��
b��d�W�h$�(U������^*`@q��K z��8D�F��A��Bj��j6=�c�Y�|�i�41sv�d��j�?)�8��1P��zA�<�������T_���e���w-x�/u|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qer
{
public:
	Subscriber(void);
	virtual ~Subscriber(void);

	virtual void OnNewEvent(Event& evt) = 0;

	virtual bool Subscribe(Event& evt);
	virtual bool Unsubscribe(Event& evt);
};
#endif // __EVENT_BUS_SUBSCRIBER_H__
