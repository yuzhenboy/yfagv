�}�o  G  8-E�à�u
��� ʣc$m�n���i|x�v�����X�7-��Q���<��B��x��A��{^��G�e�1x@d���B�*h�t��g��*�d��i 3Є7� ��BQ.�qvg��Ss	.]	i��(M�r����on��c!(�_Ơ��b�9�8����A� �Z��F�@I�C3��@�ui�ʠ��9����N�����U�D�7��}�0��h�ꖌa7l��E�X��w��nY�cy&?��XaZ�z��^N�H���1��C��x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD$9��V���0B��-�w�M�
{_�2m���:�x}<!��C:`ʣ����BW���T���K���[JD��R��٦4*��w�j�6��3�n쵣Ʃ�2*��I+� _�?��,���0��Gt����/���3`y+�����p��ْ+�(#����_����mݛ���YJ%Ն��'����*qPQ��B��y�Ķl0�E��%+Ev�W �*���G�"ʰ�9�P������8����<����P��7��'��vd��!��٠.z�Z�uq,8�O=���ҏ���S��xdjP����>`"��v#�[mY;���{�%3��g3����)<�\ٺ�9����s�3�G�f� xD�����3g�GQ�9�2pDW��Yoײ*kWZ�	�u0����U?msZ·�n;�o���PW��B��"�e ���C�]�\?i��=�K<1_�F�Y8�n�H�"^�\���<���5fE�K��b��R�0~o��p�]��R�����lD+�S�A�Ds1�� �ݝv�i�ݗ�(Ѵ�=�1HߡhP��HY�����"s�E�����f�)z�ݧa��L�(wu��N3IWF�i�_��=ǜ�������D�Cl���L��?�8gY����oB�E�V�W���v 4�@��c3�:���Gf':��6
�+�"��3��B��8_�_<� �U�����N��P���e�V���Н����P�Q�gua࣊�%*��CSc�c��+GY�F@V}���g���4h9�;�v~��%"��(�q��ѽ^o�z1��S�} Y��M�? �B�g����,M�δ�;b�(��:��*��E�,�}[�G���h�%A�'AKh�L\`�:O�)��5�/k
���Y���l��0��d�SS_ޅ�/j��\�6��>����4�����Yq?*�����Q�m�O�@r�r��h<�@��֗�hp�D��ϧgH�I���%{���̸�0��}�����j
)���1۶��$&˵l�*��ttL��=B��ŀ�]9�^�}X���p�h}�泷1ˬ^1��o8B�u[`���U��u�����w$UxUղYh\]��5�c�fx����&\��x}~os����}�*�>��� ���� y�"�q~[S�1d�;{Ǵ���h���y7��=�+�e�
�]�!����d���%H{[����S䗁u�0 �'V}�6Ȕ�%I����ÀD4�N~n�\ln����Z��Bg�J�_ʟ�Mh��n�������q\l|����kJS��� d��E��_��$m%+4H|Yt�Qo�$9R�]�{�R�[\"��>�D�3H�KX,�� �}����6RBv���=@#(��V@o����������������8����lí���hYjdHlu
����L�M�
liN}�'�.~2sR�!/d�J%�
��9�:[�xj�����K��"%�x��-l��G:�Z�CCq8�O��kI n΁��CDC���g,�eZ�ProjectionRadius(axisA2);
	 if(ra + rb < fabs(c1c2 * axisA2)) return false;

	 Vector2 axisB1 = box2._axis1;
	 ra = box1.GetProjectionRadius(axisB1);
	 rb = box2.GetProjectionRadius(axisB1);
	 if(ra + rb < fabs(c1c2 * axisB1)) return false;

	 Vector2 axisB2 = box2._axis2;
	 ra = box1.GetProjectionRadius(axisB2);
	 rb = box2.GetProjectionRadius(axisB2);
	 if(ra + rb < fabs(c1c2 * axisB2)) return false;

	 return true;
 }