�}�o  �  �z\E'8	��u
��&ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�>Bl�T�R2�g�,� DD��V#1��侬�zZ�ά-��KM�E���q"b�<���;e9IV��	0��ˬ�Y<���� G1��e�8�P[@>�[5@e�<@��7Ό��µr�p�W?]΄���&,>��$��Kf���jf��M�X�.��,������)��A��8Sߏ�������+'K%(��D���>:�%�}�q^����\�������[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q
class ParameterConfigManager;

class Quad2SteerWheelGetter : public RefPointInfoGetter
{
public:
	Quad2SteerWheelGetter();
	~Quad2SteerWheelGetter(void);

	void Start() override;
	RefPointInfo GetRefPointInfo() override;
	double GetRefPointDistance() override;

private:
	double _prevFrontDistance;
	double _prevRearDistance;

	MotionController* _motionController;
	ParameterConfigManager* _paramCfgMgr;
};

#endif // __NAVIGATION_QUAD2STEERWHEELGETTER_H__
