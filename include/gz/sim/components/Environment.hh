/*
 * Copyright (C) 2022 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GZ_SIM_ENVIRONMENT_HH_
#define GZ_SIM_ENVIRONMENT_HH_

#include <memory>
#include <string>

#include <gz/sensors/EnvironmentalData.hh>
#include <gz/sim/components/Factory.hh>
#include <gz/sim/components/Component.hh>

namespace gz
{
namespace sim
{
// Inline bracket to help doxygen filtering.
inline namespace GZ_SIM_VERSION_NAMESPACE {
namespace components
{
  using EnvironmentalData = gz::sensors::EnvironmentalData;
  
  /// \brief A component type that contains a environment data.
  /// Ownership is shared to avoid data copies unless necessary.
  using Environment =
      Component<std::shared_ptr<EnvironmentalData>, class EnvironmentalDataTag>;

  GZ_SIM_REGISTER_COMPONENT(
      "gz_sim_components.Environment", Environment)
}
}
}
}

#endif
