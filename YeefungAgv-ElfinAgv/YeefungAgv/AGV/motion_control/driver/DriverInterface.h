�}o  a  u�z	|��u
��Eʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�`�Mc��%����nl m%�}>�Y���ky���&Ƶ�"T��A`�n�ԍ�i��_I5�Tm �V
۝�G�&�G�0�l��'�j��O7�,��є����^�	��6��^���+� ����9��{ZAH4#WE�ۉx���y`6Q
��^����?��uΰ�G;��OM�]s�����e���rǩL��XZ�k̞�"?��>�Mk:�����`��9[�1]�%d����L7g��4��P�.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q_H__
#define __MOTION_CONTROL_DRIVERINTERFACE_H__

class DriverInterface
{
public:
	virtual ~DriverInterface();

	virtual bool Initialize() = 0;
	virtual double GetSpeed() = 0;
	virtual void SetSpeed(double spd) = 0;

	virtual int GetEncoderValue() = 0;

	virtual void Enable(bool flag) = 0;
	virtual bool IsEnabled() const = 0;

	virtual void SetWorkMode(char mode) = 0;
};
         
#endif // __MOTION_CONTROL_DRIVERINTERFACE_H__
                                         