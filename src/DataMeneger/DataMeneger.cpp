#include "DataMeneger.hpp"

#include <boost/log/trivial.hpp>

#include "impl/DataMenegerImpl.hpp"

DataMeneger::DataMeneger( )
{
    BOOST_LOG_TRIVIAL( trace ) << "Create DataMeneger";
}

void
DataMeneger::start( )
{
}

bool
DataMeneger::creatr_cloude( bool is )
{
    if ( mImpl )
    {
        BOOST_LOG_TRIVIAL( trace ) << "good";
        BOOST_LOG_TRIVIAL( trace ) << is;
        return mImpl->create_random_points_clude( );
    }
    return false;
}

bool
DataMeneger::get_cloude( std::vector< common::Point >& cloude )
{
    if ( mImpl )
    {
        cloude = mImpl->getCloude( );
    }
    return !cloude.empty( );
}
