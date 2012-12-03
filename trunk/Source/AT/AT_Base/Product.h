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
