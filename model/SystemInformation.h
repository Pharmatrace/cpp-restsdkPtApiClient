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
 * SystemInformation.h
 *
 * Global system message from PT node operators / Newsfeed
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_SystemInformation_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_SystemInformation_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

/// <summary>
/// Global system message from PT node operators / Newsfeed
/// </summary>
class  SystemInformation
    : public ModelBase
{
public:
    SystemInformation();
    virtual ~SystemInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SystemInformation members

    /// <summary>
    /// Unique identifier for the system information.
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();
    void setUuid(utility::string_t value);
    /// <summary>
    /// Iso Language code, e.g. en_us.
    /// </summary>
    utility::string_t getLanguage() const;
    bool languageIsSet() const;
    void unsetLanguage();
    void setLanguage(utility::string_t value);
    /// <summary>
    /// Message header.
    /// </summary>
    utility::string_t getHeader() const;
    bool headerIsSet() const;
    void unsetHeader();
    void setHeader(utility::string_t value);
    /// <summary>
    /// message body.
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);

protected:
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Language;
    bool m_LanguageIsSet;
    utility::string_t m_Header;
    bool m_HeaderIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_SystemInformation_H_ */
