�}�o  �  U�/\��ՠ�u
��8ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�@�컓ޒ\�a7������﷦�^�j��+�G�U�$r��3lJO�*�����%r�ZK��Hz01��A躞|#�=�K����,mYé:2�dmx�o�
�#�O��H��Ո�� }�89�3�Q1�U8�T}I�t{����c�-=tZNz�+·��	T�%Ј�&�6��ٿ�G��| <
5�/�x���9ɋ��nU$�/��B��pXx�~Ǟ��/[ԾS:B*7|���/(�4�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q

#include "SensorPoint.h"

class LocatorInterface
{
public:
	virtual ~LocatorInterface(void);

	virtual bool Initialize() = 0;
	virtual bool GetPosition(SensorPoint* pos) = 0;
	virtual bool GetPosition(SensorPoint* pos, int addres){return true;}
};

#endif