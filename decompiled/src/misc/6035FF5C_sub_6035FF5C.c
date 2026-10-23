/* sub_6035FF5C
 * address: 0x6035FF5C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035FF5C(int a1)
{
  float v1; // r2
  int v2; // r3
  int result; // r0
  int v4; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_U32(a1, 116);
  v5[0] = FIELD_U32(a1, 108);
  v5[2] = v2;
  *(float *)&v5[1] = v1 + 40.0;
  ((void (__fastcall *)(int *, _DWORD, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v4,
    0,
    v5,
    FIELD_U8(a1, 86));
  result = v4;
  if ( v4 )
    return 1;
  return result;
}
