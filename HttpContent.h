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
 * HttpContent.h
 *
 * This class represents a single item of a multipart-formdata request.
 */

#ifndef IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_HttpContent_H_
#define IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_HttpContent_H_



#include <memory>

#include <cpprest/details/basic_types.h>

namespace io {
namespace pharmatrace {
namespace api {
namespace scin {
namespace public {
namespace model {

class  HttpContent
{
public:
    HttpContent();
    virtual ~HttpContent();

    virtual utility::string_t getContentDisposition();
    virtual void setContentDisposition( const utility::string_t& value );

    virtual utility::string_t getName();
    virtual void setName( const utility::string_t& value );

    virtual utility::string_t getFileName();
    virtual void setFileName( const utility::string_t& value );

    virtual utility::string_t getContentType();
    virtual void setContentType( const utility::string_t& value );

    virtual std::shared_ptr<std::istream> getData();
    virtual void setData( std::shared_ptr<std::istream> value );

    virtual void writeTo( std::ostream& stream );

protected:
    // NOTE: no utility::string_t here because those strings can only contain ascii
    utility::string_t m_ContentDisposition;
    utility::string_t m_Name;
    utility::string_t m_FileName;
    utility::string_t m_ContentType;
    std::shared_ptr<std::istream> m_Data;
};

}
}
}
}
}
}

#endif /* IO_PHARMATRACE_API_SCIN_PUBLIC_MODEL_HttpContent_H_ */
