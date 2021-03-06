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



#include "Transaction.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

Transaction::Transaction()
{
    m_Timestamp = 0L;
    m_TimestampIsSet = false;
    m_Tx_uid = utility::conversions::to_string_t("");
    m_Tx_uidIsSet = false;
    m_Terms_id = utility::conversions::to_string_t("");
    m_Terms_idIsSet = false;
    m_Transaction_channel = utility::conversions::to_string_t("");
    m_Transaction_channelIsSet = false;
}

Transaction::~Transaction()
{
}

void Transaction::validate()
{
    // TODO: implement validation
}

web::json::value Transaction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_Tx_uidIsSet)
    {
        val[utility::conversions::to_string_t("tx_uid")] = ModelBase::toJson(m_Tx_uid);
    }
    if(m_Terms_idIsSet)
    {
        val[utility::conversions::to_string_t("terms_id")] = ModelBase::toJson(m_Terms_id);
    }
    if(m_Transaction_channelIsSet)
    {
        val[utility::conversions::to_string_t("transaction_channel")] = ModelBase::toJson(m_Transaction_channel);
    }

    return val;
}

void Transaction::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tx_uid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tx_uid"));
        if(!fieldValue.is_null())
        {
            setTxUid(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("transaction_channel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_channel"));
        if(!fieldValue.is_null())
        {
            setTransactionChannel(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Transaction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Tx_uidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tx_uid"), m_Tx_uid));
    }
    if(m_Terms_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("terms_id"), m_Terms_id));
    }
    if(m_Transaction_channelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transaction_channel"), m_Transaction_channel));
    }
}

void Transaction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("tx_uid")))
    {
        setTxUid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tx_uid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("terms_id")))
    {
        setTermsId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("terms_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transaction_channel")))
    {
        setTransactionChannel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("transaction_channel"))));
    }
}

int64_t Transaction::getTimestamp() const
{
    return m_Timestamp;
}

void Transaction::setTimestamp(int64_t value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}

bool Transaction::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Transaction::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

utility::string_t Transaction::getTxUid() const
{
    return m_Tx_uid;
}

void Transaction::setTxUid(const utility::string_t& value)
{
    m_Tx_uid = value;
    m_Tx_uidIsSet = true;
}

bool Transaction::txUidIsSet() const
{
    return m_Tx_uidIsSet;
}

void Transaction::unsetTx_uid()
{
    m_Tx_uidIsSet = false;
}

utility::string_t Transaction::getTermsId() const
{
    return m_Terms_id;
}

void Transaction::setTermsId(const utility::string_t& value)
{
    m_Terms_id = value;
    m_Terms_idIsSet = true;
}

bool Transaction::termsIdIsSet() const
{
    return m_Terms_idIsSet;
}

void Transaction::unsetTerms_id()
{
    m_Terms_idIsSet = false;
}

utility::string_t Transaction::getTransactionChannel() const
{
    return m_Transaction_channel;
}

void Transaction::setTransactionChannel(const utility::string_t& value)
{
    m_Transaction_channel = value;
    m_Transaction_channelIsSet = true;
}

bool Transaction::transactionChannelIsSet() const
{
    return m_Transaction_channelIsSet;
}

void Transaction::unsetTransaction_channel()
{
    m_Transaction_channelIsSet = false;
}

}
}
}
}
}
}

