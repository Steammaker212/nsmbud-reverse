/* SE_BOSS_ref_2
 * address: 0x600D8E38   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ref_2(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  float v5; // s0

  v1 = *(_DWORD **)(result + 7096);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  v5 = *(float *)(*(_DWORD *)v2 + 20);
  if ( v5 == 47.0 || v5 == 8.0 )
    return sub_60813430(result + 6332, "SE_BOSS_LARRY_RAMP_JUMP", 0);
  if ( v5 == 60.0 || v5 == 21.0 )
    return sub_60813430(result + 6332, "SE_BOSS_CMN_SMART_LAND", 0);
  return result;
}
