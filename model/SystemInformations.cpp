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



#include "SystemInformations.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

SystemInformations::SystemInformations()
{
    m_Offset = 0;
    m_OffsetIsSet = false;
    m_Limit = 0;
    m_LimitIsSet = false;
    m_Count = 0;
    m_CountIsSet = false;
    m_HistoryIsSet = false;
}

SystemInformations::~SystemInformations()
{
}

void SystemInformations::validate()
{
    // TODO: implement validation
}

web::json::value SystemInformations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_OffsetIsSet)
    {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(m_Offset);
    }
    if(m_LimitIsSet)
    {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(m_Limit);
    }
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_Count);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_History )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("history")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void SystemInformations::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("offset")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("offset")];
        if(!fieldValue.is_null())
        {
            setOffset(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("limit")];
        if(!fieldValue.is_null())
        {
            setLimit(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("count")];
        if(!fieldValue.is_null())
        {
            setCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    {
        m_History.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("history")))
        {
        for( auto& item : val[utility::conversions::to_string_t("history")].as_array() )
        {
            if(item.is_null())
            {
                m_History.push_back( std::shared_ptr<SystemInformation>(nullptr) );
            }
            else
            {
                std::shared_ptr<SystemInformation> newItem(new SystemInformation());
                newItem->fromJson(item);
                m_History.push_back( newItem );
            }
        }
        }
    }
}

void SystemInformations::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_OffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("offset"), m_Offset));
    }
    if(m_LimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("limit"), m_Limit));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_Count));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_History )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("history"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void SystemInformations::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("offset")))
    {
        setOffset(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("offset"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("limit")))
    {
        setLimit(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("limit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        setCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("count"))));
    }
    {
        m_History.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("history")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("history"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_History.push_back( std::shared_ptr<SystemInformation>(nullptr) );
            }
            else
            {
                std::shared_ptr<SystemInformation> newItem(new SystemInformation());
                newItem->fromJson(item);
                m_History.push_back( newItem );
            }
        }
        }
    }
}

int32_t SystemInformations::getOffset() const
{
    return m_Offset;
}


void SystemInformations::setOffset(int32_t value)
{
    m_Offset = value;
    m_OffsetIsSet = true;
}
bool SystemInformations::offsetIsSet() const
{
    return m_OffsetIsSet;
}

void SystemInformations::unsetOffset()
{
    m_OffsetIsSet = false;
}

int32_t SystemInformations::getLimit() const
{
    return m_Limit;
}


void SystemInformations::setLimit(int32_t value)
{
    m_Limit = value;
    m_LimitIsSet = true;
}
bool SystemInformations::limitIsSet() const
{
    return m_LimitIsSet;
}

void SystemInformations::unsetLimit()
{
    m_LimitIsSet = false;
}

int32_t SystemInformations::getCount() const
{
    return m_Count;
}


void SystemInformations::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool SystemInformations::countIsSet() const
{
    return m_CountIsSet;
}

void SystemInformations::unsetCount()
{
    m_CountIsSet = false;
}

std::vector<std::shared_ptr<SystemInformation>>& SystemInformations::getHistory()
{
    return m_History;
}

void SystemInformations::setHistory(std::vector<std::shared_ptr<SystemInformation>> value)
{
    m_History = value;
    m_HistoryIsSet = true;
}
bool SystemInformations::historyIsSet() const
{
    return m_HistoryIsSet;
}

void SystemInformations::unsetHistory()
{
    m_HistoryIsSet = false;
}

}
}
}
}
}
}

