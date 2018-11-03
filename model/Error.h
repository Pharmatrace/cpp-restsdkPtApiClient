/**
 * PharmaTrace Supply Chain Information Network API
 * The PharmaTrace SCIN API provides network members a resource and process oriented access to the blockchain backed market and inventory information. It represents a layer of abstraction above the Hyperledger network to facilitate a business focused development of clients and integration systems without the need to directly connect to Hyperledger nodes.
 *
 * OpenAPI spec version: 0.0.1
 * Contact: api@pharmatrace.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Error.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Error_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Error_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

/// <summary>
/// 
/// </summary>
class  Error
    : public ModelBase
{
public:
    Error();
    virtual ~Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();

    void setCode(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFields() const;
    bool fieldsIsSet() const;
    void unsetFields();

    void setFields(const utility::string_t& value);


protected:
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_Fields;
    bool m_FieldsIsSet;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Error_H_ */
