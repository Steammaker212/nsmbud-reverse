/* sub_6076E7D8
 * address: 0x6076E7D8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E7D8(int result)
{
  _DWORD *v1; // r4
  float v2; // s0
  int v3; // r1
  _DWORD v4[5]; // [sp+4h] [bp-14h] BYREF

  v1 = (_DWORD *)(result + 9704);
  if ( !FIELD_U32(result, 9704) && !FIELD_U32(result, 9712) )
  {
    v2 = FIELD_F32(result, 112);
    v3 = FIELD_U32(result, 116);
    v4[0] = FIELD_U32(result, 108);
    *(float *)&v4[1] = v2 + 8.0;
    v4[2] = v3;
    sub_60766B08((_DWORD *)result, (int)v4);
    sub_603F49E8(AreaTask_intance);
    *v1 = 3;
    return 3;
  }
  return result;
}
