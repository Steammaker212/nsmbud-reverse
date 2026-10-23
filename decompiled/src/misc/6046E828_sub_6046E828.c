/* sub_6046E828
 * address: 0x6046E828   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046E828(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r2
  int *v5; // r0
  float v6; // r3
  Vec3 v7; // [sp+4h] [bp-14h] BYREF

  v2 = sub_6046E898();
  result = 1;
  if ( v2 == 1 )
  {
    v4 = FIELD_U8(a1, 92);
    v5 = dword_6046E88C;
    v6 = FIELD_F32(a1, 84);
    v7.x = FIELD_F32(a1, 80);
    v7.y = v6;
    if ( v4 == 1 )
      v5 = &dword_6046E88C[1];
    LODWORD(v7.z) = *v5;
    sub_60466B9C(dword_60C9D3E4, &v7, v4);
    return 0;
  }
  return result;
}
