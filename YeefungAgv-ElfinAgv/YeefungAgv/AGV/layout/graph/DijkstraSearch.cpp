�}o  �  j"��Υo��u
��ʣk;�.��%Ta\A�����F�'��V�R�S��I��6��.��p%WB�E[�F�<$�At���	��į����h�R��^�O���ݷ�I�ʤ�}���Pc4Ly%�ň�;e�cǔ�M
�l�>r��u�9���2تGS�h���H���m�U{��h�(��BZvh'����G���=s
r4�[TL+P�G�nmK��/Gq2����� �d�@w�b�O�h�[�a��<N��t�H�o+�b ����;�|�d�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql+z�O>����'j�G	GqZ�w��RU�����W�!�p~�)��qzs�st�\.�H��`Z���8LL��Ly�dȬݾQ\�9�g�'J.�kʨN�u#����H�_*�]\
K1]��ũ�e�s�~���n��E�s{�cNn��N��=�����������,0�K��d�s���TS�E) �\]��Iu���!H!Z���kn�J��(�����D���W{���U�:p��ʛ�^9�d�J`�5z��a&��&K����~{	�fu�[�!�H0$�~P��fp*��P��Xo-:C.�k��x�/�Pb���sV��n�ǚS����#��9���\Si^�#�32�!	�)�D�wK(�˂�2¤]G�|8_��d�8~]������.�x���ǲ�@�,������T��J����K�+fT��=�D����������t�����R]�vgSܓ�ל���Ğ�ò<y� �Z+�t`��sH�]��d~�nF�׊E��0���2kl�*���3��2w�O5��RuI���ֳ����H����H�-�{�j2V�Q7�ZS����)��J$^~l�����@=��-�SE!UA �<F4G�0;9s�B��*n�r�4l*�K���$�}����z�I4=��E��:k�JW�y�o<m΃IYnb����B�??B��I�B�za�0}�8��5�y!P0;>�:@�U�Vm�sFx��̍�+/�S����|��F�k_�甩�kr&v:���95g�=�Ig�A&�S��NH�V��+</y��N�� :��]9&�h�[0��0���C�	*6T((EȔr��b��;�oũ�b�p�=1��q�I��P\��e�]�[1@�rҗK1����vZ>�.�|��v(&4���B}��.�f3�qV��Sy��=0P�G�|{j�ܴ��ڪ]RC�APX�h�W@>N��Vp�!g�o���uY\�~f��>)й�e�������)�Pf\Y!�g�'����7�zgΔ�ҥ+���lD140C�F����/��i#F�m���[t�3�<c#�2{ۜ�7�TT��"���$�-(b�6��\\�H�O�j�R���n�Z��
\){�c�o���*��c���ȩ}/����"��鮾�_�G����%�Z�E�_�8�K/�D��7#����?	K�a�[T�1�O��D3�1�%oM���}���B�*oT��qm���g�|�����:~�ȏ{F�U�땅��'W���'c�,�sP��Z���׋��l�����{���H�d���>�P)u�_��'l���wœjX������gĞ����ͩ�I��"íݓ1���\�ӗ`�[�� �{��IR?���'n��G����d���m #�j^����@+�\C�[���k�Ni��:��|�_�$�?�B��F$�KFgĨ�3TCU\��C��b'�O�i�u*�2�$�]#g�e/�ϔIbޢ,uXt�whv	�G<p��h�b8��?�c��|w���>zR�<�dK0�,�3.otalWeight();
//				retId = v.GetID();
//			}
//		}
//	}
//
//	return retId;
//}


WEIGHT CDijkstraSearch::GetCurrentVertexWeight(CVertex* currentVertex, const CVertex* adjVertex)
{
	WEIGHT retWeight = INFINITE;

	retWeight = currentVertex->GetAdjacentSegmentWeight(adjVertex->GetID());

	return retWeight;
}
