/* sub_602166DC
 * address: 0x602166DC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602166DC(float *a1)
{
  int v2; // r5
  int v3; // r0
  float *v4; // r2
  int v5; // r1
  float32x2_t v6; // d0
  float32x2_t v7; // d2
  signed int result; // r0
  float32x2_t v9; // d0
  float32x2_t v10; // d2
  int v11; // [sp+4h] [bp-1Ch]

  v2 = dword_60C8996C;
  v11 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    v3 = sub_601916F4(v2);
    if ( v11 != 143 )
    {
      if ( v11 != 142 )
        goto LABEL_13;
      if ( v3 )
      {
        CS_W8a_DarkCloud_ref_2((int)a1, 2, 1.0);
        goto LABEL_13;
      }
      *((_DWORD *)a1 + 71) = 240;
      a1[69] = a1[68];
      CS_W8a_DarkCloud_ref_2((int)a1, 1, 1.0);
      sub_601A177C((_DWORD *)dword_60C89E00);
      a1[72] = 0.0;
      v4 = a1 + 20;
      v5 = 104;
      goto LABEL_10;
    }
    if ( v3 == 1 )
    {
      *((_DWORD *)a1 + 71) = 180;
      a1[72] = 0.5;
    }
    else
    {
      if ( !v3 )
      {
        CS_W8a_DarkCloud_ref_2((int)a1, 3, 1.0);
        sub_601A177C((_DWORD *)dword_60C89E00);
        v4 = a1 + 20;
        v5 = 105;
LABEL_10:
        sub_601E4C88((_DWORD *)dword_60C8B13C, v5, v4);
        goto LABEL_13;
      }
      a1[69] = a1[67];
    }
  }
LABEL_13:
  if ( v11 == 143 )
  {
    if ( sub_601916F4(v2) && sub_601916F4(v2) == 1 )
    {
      v10.n64_u32[0] = 1.0;
      v9.n64_f32[0] = a1[72] + 0.0027778;
      *((_DWORD *)a1 + 72) = vmin_f32(v9, v10).n64_u32[0];
      sub_60427048(dword_60C9BBD4);
      result = *((_DWORD *)a1 + 71);
      if ( result >= 1 )
        *((_DWORD *)a1 + 71) = --result;
      if ( result )
        return result;
      FIELD_U8(dword_60C89E00, 160) = 0;
    }
    return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( v11 != 142 || sub_601916F4(v2) )
    return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
  v7.n64_u32[0] = 0.5;
  v6.n64_f32[0] = a1[72] + 0.0020833;
  *((_DWORD *)a1 + 72) = vmin_f32(v6, v7).n64_u32[0];
  sub_60427048(dword_60C9BBD4);
  result = *((_DWORD *)a1 + 71);
  if ( result >= 1 )
    *((_DWORD *)a1 + 71) = --result;
  if ( !result )
    return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
  return result;
}
