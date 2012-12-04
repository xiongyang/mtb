#pragma once
#include "ProPertyMarcoDef.h"
#include <string>

#include "PriceNumber.h"

using boost::uint16_t;
using boost::uint32_t;

namespace Auto_Trade
{
	class Product
	{
	public:
		Product(void);
		virtual ~Product(void);


		enum ProductType
		{
			///�ڻ�
			ProductType_Futures = 1,
			///��Ȩ
			ProductType_Options  =2,
//			///���
//#define THOST_FTDC_PC_Combination '3'
//			///����
//#define THOST_FTDC_PC_Spot '4'
//			///��ת��
//#define THOST_FTDC_PC_EFP '5'
		};

		ProPerty(std::string,ProductID);
		ProPerty(std::string,ProductName);
		ProPerty(std::string,ExchangeID);
		ProPerty(char,ProductClass);
		ProPerty(int,ContactSize); //VolumeMultiple
		ProPerty(PriceNumber,PriceTick);
		ProPerty(uint32_t,MaxMarketOrderVolume);
		ProPerty(uint32_t,MinMarketOrderVolume);
		ProPerty(uint32_t,MaxLimitOrderVolume);
		ProPerty(uint32_t,MinLimitOrderVolume);


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
