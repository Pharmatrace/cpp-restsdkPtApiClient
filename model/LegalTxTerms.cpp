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



#include "LegalTxTerms.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

LegalTxTerms::LegalTxTerms()
{
    m_Timestamp_valid_from = 0L;
    m_Timestamp_valid_fromIsSet = false;
    m_Timestamp_valid_until = 0L;
    m_Timestamp_valid_untilIsSet = false;
    m_Validity_tolerance = 0L;
    m_Validity_toleranceIsSet = false;
    m_Terms_id = utility::conversions::to_string_t("");
    m_Terms_idIsSet = false;
    m_Terms_version = utility::conversions::to_string_t("");
    m_Terms_versionIsSet = false;
    m_Terms_id_previous_version = utility::conversions::to_string_t("");
    m_Terms_id_previous_versionIsSet = false;
    m_Terms_text = utility::conversions::to_string_t("");
    m_Terms_textIsSet = false;
    m_Language = utility::conversions::to_string_t("");
    m_LanguageIsSet = false;
    m_Legislation = utility::conversions::to_string_t("");
    m_LegislationIsSet = false;
}

LegalTxTerms::~LegalTxTerms()
{
}

void LegalTxTerms::validate()
{
    // TODO: implement validation
}

web::json::value LegalTxTerms::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Timestamp_valid_fromIsSet)
    {
        val[utility::conversions::to_string_t("timestamp_valid_from")] = ModelBase::toJson(m_Timestamp_valid_from);
    }
    if(m_Timestamp_valid_untilIsSet)
    {
        val[utility::conversions::to_string_t("timestamp_valid_until")] = ModelBase::toJson(m_Timestamp_valid_until);
    }
    if(m_Validity_toleranceIsSet)
    {
        val[utility::conversions::to_string_t("validity_tolerance")] = ModelBase::toJson(m_Validity_tolerance);
    }
    if(m_Terms_idIsSet)
    {
        val[utility::conversions::to_string_t("terms_id")] = ModelBase::toJson(m_Terms_id);
    }
    if(m_Terms_versionIsSet)
    {
        val[utility::conversions::to_string_t("terms_version")] = ModelBase::toJson(m_Terms_version);
    }
    if(m_Terms_id_previous_versionIsSet)
    {
        val[utility::conversions::to_string_t("terms_id_previous_version")] = ModelBase::toJson(m_Terms_id_previous_version);
    }
    if(m_Terms_textIsSet)
    {
        val[utility::conversions::to_string_t("terms_text")] = ModelBase::toJson(m_Terms_text);
    }
    if(m_LanguageIsSet)
    {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(m_Language);
    }
    if(m_LegislationIsSet)
    {
        val[utility::conversions::to_string_t("legislation")] = ModelBase::toJson(m_Legislation);
    }

    return val;
}

void LegalTxTerms::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("timestamp_valid_from")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp_valid_from"));
        if(!fieldValue.is_null())
        {
            setTimestampValidFrom(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp_valid_until")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp_valid_until"));
        if(!fieldValue.is_null())
        {
            setTimestampValidUntil(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validity_tolerance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validity_tolerance"));
        if(!fieldValue.is_null())
        {
            setValidityTolerance(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terms_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terms_id"));
        if(!fieldValue.is_null())
        {
            setTermsId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terms_version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terms_version"));
        if(!fieldValue.is_null())
        {
            setTermsVersion(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terms_id_previous_version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terms_id_previous_version"));
        if(!fieldValue.is_null())
        {
            setTermsIdPreviousVersion(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terms_text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terms_text"));
        if(!fieldValue.is_null())
        {
            setTermsText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            setLanguage(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("legislation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("legislation"));
        if(!fieldValue.is_null())
        {
            setLegislation(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void LegalTxTerms::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Timestamp_valid_fromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp_valid_from"), m_Timestamp_valid_from));
    }
    if(m_Timestamp_valid_untilIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp_valid_until"), m_Timestamp_valid_until));
    }
    if(m_Validity_toleranceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("validity_tolerance"), m_Validity_tolerance));
    }
    if(m_Terms_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("terms_id"), m_Terms_id));
    }
    if(m_Terms_versionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("terms_version"), m_Terms_version));
    }
    if(m_Terms_id_previous_versionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("terms_id_previous_version"), m_Terms_id_previous_version));
    }
    if(m_Terms_textIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("terms_text"), m_Terms_text));
    }
    if(m_LanguageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("language"), m_Language));
    }
    if(m_LegislationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("legislation"), m_Legislation));
    }
}

