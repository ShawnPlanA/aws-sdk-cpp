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

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HttpRoute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the specification of a route.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/RouteSpec">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API RouteSpec
  {
  public:
    RouteSpec();
    RouteSpec(Aws::Utils::Json::JsonView jsonValue);
    RouteSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP routing information for the route.</p>
     */
    inline const HttpRoute& GetHttpRoute() const{ return m_httpRoute; }

    /**
     * <p>The HTTP routing information for the route.</p>
     */
    inline void SetHttpRoute(const HttpRoute& value) { m_httpRouteHasBeenSet = true; m_httpRoute = value; }

    /**
     * <p>The HTTP routing information for the route.</p>
     */
    inline void SetHttpRoute(HttpRoute&& value) { m_httpRouteHasBeenSet = true; m_httpRoute = std::move(value); }

    /**
     * <p>The HTTP routing information for the route.</p>
     */
    inline RouteSpec& WithHttpRoute(const HttpRoute& value) { SetHttpRoute(value); return *this;}

    /**
     * <p>The HTTP routing information for the route.</p>
     */
    inline RouteSpec& WithHttpRoute(HttpRoute&& value) { SetHttpRoute(std::move(value)); return *this;}

  private:

    HttpRoute m_httpRoute;
    bool m_httpRouteHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
