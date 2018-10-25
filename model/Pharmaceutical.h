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
 * Pharmaceutical.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Pharmaceutical_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Pharmaceutical_H_


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
class  Pharmaceutical
    : public ModelBase
{
public:
    Pharmaceutical();
    virtual ~Pharmaceutical();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Pharmaceutical members

    /// <summary>
    /// Either gtin or synthetical for precision medicine.
    /// </summary>
    utility::string_t getPharmaceuticalId() const;
    bool pharmaceuticalIdIsSet() const;
    void unsetPharmaceutical_id();
    void setPharmaceuticalId(utility::string_t value);
    /// <summary>
    /// Global trade item number (GS1)
    /// </summary>
    utility::string_t getGtin() const;
    bool gtinIsSet() const;
    void unsetGtin();
    void setGtin(utility::string_t value);
    /// <summary>
    /// Manufacturers official name of the pharmaceutical product.
    /// </summary>
    utility::string_t getTradeName() const;
    bool tradeNameIsSet() const;
    void unsetTrade_name();
    void setTradeName(utility::string_t value);
    /// <summary>
    /// EAN code.
    /// </summary>
    utility::string_t getEanCode() const;
    bool eanCodeIsSet() const;
    void unsetEan_code();
    void setEanCode(utility::string_t value);
    /// <summary>
    /// Manufaturer id
    /// </summary>
    utility::string_t getManufacturerId() const;
    bool manufacturerIdIsSet() const;
    void unsetManufacturer_id();
    void setManufacturerId(utility::string_t value);
    /// <summary>
    /// Image URL representing the product.
    /// </summary>
    utility::string_t getImage() const;
    bool imageIsSet() const;
    void unsetImage();
    void setImage(utility::string_t value);

protected:
    utility::string_t m_Pharmaceutical_id;
    bool m_Pharmaceutical_idIsSet;
    utility::string_t m_Gtin;
    bool m_GtinIsSet;
    utility::string_t m_Trade_name;
    bool m_Trade_nameIsSet;
    utility::string_t m_Ean_code;
    bool m_Ean_codeIsSet;
    utility::string_t m_Manufacturer_id;
    bool m_Manufacturer_idIsSet;
    utility::string_t m_Image;
    bool m_ImageIsSet;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Pharmaceutical_H_ */
