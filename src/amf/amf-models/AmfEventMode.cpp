/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AmfEventMode.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfEventMode::AmfEventMode()
{
    m_MaxReports = 0;
    m_MaxReportsIsSet = false;
    m_Duration = 0;
    m_DurationIsSet = false;
    
}

AmfEventMode::~AmfEventMode()
{
}

void AmfEventMode::validate()
{
    // TODO: implement validation
}

nlohmann::json AmfEventMode::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["trigger"] = ModelBase::toJson(m_Trigger);
    if(m_MaxReportsIsSet)
    {
        val["maxReports"] = m_MaxReports;
    }
    if(m_DurationIsSet)
    {
        val["duration"] = m_Duration;
    }
    

    return val;
}

void AmfEventMode::fromJson(const nlohmann::json& val)
{
    if(val.find("maxReports") != val.end())
    {
        setMaxReports(val.at("maxReports"));
    }
    if(val.find("duration") != val.end())
    {
        setDuration(val.at("duration"));
    }
    
}


AmfEventTrigger AmfEventMode::getTrigger() const
{
    return m_Trigger;
}
void AmfEventMode::setTrigger(AmfEventTrigger const& value)
{
    m_Trigger = value;
    
}
int32_t AmfEventMode::getMaxReports() const
{
    return m_MaxReports;
}
void AmfEventMode::setMaxReports(int32_t const value)
{
    m_MaxReports = value;
    m_MaxReportsIsSet = true;
}
bool AmfEventMode::maxReportsIsSet() const
{
    return m_MaxReportsIsSet;
}
void AmfEventMode::unsetMaxReports()
{
    m_MaxReportsIsSet = false;
}
int32_t AmfEventMode::getDuration() const
{
    return m_Duration;
}
void AmfEventMode::setDuration(int32_t const value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}
bool AmfEventMode::durationIsSet() const
{
    return m_DurationIsSet;
}
void AmfEventMode::unsetDuration()
{
    m_DurationIsSet = false;
}

}
}
}
}
