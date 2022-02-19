#include <slug.hpp>

namespace slug {

#ifdef SLUG_LOG
inline logger g_logger{};
#endif

#ifdef SLUG_GLOBAL_WLOG
inline wlogger g_wlogger{};
#endif

#ifdef SLUG_GLOBAL_U16LOG
inline u16logger g_u16logger{};
#endif

#ifdef SLUG_GLOBAL_U32LOG
inline u32logger g_u32logger{};
#endif

}  // namespace slug
