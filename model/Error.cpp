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



#include "Error.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

Error::Error()
{
    m_Code = 0;
    m_CodeIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_Fields = utility::conversions::to_string_t("");
    m_FieldsIsSet = false;
}

Error::~Error()
{
}

void Error::validate()
{
    // TODO: implement validation
}

web::json::value Error::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(m_Code);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }
    if(m_FieldsIsSet)
    {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(m_Fields);
    }

    return val;
}

void Error::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("code")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            setCode(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            setMessage(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            setFields(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Error::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("code"), m_Code));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    }
    if(m_FieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fields"), m_Fields));
    }
}

void Error::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("code")))
    {
        setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("code"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fields")))
    {
        setFields(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fields"))));
    }
}

int32_t Error::getCode() const
{
    return m_Code;
}

void Error::setCode(int32_t value)
{
    m_Code = value;
    m_CodeIsSet = true;
}

bool Error::codeIsSet() const
{
    return m_CodeIsSet;
}

void Error::unsetCode()
{
    m_CodeIsSet = false;
}

utility::string_t Error::getMessage() const
{
    return m_Message;
}

void Error::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool Error::messageIsSet() const
{
    return m_MessageIsSet;
}

void Error::unsetMessage()
{
    m_MessageIsSet = false;
}

utility::string_t Error::getFields() const
{
    return m_Fields;
}

void Error::setFields(const utility::string_t& value)
{
    m_Fields = value;
    m_FieldsIsSet = true;
}

bool Error::fieldsIsSet() const
{
    return m_FieldsIsSet;
}

void Error::unsetFields()
{
    m_FieldsIsSet = false;
}

}
}
}
}
}
}

