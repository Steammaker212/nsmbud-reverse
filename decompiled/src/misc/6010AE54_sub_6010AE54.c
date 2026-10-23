/* sub_6010AE54
 * address: 0x6010AE54   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010AE54(int a1)
{
  float v2; // s0
  float v3; // s2
  int result; // r0

  BossBase__vfDC((BossBase *)a1);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(dword_60CC6484, 116);
  if ( v2 > (float)((float)(v3 + FIELD_F32(a1, 7488)) + -1.0)
    || (result = a1 + 7492, v2 < (float)((float)(v3 + FIELD_F32(a1, 7492)) + 1.0)) )
  {
    result = FIELD_U8(a1, 7176);
    if ( (result & 1) != 0 )
      return sub_6010AEDC(a1);
  }
  return result;
}
