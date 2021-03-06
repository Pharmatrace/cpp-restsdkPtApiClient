/**
 * PharmaTrace Supply Chain Information Network API
 * The PharmaTrace SCIN API provides network members a resource and process oriented access to the blockchain backed market and inventory information. It represents a layer of abstraction above the Hyperledger network to facilitate a business focused development of clients and integration systems without the need to directly connect to Hyperledger nodes.
 *
 * OpenAPI spec version: 0.0.1
 * Contact: api@pharmatrace.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UserApi.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_API_UserApi_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_API_UserApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Profile.h"


#include <boost/optional.hpp>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace api {

using namespace io::pharmatrace::api::scin::public::model;



class  UserApi 
{
public:

    explicit UserApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~UserApi();

    /// <summary>
    /// User Profile
    /// </summary>
    /// <remarks>
    /// The User Profile endpoint returns information about the PharmaTrace user that has authorized with the application.
    /// </remarks>
    pplx::task<std::shared_ptr<Profile>> meGet(
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_API_UserApi_H_ */

