�}�o  �  vb��p�fӠ�u
��� ʣc$�.���t���c���!35L�n�n-;�B�����q�Z�v����M����Z����y�fQTA�/����E&(������;�@��G�������l�m�|�Ȝ�,�8Yl-�Ҝ��T�?�Ȅ��,%ɏ�a��A���-��8��b'����&����&�Q�`PΒu�����R��L&Ͷ��Ģ)���7��.��t	��(����;z�6.gf7��g7�CH�4��`��G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q;

enum PacketType
{
    Packet_Heartbeat,
    Packet_LaoutFile,
    Packet_ConfigureFile,
    Packet_Message,
};

enum MessageType
{
    Msg_HeartbeatPoll,
    Msg_HeartBeatStop,
    Msg_HeartbeatAck,

    Msg_FileStart,
    Msg_FileStartAck,
    Msg_FileStartNAck,
    Msg_FileContent,
    Msg_FileContentAck,
    Msg_FileContentNAck,
    Msg_FileEnd,
    Msg_FileEndAck,
    Msg_FileEndNAck
};

#endif // VEHICLEMSGPROTOCOL_H
