�}�o  |  (��k�Ϡ�u
��	ʣ{$��n���jpX����9�z��UJu����wW��ΛT���o�=��F���� �ϦU�9��O��#Uw�_]t_�(zK-w5\��RO$R���M5�]r�C�q�Claa�V���ǸO���,m�=�v�����n�G�{�5�Hw���
)j�I�;�tbt���xb��OR�Q�5�X���3�%J��K[���.1�����i�h2�'s1�t��k�L��b-"���)�aKD7*q^ŕxL�[��ԉ��k�.ϳukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�'X�H?&���e�6��m_O���}�?���9��6�4�SVI_ g;�Q�)��~9կt�4[j p��+I����h"�S�&�L�k�i���
J��P9�S����xh�Vh��\A�g����R�шWV���EG��C��A���,x��9s���`�?���|_8ζ��gGw�l�(S��e&��GN=S�J����wxR�ם����+�u�>�@�����J�4��.x�Վ	�%�h�<�eI �ؔ���g��g�b���;@S�bb�ގ���PW?R��?l@E
 ��G�|=oSe	�'��K�T�_vǇ3$0C�Z��ڗ=�}b2?l��q
��8�),���J�G�%K��pI�j%��>�WEo0g���.O�W��?�������;���gf�s���
�b.!?Ndt�I�g��nݻ�\e1�a����2��L`��V��?��ël�L�$�Ӳ{M��S5p{�vbq�?Gs������o1��<A�l�+�A![ּ�Օa�!#) �ye��T�?�½=�I /a��Ta�:�[�=^~_O��g����?I1N#.q�T"�rӓ�Hs�r؇��J��<�~|�z^^<Kb��X�Ymo��&q~����R�9ӟYP꫟�I>�Bc2SOE�wMEG2~Wg���8NSVf��<�S���ic��b"���?@l�/���ֆ� �e���ԱJt��FN(��݃��I�|O���#�����d@�nn\��v;E�وλ�!FP�曡�-��t����Ŀ��� ��R���_z*��m�e{�$|j��Ќpǣ���@~�r4n�k\�<)b��{���������V�� G牟E`�I��A��==��4�g,vT�ne ��F�{�[ą���0c��+�����WE��
��Ԅ�PԌ���N�A�h�����(|i5h��  �Qs��L)��G�;�̴-=a�N-�t����q��[��	F�O�<���m��Շ a = -3*L*sJ;
	double b = sqrt(9.0*L*L*kJerk - 8.0*pow(v, 3.0));

	T4 = (pow((a+b), 1.0/3.0) + pow((a-b), 1.0/3.0)) / sJ;

	_isCorrected = true;
}

void PhaseTime::reset()
{
	T1 = 0;
	T3 = 0;
	T4 = 0;
	_isCorrected = false;
}