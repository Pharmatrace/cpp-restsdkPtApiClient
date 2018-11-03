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



#include "Location.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

Location::Location()
{
    m_Timestamp = 0L;
    m_TimestampIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_Location_type = utility::conversions::to_string_t("");
    m_Location_typeIsSet = false;
}

Location::~Location()
{
}

void Location::validate()
{
    // TODO: implement validation
}

web::json::value Location::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(m_Uuid);
    }
    if(m_LongitudeIsSet)
    {
        val[utility::conversions::to_string_t("longitude")] = ModelBase::toJson(m_Longitude);
    }
    if(m_LatitudeIsSet)
    {
        val[utility::conversions::to_string_t("latitude")] = ModelBase::toJson(m_Latitude);
    }
    if(m_Location_typeIsSet)
    {
        val[utility::conversions::to_string_t("location_type")] = ModelBase::toJson(m_Location_type);
    }

    return val;
}

void Location::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            setUuid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("longitude")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("longitude"));
        if(!fieldValue.is_null())
        {
            setLongitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latitude")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latitude"));
        if(!fieldValue.is_null())
        {
            setLatitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location_type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_type"));
        if(!fieldValue.is_null())
        {
            setLocationType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Location::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    }
    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uuid"), m_Uuid));
    }
    if(m_LongitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("longitude"), m_Longitude));
    }
    if(m_LatitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("latitude"), m_Latitude));
    }
    if(m_Location_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("location_type"), m_Location_type));
    }
}

void Location::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uuid")))
    {
        setUuid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("uuid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("longitude")))
    {
        setLongitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("longitude"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("latitude")))
    {
        setLatitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("latitude"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("location_type")))
    {
        setLocationType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("location_type"))));
    }
}

int64_t Location::getTimestamp() const
{
    return m_Timestamp;
}

void Location::setTimestamp(int64_t value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}

bool Location::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Location::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

utility::string_t Location::getUuid() const
{
    return m_Uuid;
}

void Location::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Location::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Location::unsetUuid()
{
    m_UuidIsSet = false;
}

double Location::getLongitude() const
{
    return m_Longitude;
}

void Location::setLongitude(double value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}

bool Location::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}

void Location::unsetLongitude()
{
    m_LongitudeIsSet = false;
}

double Location::getLatitude() const
{
    return m_Latitude;
}

void Location::setLatitude(double value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}

bool Location::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}

void Location::unsetLatitude()
{
    m_LatitudeIsSet = false;
}

utility::string_t Location::getLocationType() const
{
    return m_Location_type;
}

void Location::setLocationType(const utility::string_t& value)
{
    m_Location_type = value;
    m_Location_typeIsSet = true;
}

bool Location::locationTypeIsSet() const
{
    return m_Location_typeIsSet;
}

void Location::unsetLocation_type()
{
    m_Location_typeIsSet = false;
}

}
}
}
}
}
}

