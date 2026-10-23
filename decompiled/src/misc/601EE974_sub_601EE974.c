/* sub_601EE974
 * address: 0x601EE974   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EE974(int a1)
{
  int result; // r0
  signed int v3; // r1

  EffectData_init((EffectData *)(a1 + 432));
  sub_601ECD14(a1, 0);
  result = 20;
  FIELD_U32(a1, 376) = 20;
  v3 = FIELD_U32(a1, 360);
  if ( v3 >= 0 )
  {
    sub_601E4F60(dword_60C8B13C, v3);
    FIELD_U32(a1, 360) = -1;
    return -1;
  }
  return result;
}