void LegalTxTerms::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("timestamp_valid_from")))
    {
        setTimestampValidFrom(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp_valid_from"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp_valid_until")))
    {
        setTimestampValidUntil(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp_valid_until"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("validity_tolerance")))
    {
        setValidityTolerance(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("validity_tolerance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("terms_id")))
    {
        setTermsId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("terms_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("terms_version")))
    {
        setTermsVersion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("terms_version"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("terms_id_previous_version")))
    {
        setTermsIdPreviousVersion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("terms_id_previous_version"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("terms_text")))
    {
        setTermsText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("terms_text"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("language")))
    {
        setLanguage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("language"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("legislation")))
    {
        setLegislation(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("legislation"))));
    }
}

int64_t LegalTxTerms::getTimestampValidFrom() const
{
    return m_Timestamp_valid_from;
}

void LegalTxTerms::setTimestampValidFrom(int64_t value)
{
    m_Timestamp_valid_from = value;
    m_Timestamp_valid_fromIsSet = true;
}

bool LegalTxTerms::timestampValidFromIsSet() const
{
    return m_Timestamp_valid_fromIsSet;
}

void LegalTxTerms::unsetTimestamp_valid_from()
{
    m_Timestamp_valid_fromIsSet = false;
}

int64_t LegalTxTerms::getTimestampValidUntil() const
{
    return m_Timestamp_valid_until;
}

void LegalTxTerms::setTimestampValidUntil(int64_t value)
{
    m_Timestamp_valid_until = value;
    m_Timestamp_valid_untilIsSet = true;
}

bool LegalTxTerms::timestampValidUntilIsSet() const
{
    return m_Timestamp_valid_untilIsSet;
}

void LegalTxTerms::unsetTimestamp_valid_until()
{
    m_Timestamp_valid_untilIsSet = false;
}

int64_t LegalTxTerms::getValidityTolerance() const
{
    return m_Validity_tolerance;
}

void LegalTxTerms::setValidityTolerance(int64_t value)
{
    m_Validity_tolerance = value;
    m_Validity_toleranceIsSet = true;
}

bool LegalTxTerms::validityToleranceIsSet() const
{
    return m_Validity_toleranceIsSet;
}

void LegalTxTerms::unsetValidity_tolerance()
{
    m_Validity_toleranceIsSet = false;
}

utility::string_t LegalTxTerms::getTermsId() const
{
    return m_Terms_id;
}

void LegalTxTerms::setTermsId(const utility::string_t& value)
{
    m_Terms_id = value;
    m_Terms_idIsSet = true;
}

bool LegalTxTerms::termsIdIsSet() const
{
    return m_Terms_idIsSet;
}

void LegalTxTerms::unsetTerms_id()
{
    m_Terms_idIsSet = false;
}

utility::string_t LegalTxTerms::getTermsVersion() const
{
    return m_Terms_version;
}

void LegalTxTerms::setTermsVersion(const utility::string_t& value)
{
    m_Terms_version = value;
    m_Terms_versionIsSet = true;
}

bool LegalTxTerms::termsVersionIsSet() const
{
    return m_Terms_versionIsSet;
}

void LegalTxTerms::unsetTerms_version()
{
    m_Terms_versionIsSet = false;
}

utility::string_t LegalTxTerms::getTermsIdPreviousVersion() const
{
    return m_Terms_id_previous_version;
}

void LegalTxTerms::setTermsIdPreviousVersion(const utility::string_t& value)
{
    m_Terms_id_previous_version = value;
    m_Terms_id_previous_versionIsSet = true;
}

bool LegalTxTerms::termsIdPreviousVersionIsSet() const
{
    return m_Terms_id_previous_versionIsSet;
}

void LegalTxTerms::unsetTerms_id_previous_version()
{
    m_Terms_id_previous_versionIsSet = false;
}

utility::string_t LegalTxTerms::getTermsText() const
{
    return m_Terms_text;
}

void LegalTxTerms::setTermsText(const utility::string_t& value)
{
    m_Terms_text = value;
    m_Terms_textIsSet = true;
}

bool LegalTxTerms::termsTextIsSet() const
{
    return m_Terms_textIsSet;
}

void LegalTxTerms::unsetTerms_text()
{
    m_Terms_textIsSet = false;
}

utility::string_t LegalTxTerms::getLanguage() const
{
    return m_Language;
}

void LegalTxTerms::setLanguage(const utility::string_t& value)
{
    m_Language = value;
    m_LanguageIsSet = true;
}

bool LegalTxTerms::languageIsSet() const
{
    return m_LanguageIsSet;
}

void LegalTxTerms::unsetLanguage()
{
    m_LanguageIsSet = false;
}

utility::string_t LegalTxTerms::getLegislation() const
{
    return m_Legislation;
}

void LegalTxTerms::setLegislation(const utility::string_t& value)
{
    m_Legislation = value;
    m_LegislationIsSet = true;
}

bool LegalTxTerms::legislationIsSet() const
{
    return m_LegislationIsSet;
}

void LegalTxTerms::unsetLegislation()
{
    m_LegislationIsSet = false;
}

}
}
}
}
}
}

