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



#include "Pharmaceutical.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

Pharmaceutical::Pharmaceutical()
{
    m_Pharmaceutical_id = utility::conversions::to_string_t("");
    m_Pharmaceutical_idIsSet = false;
    m_Gtin = utility::conversions::to_string_t("");
    m_GtinIsSet = false;
    m_Trade_name = utility::conversions::to_string_t("");
    m_Trade_nameIsSet = false;
    m_Ean_code = utility::conversions::to_string_t("");
    m_Ean_codeIsSet = false;
    m_Manufacturer_id = utility::conversions::to_string_t("");
    m_Manufacturer_idIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
}

Pharmaceutical::~Pharmaceutical()
{
}

void Pharmaceutical::validate()
{
    // TODO: implement validation
}

web::json::value Pharmaceutical::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Pharmaceutical_idIsSet)
    {
        val[utility::conversions::to_string_t("pharmaceutical_id")] = ModelBase::toJson(m_Pharmaceutical_id);
    }
    if(m_GtinIsSet)
    {
        val[utility::conversions::to_string_t("gtin")] = ModelBase::toJson(m_Gtin);
    }
    if(m_Trade_nameIsSet)
    {
        val[utility::conversions::to_string_t("trade_name")] = ModelBase::toJson(m_Trade_name);
    }
    if(m_Ean_codeIsSet)
    {
        val[utility::conversions::to_string_t("ean_code")] = ModelBase::toJson(m_Ean_code);
    }
    if(m_Manufacturer_idIsSet)
    {
        val[utility::conversions::to_string_t("manufacturer_id")] = ModelBase::toJson(m_Manufacturer_id);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }

    return val;
}

void Pharmaceutical::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("pharmaceutical_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pharmaceutical_id"));
        if(!fieldValue.is_null())
        {
            setPharmaceuticalId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gtin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gtin"));
        if(!fieldValue.is_null())
        {
            setGtin(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trade_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trade_name"));
        if(!fieldValue.is_null())
        {
            setTradeName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ean_code")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ean_code"));
        if(!fieldValue.is_null())
        {
            setEanCode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacturer_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacturer_id"));
        if(!fieldValue.is_null())
        {
            setManufacturerId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            setImage(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Pharmaceutical::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Pharmaceutical_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pharmaceutical_id"), m_Pharmaceutical_id));
    }
    if(m_GtinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("gtin"), m_Gtin));
    }
    if(m_Trade_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trade_name"), m_Trade_name));
    }
    if(m_Ean_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ean_code"), m_Ean_code));
    }
    if(m_Manufacturer_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manufacturer_id"), m_Manufacturer_id));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
}

void Pharmaceutical::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pharmaceutical_id")))
    {
        setPharmaceuticalId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pharmaceutical_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("gtin")))
    {
        setGtin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("gtin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trade_name")))
    {
        setTradeName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("trade_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ean_code")))
    {
        setEanCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ean_code"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manufacturer_id")))
    {
        setManufacturerId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("manufacturer_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        setImage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("image"))));
    }
}

utility::string_t Pharmaceutical::getPharmaceuticalId() const
{
    return m_Pharmaceutical_id;
}

void Pharmaceutical::setPharmaceuticalId(const utility::string_t& value)
{
    m_Pharmaceutical_id = value;
    m_Pharmaceutical_idIsSet = true;
}

bool Pharmaceutical::pharmaceuticalIdIsSet() const
{
    return m_Pharmaceutical_idIsSet;
}

void Pharmaceutical::unsetPharmaceutical_id()
{
    m_Pharmaceutical_idIsSet = false;
}

utility::string_t Pharmaceutical::getGtin() const
{
    return m_Gtin;
}

void Pharmaceutical::setGtin(const utility::string_t& value)
{
    m_Gtin = value;
    m_GtinIsSet = true;
}

bool Pharmaceutical::gtinIsSet() const
{
    return m_GtinIsSet;
}

void Pharmaceutical::unsetGtin()
{
    m_GtinIsSet = false;
}

utility::string_t Pharmaceutical::getTradeName() const
{
    return m_Trade_name;
}

void Pharmaceutical::setTradeName(const utility::string_t& value)
{
    m_Trade_name = value;
    m_Trade_nameIsSet = true;
}

bool Pharmaceutical::tradeNameIsSet() const
{
    return m_Trade_nameIsSet;
}

void Pharmaceutical::unsetTrade_name()
{
    m_Trade_nameIsSet = false;
}

utility::string_t Pharmaceutical::getEanCode() const
{
    return m_Ean_code;
}

void Pharmaceutical::setEanCode(const utility::string_t& value)
{
    m_Ean_code = value;
    m_Ean_codeIsSet = true;
}

bool Pharmaceutical::eanCodeIsSet() const
{
    return m_Ean_codeIsSet;
}

void Pharmaceutical::unsetEan_code()
{
    m_Ean_codeIsSet = false;
}

utility::string_t Pharmaceutical::getManufacturerId() const
{
    return m_Manufacturer_id;
}

void Pharmaceutical::setManufacturerId(const utility::string_t& value)
{
    m_Manufacturer_id = value;
    m_Manufacturer_idIsSet = true;
}

bool Pharmaceutical::manufacturerIdIsSet() const
{
    return m_Manufacturer_idIsSet;
}

void Pharmaceutical::unsetManufacturer_id()
{
    m_Manufacturer_idIsSet = false;
}

utility::string_t Pharmaceutical::getImage() const
{
    return m_Image;
}

void Pharmaceutical::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Pharmaceutical::imageIsSet() const
{
    return m_ImageIsSet;
}

void Pharmaceutical::unsetImage()
{
    m_ImageIsSet = false;
}

}
}
}
}
}
}

