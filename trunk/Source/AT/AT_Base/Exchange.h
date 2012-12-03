#pragma once
#include <string>
#include "ProPertyMarcoDef.h"
class Product;
#include <boost/smart_ptr.hpp>
#include <vector>
namespace Auto_Trade
{
	class Exchange
	{
	public:
		Exchange(void);
		virtual ~Exchange(void);

		enum AT_ExchangeType
		{
			AT_EXP_Normal = 0,
			AT_EXP_GenOrderByTrade 
		};

		typedef boost::shared_ptr<Product>  ProductPtr;
		std::vector<ProductPtr>  m_ProductTable;

	private:
		ProPerty(std::string,ExchangeID);
		ProPerty(std::string,ExchangeDescription);
		ProPerty(AT_ExchangeType,ExchangeType);
	};
}


