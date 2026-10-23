/* sub_6067EAB8
 * address: 0x6067EAB8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6067EAB8(int a1)
{
  return SkeletalAnim_play(
           **(_DWORD **)(FIELD_U32(a1, 328) + 12),
           FIELD_U32(a1, 324),
           (const char **)&dword_60CB7FEC);
}
