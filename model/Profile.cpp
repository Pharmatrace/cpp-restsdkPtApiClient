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



#include "Profile.h"

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

Profile::Profile()
{
    m_First_name = utility::conversions::to_string_t("");
    m_First_nameIsSet = false;
    m_Last_name = utility::conversions::to_string_t("");
    m_Last_nameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Twitter_name = utility::conversions::to_string_t("");
    m_Twitter_nameIsSet = false;
    m_Linkedin_name = utility::conversions::to_string_t("");
    m_Linkedin_nameIsSet = false;
    m_Facebook_name = utility::conversions::to_string_t("");
    m_Facebook_nameIsSet = false;
    m_Picture = utility::conversions::to_string_t("");
    m_PictureIsSet = false;
    m_Stakeholder_id = utility::conversions::to_string_t("");
    m_Stakeholder_idIsSet = false;
    m_Active = false;
    m_ActiveIsSet = false;
}

Profile::~Profile()
{
}

void Profile::validate()
{
    // TODO: implement validation
}

web::json::value Profile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_First_nameIsSet)
    {
        val[utility::conversions::to_string_t("first_name")] = ModelBase::toJson(m_First_name);
    }
    if(m_Last_nameIsSet)
    {
        val[utility::conversions::to_string_t("last_name")] = ModelBase::toJson(m_Last_name);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_Twitter_nameIsSet)
    {
        val[utility::conversions::to_string_t("twitter_name")] = ModelBase::toJson(m_Twitter_name);
    }
    if(m_Linkedin_nameIsSet)
    {
        val[utility::conversions::to_string_t("linkedin_name")] = ModelBase::toJson(m_Linkedin_name);
    }
    if(m_Facebook_nameIsSet)
    {
        val[utility::conversions::to_string_t("facebook_name")] = ModelBase::toJson(m_Facebook_name);
    }
    if(m_PictureIsSet)
    {
        val[utility::conversions::to_string_t("picture")] = ModelBase::toJson(m_Picture);
    }
    if(m_Stakeholder_idIsSet)
    {
        val[utility::conversions::to_string_t("stakeholder_id")] = ModelBase::toJson(m_Stakeholder_id);
    }
    if(m_ActiveIsSet)
    {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(m_Active);
    }

    return val;
}

void Profile::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("first_name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("first_name")];
        if(!fieldValue.is_null())
        {
            setFirstName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("last_name")];
        if(!fieldValue.is_null())
        {
            setLastName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("email")];
        if(!fieldValue.is_null())
        {
            setEmail(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("twitter_name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("twitter_name")];
        if(!fieldValue.is_null())
        {
            setTwitterName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("linkedin_name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("linkedin_name")];
        if(!fieldValue.is_null())
        {
            setLinkedinName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("facebook_name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("facebook_name")];
        if(!fieldValue.is_null())
        {
            setFacebookName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picture")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("picture")];
        if(!fieldValue.is_null())
        {
            setPicture(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stakeholder_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stakeholder_id")];
        if(!fieldValue.is_null())
        {
            setStakeholderId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("active")];
        if(!fieldValue.is_null())
        {
            setActive(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void Profile::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_First_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("first_name"), m_First_name));
    }
    if(m_Last_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("last_name"), m_Last_name));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
    }
    if(m_Twitter_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("twitter_name"), m_Twitter_name));
    }
    if(m_Linkedin_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("linkedin_name"), m_Linkedin_name));
    }
    if(m_Facebook_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("facebook_name"), m_Facebook_name));
    }
    if(m_PictureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("picture"), m_Picture));
    }
    if(m_Stakeholder_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stakeholder_id"), m_Stakeholder_id));
    }
    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("active"), m_Active));
    }
}

void Profile::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("first_name")))
    {
        setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("first_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("last_name")))
    {
        setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("last_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("twitter_name")))
    {
        setTwitterName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("twitter_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("linkedin_name")))
    {
        setLinkedinName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("linkedin_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("facebook_name")))
    {
        setFacebookName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("facebook_name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("picture")))
    {
        setPicture(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("picture"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stakeholder_id")))
    {
        setStakeholderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stakeholder_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("active"))));
    }
}

utility::string_t Profile::getFirstName() const
{
    return m_First_name;
}


void Profile::setFirstName(utility::string_t value)
{
    m_First_name = value;
    m_First_nameIsSet = true;
}
bool Profile::firstNameIsSet() const
{
    return m_First_nameIsSet;
}

void Profile::unsetFirst_name()
{
    m_First_nameIsSet = false;
}

utility::string_t Profile::getLastName() const
{
    return m_Last_name;
}


void Profile::setLastName(utility::string_t value)
{
    m_Last_name = value;
    m_Last_nameIsSet = true;
}
bool Profile::lastNameIsSet() const
{
    return m_Last_nameIsSet;
}

void Profile::unsetLast_name()
{
    m_Last_nameIsSet = false;
}

utility::string_t Profile::getEmail() const
{
    return m_Email;
}


void Profile::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool Profile::emailIsSet() const
{
    return m_EmailIsSet;
}

void Profile::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t Profile::getTwitterName() const
{
    return m_Twitter_name;
}


void Profile::setTwitterName(utility::string_t value)
{
    m_Twitter_name = value;
    m_Twitter_nameIsSet = true;
}
bool Profile::twitterNameIsSet() const
{
    return m_Twitter_nameIsSet;
}

void Profile::unsetTwitter_name()
{
    m_Twitter_nameIsSet = false;
}

utility::string_t Profile::getLinkedinName() const
{
    return m_Linkedin_name;
}


void Profile::setLinkedinName(utility::string_t value)
{
    m_Linkedin_name = value;
    m_Linkedin_nameIsSet = true;
}
bool Profile::linkedinNameIsSet() const
{
    return m_Linkedin_nameIsSet;
}

void Profile::unsetLinkedin_name()
{
    m_Linkedin_nameIsSet = false;
}

utility::string_t Profile::getFacebookName() const
{
    return m_Facebook_name;
}


void Profile::setFacebookName(utility::string_t value)
{
    m_Facebook_name = value;
    m_Facebook_nameIsSet = true;
}
bool Profile::facebookNameIsSet() const
{
    return m_Facebook_nameIsSet;
}

void Profile::unsetFacebook_name()
{
    m_Facebook_nameIsSet = false;
}

utility::string_t Profile::getPicture() const
{
    return m_Picture;
}


void Profile::setPicture(utility::string_t value)
{
    m_Picture = value;
    m_PictureIsSet = true;
}
bool Profile::pictureIsSet() const
{
    return m_PictureIsSet;
}

void Profile::unsetPicture()
{
    m_PictureIsSet = false;
}

utility::string_t Profile::getStakeholderId() const
{
    return m_Stakeholder_id;
}


void Profile::setStakeholderId(utility::string_t value)
{
    m_Stakeholder_id = value;
    m_Stakeholder_idIsSet = true;
}
bool Profile::stakeholderIdIsSet() const
{
    return m_Stakeholder_idIsSet;
}

void Profile::unsetStakeholder_id()
{
    m_Stakeholder_idIsSet = false;
}

bool Profile::isActive() const
{
    return m_Active;
}


void Profile::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool Profile::activeIsSet() const
{
    return m_ActiveIsSet;
}

void Profile::unsetActive()
{
    m_ActiveIsSet = false;
}

}
}
}
}
}
}

