/* sub_6097CADC
 * address: 0x6097CADC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097CADC(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1

  result = sub_6085852C(a1, a2);
  *(_DWORD *)result = &off_60C5F4B0;
  FIELD_U32(result, 172) = FIELD_U32(a2, 172);
  FIELD_U8(result, 176) = FIELD_U8(a2, 176);
  FIELD_U8(result, 177) = 1;
  FIELD_U8(result, 178) = FIELD_U8(a2, 178);
  v6 = FIELD_U32(a3, 72);
  if ( v6 )
    FIELD_U8(v6, 130) |= 0x20u;
  return result;
}
