#pragma once
#include <boost/integer.hpp>
#include <boost/integer_traits.hpp>

namespace Auto_Trade
{
	class PriceNumber
	{
	public:
		PriceNumber(void);
		~PriceNumber(void);

		explicit PriceNumber(const PriceNumber & );
		explicit PriceNumber(float);
		explicit PriceNumber(double);
		explicit PriceNumber(boost::int8_t);
		explicit PriceNumber(boost::int16_t);
		explicit PriceNumber(boost::int32_t);
		explicit PriceNumber(boost::int64_t);

	public:
		double GetDouble();
	private:
		boost::int64_t	m_bottom;
		boost::int8_t		m_exp;
	};

}

