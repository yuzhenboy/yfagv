�}�o  N  w�K��ZJ��u
��!ʣ{��n��z��We�K�������w��HQ��۱��/��MT�g5]�^#̷0!v�(6����Q�^�Si$�݊�3�qДy����;ʘ�EBGwu����B7�P��1��'���iq��.Z�MĺvP�;9#�W�7LJ0�3�ò(�f�>�q��4�V�h��p�����d��/b4��v4Q�f�R�-���2��#OԌֵ��k�cF
�/C92����/O[���&�8�U�����"-�!�b�0�α�?}0s�>My����.�x���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�-	>]X�A(Aݟ-��q�
u��Dnp�кS ��$ �;�������^c�&�Y����yAe�֋��s����=ӹ�����#��a�P	Y5���Y����U%ׇ�H{"*خWě.�wR�V()��쯮@�Ρ��ͮTo����K`���O���{��X��/I[0�P���I���b����U�ue�n�^zV[��vI��i��}C�E�\}x��;�^4oƬ�uƶ��Moϴf����% -b��F�y�Il�zC-7�q�!Uyڮ���Eߪv�P&I��2������gl�p��"�˘{F>�L�l�T�t�=��q����0Jl��Y�����\�t޷����*���}����e� \�����`�K7�m�v_�W^.҈��[��`=��ׂIKk�(���4�V�	ي�#n��ZD�;3'�:��	'' �卄m"c�dY���p��fL��g�#<M58��l�1��TLM����B��;ȼ��~??g�lD,�~jFU�.��4�Q,L���]���dۧ���0mM�#���'�V�5
T��J*0O}����m��e��zB I�NX��u���	��&�n7��,�ف�����m�%�@��<�Y3�n=BQN��C�/�ú��)E��X��sb"`�d��C�g��S��q��c�+���^*x�-Iۭ���Ș�h���Iܞ#�I����j �AJ_�H�+@��U��غ�-�􌟌5Zrt)�5���uB	b�}(0�Z!���eIo�9��q�ͣ��������v�@�����M�4��J��ݯ�R�O�I6W`���b��4��m��E���`�M��Y@�a��xKj�����y�˭��c�hM���픲���q[Rzٔ��jcÝb��jk�,1�H��&D0�]�r����.v�kõx�8-絚Ut��/<{�B�.���k�<�V�#_���cz΍J,,���*��'������@e��)��9K���
j<�� �:�A�tate *currState;               /* current state */

	Msg const *currMsg;

protected:
	State *nextState;				/* nextState state (non 0 if transition taken) */
	State top;						/* top-most state object */
}; 

#define START_EVT ((HsmEvent)(-1))
#define ENTRY_EVT ((HsmEvent)(-2))
#define EXIT_EVT  ((HsmEvent)(-3))

#endif /* _HSM_H_ */
