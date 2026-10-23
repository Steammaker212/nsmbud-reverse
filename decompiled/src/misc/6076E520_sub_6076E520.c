/* sub_6076E520
 * address: 0x6076E520   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E520(int result)
{
  int v1; // r1
  float v2; // s0
  int v3; // r1
  _DWORD v4[5]; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_U32(result, 1228);
  if ( (v1 & 1) != 0 && !FIELD_U32(result, 9812) )
  {
    FIELD_U32(result, 1228) = v1 & 0xFFFFFFFE;
    v2 = FIELD_F32(result, 112);
    v3 = FIELD_U32(result, 116);
    v4[0] = FIELD_U32(result, 108);
    *(float *)&v4[1] = v2 + 8.0;
    v4[2] = v3;
    sub_60766B08((_DWORD *)result, (int)v4);
    return sub_603F49E8(AreaTask_intance);
  }
  return result;
}
