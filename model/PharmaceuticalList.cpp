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



#include "PharmaceuticalList.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

PharmaceuticalList::PharmaceuticalList()
{
    m_ProductsIsSet = false;
}

PharmaceuticalList::~PharmaceuticalList()
{
}

void PharmaceuticalList::validate()
{
    // TODO: implement validation
}

web::json::value PharmaceuticalList::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Products )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("products")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void PharmaceuticalList::fromJson(const web::json::value& val)
{
    {
        m_Products.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("products")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("products")).as_array() )
        {
            if(item.is_null())
            {
                m_Products.push_back( std::shared_ptr<Pharmaceutical>(nullptr) );
            }
            else
            {
                std::shared_ptr<Pharmaceutical> newItem(new Pharmaceutical());
                newItem->fromJson(item);
                m_Products.push_back( newItem );
            }
        }
        }
    }
}

void PharmaceuticalList::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Products )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("products"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void PharmaceuticalList::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Products.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("products")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("products"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Products.push_back( std::shared_ptr<Pharmaceutical>(nullptr) );
            }
            else
            {
                std::shared_ptr<Pharmaceutical> newItem(new Pharmaceutical());
                newItem->fromJson(item);
                m_Products.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<Pharmaceutical>>& PharmaceuticalList::getProducts()
{
    return m_Products;
}

void PharmaceuticalList::setProducts(const std::vector<std::shared_ptr<Pharmaceutical>>& value)
{
    m_Products = value;
    m_ProductsIsSet = true;
}

bool PharmaceuticalList::productsIsSet() const
{
    return m_ProductsIsSet;
}

void PharmaceuticalList::unsetProducts()
{
    m_ProductsIsSet = false;
}

}
}
}
}
}
}

