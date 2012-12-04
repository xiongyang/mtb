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
			///期货
			ProductType_Futures = 1,
			///期权
			ProductType_Options  =2,
//			///组合
//#define THOST_FTDC_PC_Combination '3'
//			///即期
//#define THOST_FTDC_PC_Spot '4'
//			///期转现
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
//	///产品代码
//	TThostFtdcInstrumentIDType	ProductID;
//	///产品名称
//	TThostFtdcProductNameType	ProductName;
//	///交易所代码
//	TThostFtdcExchangeIDType	ExchangeID;
//	///产品类型
//	TThostFtdcProductClassType	ProductClass;
//	///合约数量乘数
//	TThostFtdcVolumeMultipleType	VolumeMultiple;
//	///最小变动价位
//	TThostFtdcPriceType	PriceTick;
//	///市价单最大下单量
//	TThostFtdcVolumeType	MaxMarketOrderVolume;
//	///市价单最小下单量
//	TThostFtdcVolumeType	MinMarketOrderVolume;
//	///限价单最大下单量
//	TThostFtdcVolumeType	MaxLimitOrderVolume;
//	///限价单最小下单量
//	TThostFtdcVolumeType	MinLimitOrderVolume;
//	///持仓类型
//	TThostFtdcPositionTypeType	PositionType;
//	///持仓日期类型
//	TThostFtdcPositionDateTypeType	PositionDateType;
//	///平仓处理类型
//	TThostFtdcCloseDealTypeType	CloseDealType;
//};
