#pragma once

#include "vcpkg_Files.h"
#include "vcpkg_Dependencies.h"

namespace vcpkg::Commands::Export::IFW
{
    struct Options
    {
        Optional<std::string> maybe_repository_url;
        Optional<std::string> maybe_packages_dir_path;
        Optional<std::string> maybe_config_file_path;
    };

    void do_export(const std::vector<Dependencies::ExportPlanAction> &export_plan, const std::string &export_id, const Options &ifw_options, const VcpkgPaths& paths);
}
