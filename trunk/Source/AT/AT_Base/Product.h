#pragma once
#include "ProPertyMarcoDef.h"
#include <string>
namespace Auto_Trade
{
	class Product
	{
	public:
		Product(void);
		virtual ~Product(void);

		ProPerty(std::string,ProductID);


	};
}

//struct CThostFtdcProductField
//{
//	///��Ʒ����
//	TThostFtdcInstrumentIDType	ProductID;
//	///��Ʒ����
//	TThostFtdcProductNameType	ProductName;
//	///����������
//	TThostFtdcExchangeIDType	ExchangeID;
//	///��Ʒ����
//	TThostFtdcProductClassType	ProductClass;
//	///��Լ��������
//	TThostFtdcVolumeMultipleType	VolumeMultiple;
//	///��С�䶯��λ
//	TThostFtdcPriceType	PriceTick;
//	///�м۵�����µ���
//	TThostFtdcVolumeType	MaxMarketOrderVolume;
//	///�м۵���С�µ���
//	TThostFtdcVolumeType	MinMarketOrderVolume;
//	///�޼۵�����µ���
//	TThostFtdcVolumeType	MaxLimitOrderVolume;
//	///�޼۵���С�µ���
//	TThostFtdcVolumeType	MinLimitOrderVolume;
//	///�ֲ�����
//	TThostFtdcPositionTypeType	PositionType;
//	///�ֲ���������
//	TThostFtdcPositionDateTypeType	PositionDateType;
//	///ƽ�ִ�������
//	TThostFtdcCloseDealTypeType	CloseDealType;
//};
