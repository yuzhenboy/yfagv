�}>o    e��z}�0��u
��� ʣc;=�o�����P�}1��w6p����f:��AI��CO��h���z}.L��1{�� E�.��D�����5��in3X��%��ǜ`�8�%Һ��zP���>�@U��"C'6���(�D��3+f0�&u6fD��) ��,<	���-�Q�>�j
+����Ȝ����=�2��!����S@Јr1���$�߃º�����MTO�ol�����n����ߛr4��v$�$�5�m���v��r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q	this->id = blk.id;
		}

		return *this;
	}

	bool operator == (const CBlock& blk)
	{
		return (this->type == blk.type && this->mode == blk.mode && this->id == blk.id);
	}
	bool operator != (const CBlock& blk)
	{
		return (this->type != blk.type || this->mode != blk.mode || this->id != blk.id);
	}

public:
	int type;
	int mode;
	int id;
};

}

#endif;