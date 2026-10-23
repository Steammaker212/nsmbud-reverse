/* SE_PLY_SPLASH_ref_2_helper
 * address: 0x6076F20C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_PLY_SPLASH_ref_2_helper(int a1, Vec3 *a2)
{
  unsigned int v4; // r6
  int v5; // r0

  v4 = FIELD_S8(a1, 84);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  return sub_60236F74(v4, (EffectData *)(a1 + 11248), v5, a2, 0, 0);
}
