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
 * Stakeholder.h
 *
 * 
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Stakeholder_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Stakeholder_H_


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
class  Stakeholder
    : public ModelBase
{
public:
    Stakeholder();
    virtual ~Stakeholder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Stakeholder members

    /// <summary>
    /// unique official register entry, e.g. Handelsregistereintrag, court number, ...
    /// </summary>
    utility::string_t getTradeId() const;
    bool tradeIdIsSet() const;
    void unsetTrade_id();

    void setTradeId(const utility::string_t& value);

    /// <summary>
    /// type of the official register that has issued the trade id
    /// </summary>
    utility::string_t getTradeIdType() const;
    bool tradeIdTypeIsSet() const;
    void unsetTrade_id_type();

    void setTradeIdType(const utility::string_t& value);

    /// <summary>
    /// display name visible to other network members
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplay_name();

    void setDisplayName(const utility::string_t& value);

    /// <summary>
    /// one of Manufacturer, Distributor, Pharmacy, Regulator, Hospital, MedicalPractice, CareProvider, DisposalFirm, Insurance, Patient, LawEnforcement
    /// </summary>
    utility::string_t getStakeholderRole() const;
    bool stakeholderRoleIsSet() const;
    void unsetStakeholder_role();

    void setStakeholderRole(const utility::string_t& value);

    /// <summary>
    /// id of the main wallet, which the stakeholder uses for PT token transactions with other stakeholders
    /// </summary>
    utility::string_t getWalletId() const;
    bool walletIdIsSet() const;
    void unsetWallet_id();

    void setWalletId(const utility::string_t& value);


protected:
    utility::string_t m_Trade_id;
    bool m_Trade_idIsSet;
    utility::string_t m_Trade_id_type;
    bool m_Trade_id_typeIsSet;
    utility::string_t m_Display_name;
    bool m_Display_nameIsSet;
    utility::string_t m_Stakeholder_role;
    bool m_Stakeholder_roleIsSet;
    utility::string_t m_Wallet_id;
    bool m_Wallet_idIsSet;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_Stakeholder_H_ */
