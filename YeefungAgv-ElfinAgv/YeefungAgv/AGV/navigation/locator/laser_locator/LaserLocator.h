�}�o  �  �
D���ᡠ�u
��Oʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�@�j�����v�g�ʥ��!5�Mک4:�i�� �3E��Bޱ��ݭ�#�X����^����Yv��>Rרa�8�2�{�[1�6�n�;U��HD�cjC^���cYsN�"��9���l~�~�<ޙ6�Q�-2c�����m̠�N6���K?#~��'yq�ǅd����W�=�<uu���'��ղ?r�@i�d�
�<-�P҄�T��s$LVs�@+�Z���ԭJ��KW�Q����-d֍;:s8B�8G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q************************/
#ifndef __LOCATOR_LASERLOCATOR_H__
#define __LOCATOR_LASERLOCATOR_H__

#include "navigation\locator\locatorinterface.h"

class LaserLocator : public LocatorInterface
{
public:
	LaserLocator(void);
	virtual ~LaserLocator(void);

	virtual bool Initialize() = 0;
	virtual bool GetPosition(SensorPoint* pos) = 0;
	virtual bool GetPosition(SensorPoint* pos, int addres){return true;}
};
#endif // __LOCATOR_LASERLOCATOR_H__
