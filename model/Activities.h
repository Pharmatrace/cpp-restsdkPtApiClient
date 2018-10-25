/**
 * PharmaTrace Supply Chain Information Network API
 * The PharmaTrace SCIN API provides network members a resource and process oriented access to the blockchain backed market and inventory information. It represents a layer of abstraction above the Hyperledger network to facilitate a business focused development of clients and integration systems without the need to directly connect to Hyperledger nodes.
 *
 * OpenAPI spec version: 0.0.1
 * Contact: api@pharmatrace.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Activities.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Activities_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Activities_H_


#include "../ModelBase.h"

#include "Activity.h"
#include <vector>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

/// <summary>
/// 
/// </summary>
class  Activities
    : public ModelBase
{
public:
    Activities();
    virtual ~Activities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Activities members

    /// <summary>
    /// Position in pagination.
    /// </summary>
    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetOffset();
    void setOffset(int32_t value);
    /// <summary>
    /// Number of items to retrieve (100 max).
    /// </summary>
    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetLimit();
    void setLimit(int32_t value);
    /// <summary>
    /// Total number of items available.
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();
    void setCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Activity>>& getHistory();
    bool historyIsSet() const;
    void unsetHistory();
    void setHistory(std::vector<std::shared_ptr<Activity>> value);

protected:
    int32_t m_Offset;
    bool m_OffsetIsSet;
    int32_t m_Limit;
    bool m_LimitIsSet;
    int32_t m_Count;
    bool m_CountIsSet;
    std::vector<std::shared_ptr<Activity>> m_History;
    bool m_HistoryIsSet;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Activities_H_ */
