/* sub_60661CEC
 * address: 0x60661CEC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60661CEC(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int v5; // r2
  float v6; // s0
  int v7; // r4
  int v8; // r1

  v5 = FIELD_U32(a1, 20) & 0x100;
  if ( !v5 )
  {
    a5.n64_u32[0] = 1.0;
    *(float *)&a2 = FIELD_F32(a1, 7152) + -0.066;
    FIELD_U32(a1, 7152) = vmax_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
    v6 = FIELD_F32(a1, 7156) + -1.066;
    FIELD_F32(a1, 7156) = v6;
    if ( v6 <= 32.0 )
      FIELD_U32(a1, 7156) = 1107296256;
  }
  v7 = a1 + 6104;
  v8 = **(_DWORD **)(FIELD_U32(a1, 6104) + 12);
  if ( (FIELD_U8(v8, 28) & 0x20) != 0 )
  {
    if ( !v5 )
    {
      FIELD_U32(a1, 7152) = 1065353216;
      FIELD_U32(a1, 7156) = 1107296256;
    }
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB6A74);
    v8 = **(_DWORD **)(*(_DWORD *)v7 + 12);
  }
  return Animation_update(v8);
}
