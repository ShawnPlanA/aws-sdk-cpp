﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLicenseConfigurationResult::GetLicenseConfigurationResult() : 
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCount(0),
    m_licenseCountHardLimit(false),
    m_consumedLicenses(0)
{
}

GetLicenseConfigurationResult::GetLicenseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCount(0),
    m_licenseCountHardLimit(false),
    m_consumedLicenses(0)
{
  *this = result;
}

GetLicenseConfigurationResult& GetLicenseConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConfigurationId"))
  {
    m_licenseConfigurationId = jsonValue.GetString("LicenseConfigurationId");

  }

  if(jsonValue.ValueExists("LicenseConfigurationArn"))
  {
    m_licenseConfigurationArn = jsonValue.GetString("LicenseConfigurationArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LicenseCountingType"))
  {
    m_licenseCountingType = LicenseCountingTypeMapper::GetLicenseCountingTypeForName(jsonValue.GetString("LicenseCountingType"));

  }

  if(jsonValue.ValueExists("LicenseRules"))
  {
    Array<JsonView> licenseRulesJsonList = jsonValue.GetArray("LicenseRules");
    for(unsigned licenseRulesIndex = 0; licenseRulesIndex < licenseRulesJsonList.GetLength(); ++licenseRulesIndex)
    {
      m_licenseRules.push_back(licenseRulesJsonList[licenseRulesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("LicenseCount"))
  {
    m_licenseCount = jsonValue.GetInt64("LicenseCount");

  }

  if(jsonValue.ValueExists("LicenseCountHardLimit"))
  {
    m_licenseCountHardLimit = jsonValue.GetBool("LicenseCountHardLimit");

  }

  if(jsonValue.ValueExists("ConsumedLicenses"))
  {
    m_consumedLicenses = jsonValue.GetInt64("ConsumedLicenses");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

  }

  if(jsonValue.ValueExists("ConsumedLicenseSummaryList"))
  {
    Array<JsonView> consumedLicenseSummaryListJsonList = jsonValue.GetArray("ConsumedLicenseSummaryList");
    for(unsigned consumedLicenseSummaryListIndex = 0; consumedLicenseSummaryListIndex < consumedLicenseSummaryListJsonList.GetLength(); ++consumedLicenseSummaryListIndex)
    {
      m_consumedLicenseSummaryList.push_back(consumedLicenseSummaryListJsonList[consumedLicenseSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ManagedResourceSummaryList"))
  {
    Array<JsonView> managedResourceSummaryListJsonList = jsonValue.GetArray("ManagedResourceSummaryList");
    for(unsigned managedResourceSummaryListIndex = 0; managedResourceSummaryListIndex < managedResourceSummaryListJsonList.GetLength(); ++managedResourceSummaryListIndex)
    {
      m_managedResourceSummaryList.push_back(managedResourceSummaryListJsonList[managedResourceSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
