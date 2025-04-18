#pragma once

#include <filesystem>

namespace path
{

    const std::filesystem::path kStressDirectory("/Users/azamat/CLionProjects/cp/stress");

    namespace cpp
    {

        const std::filesystem::path kGen(kStressDirectory / "gen.cpp");
        const std::filesystem::path kFast(kStressDirectory / "fast.cpp");
        const std::filesystem::path kSlow(kStressDirectory / "slow.cpp");

    } // namespace exe

} // namespace paths