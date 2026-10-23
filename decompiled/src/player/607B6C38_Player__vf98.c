/* Player__vf98
 * address: 0x607B6C38   size: 60   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_607B6C38()
{
  return FIELD_U8(dword_60CC6D8C, 17) && !FIELD_U32(PlayerMgr_instance, 208);
}
