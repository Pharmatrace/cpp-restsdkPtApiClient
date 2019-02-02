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
 * ActivitysApi.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_API_ActivitysApi_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_API_ActivitysApi_H_


#include "../ApiClient.h"

#include "Activity.h"
#include "Error.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace api {

using namespace io::pharmatrace::api::scin::public::model;



class  ActivitysApi 
{
public:

    explicit ActivitysApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~ActivitysApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new activity
    /// </remarks>
    /// <param name="activity">Activity to create</param>
    pplx::task<std::shared_ptr<Activity>> addActivity(
        std::shared_ptr<Activity> activity
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// deletes a single activity based on the ID supplied
    /// </remarks>
    /// <param name="id">ID of activity to delete</param>
    pplx::task<void> deleteActivity(
        int64_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all activitys from the system that the user has access to Nam sed condimentum est. Maecenas tempor sagittis sapien, nec rhoncus sem sagittis sit amet. Aenean at gravida augue, ac iaculis sem. Curabitur odio lorem, ornare eget elementum nec, cursus id lectus. Duis mi turpis, pulvinar ac eros ac, tincidunt varius justo. In hac habitasse platea dictumst. Integer at adipiscing ante, a sagittis ligula. Aenean pharetra tempor ante molestie imperdiet. Vivamus id aliquam diam. Cras quis velit non tortor eleifend sagittis. Praesent at enim pharetra urna volutpat venenatis eget eget mauris. In eleifend fermentum facilisis. Praesent enim enim, gravida ac sodales sed, placerat id erat. Suspendisse lacus dolor, consectetur non augue vel, vehicula interdum libero. Morbi euismod sagittis libero sed lacinia.  Sed tempus felis lobortis leo pulvinar rutrum. Nam mattis velit nisl, eu condimentum ligula luctus nec. Phasellus semper velit eget aliquet faucibus. In a mattis elit. Phasellus vel urna viverra, condimentum lorem id, rhoncus nibh. Ut pellentesque posuere elementum. Sed a varius odio. Morbi rhoncus ligula libero, vel eleifend nunc tristique vitae. Fusce et sem dui. Aenean nec scelerisque tortor. Fusce malesuada accumsan magna vel tempus. Quisque mollis felis eu dolor tristique, sit amet auctor felis gravida. Sed libero lorem, molestie sed nisl in, accumsan tempor nisi. Fusce sollicitudin massa ut lacinia mattis. Sed vel eleifend lorem. Pellentesque vitae felis pretium, pulvinar elit eu, euismod sapien. 
    /// </remarks>
    /// <param name="tags">tags to filter by (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="limit">maximum number of results to return (optional, default to 0)</param>
    pplx::task<std::vector<std::shared_ptr<Activity>>> findActivitys(
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<int32_t> limit
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns a activity based on the ID
    /// </remarks>
    /// <param name="id">ID of activity to fetch</param>
    pplx::task<std::shared_ptr<Activity>> find_activity_by_id(
        int64_t id
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

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_API_ActivitysApi_H_ */

