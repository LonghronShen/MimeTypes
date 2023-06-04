#include <string>
#include <unordered_map>
#include <vector>

#include <cmrc/cmrc.hpp>
#include <nlohmann/json.hpp>

#include <mime-types/resource_loader.hpp>

CMRC_DECLARE(mime_types::data::rc);

using namespace nlohmann;

namespace mime_types {

inline resource_loader::resource_map_type
load_from(const std::string &resource_name) {
  const auto &fs = cmrc::mime_types::data::rc::get_filesystem();
  const auto &file = fs.open(resource_name);
  std::string js(file.begin(), file.end());

  const auto &json = json::parse(js);
  return json.get<resource_loader::resource_map_type>();
}

resource_loader::resource_map_type resource_loader::load() const {
  auto standard = load_from("types/standard.json");
  const auto &other = load_from("types/other.json");
  standard.insert(other.begin(), other.end());
  return standard;
}

} // namespace mime_types
