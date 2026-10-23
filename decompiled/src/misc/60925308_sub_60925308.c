/* sub_60925308
 * address: 0x60925308   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60925308(int a1, int a2, unsigned int a3, float a4, float a5)
{
  unsigned int v5; // r3
  int result; // r0
  int v7; // lr
  _DWORD v8[8]; // [sp+8h] [bp-30h] BYREF
  float v9[4]; // [sp+28h] [bp-10h] BYREF

  v5 = FIELD_U32(a1, 500);
  result = FIELD_U32(a1, 504);
  if ( v5 > a3 )
    result += 184 * a3;
  v7 = FIELD_U32(result, 176);
  if ( v7 )
  {
    v9[0] = a4;
    v9[1] = a5;
    v8[3] = 1065353216;
    memset(v8, 0, 12);
    v8[7] = 1065353216;
    v8[6] = 1065353216;
    v8[5] = 1065353216;
    v8[4] = 1065353216;
    return ((int (__fastcall *)(int, int, int, float *, float, float, _DWORD *))sub_6093BCB8)(
             a2,
             v7,
             2,
             v9,
             FIELD_F32(result, 160),
             FIELD_F32(result, 164),
             v8);
  }
  return result;
}
