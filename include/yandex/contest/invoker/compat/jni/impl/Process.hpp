#pragma once

#include <yandex/contest/invoker/compat/jni/LocalRef.hpp>

#include <yandex/contest/invoker/compat/ProcessGroupContext.hpp>

namespace yandex{namespace contest{namespace invoker{namespace compat{namespace jni{
    namespace impl{namespace process
{
    LocalRef<jobject> create(const ProcessHandle &process);
}}}}}}}
