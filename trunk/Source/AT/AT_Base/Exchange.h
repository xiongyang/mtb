#pragma once
#include <string>

namespace AT
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



	private:
		std::string m_ExchangeID;
		std::string m_ExchangeDescription; //name
		AT_ExchangeType m_AT_ExchangeType;
	};
}


