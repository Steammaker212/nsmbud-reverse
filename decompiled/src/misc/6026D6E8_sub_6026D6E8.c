/* sub_6026D6E8
 * address: 0x6026D6E8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026D6E8(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  float v4; // s24
  float v5; // s18
  float v6; // s22
  float v7; // s20
  float v8; // s16
  float v9; // s0
  float v10; // s2
  float v11; // s0

  v3 = (_DWORD *)(a1 + 9472);
  result = FIELD_U32(a1, 9472);
  if ( !result || (*v3 = result - 1, result == 1) )
  {
    v4 = FIELD_F32(dword_60CC6484, 112);
    v5 = FIELD_F32(dword_60CC6484, 124);
    v6 = FIELD_F32(dword_60CC6484, 120);
    v7 = FIELD_F32(dword_60CC6484, 132);
    v8 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 200))(a1, v8);
    v10 = FIELD_F32(a1, 108);
    if ( (float)(v4 - v8) <= v10 && (float)(v6 + v9) >= v10 )
    {
      v11 = FIELD_F32(a1, 112);
      if ( v7 <= v11 && v5 >= v11 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E820);
  }
  else if ( result == 4 )
  {
    FIELD_U32(a1, 9508) = 1;
    FIELD_U8(a1, 9526) = 0;
    FIELD_U32(a1, 9512) = 0;
    FIELD_U8(a1, 9525) = 0;
    FIELD_U32(a1, 9444) = 1065353216;
    FIELD_U32(a1, 9448) = 1065353216;
    FIELD_U32(a1, 9516) = 0;
    FIELD_U32(a1, 9520) = 0;
    FIELD_U32(a1, 9452) = 1065353216;
    FIELD_U32(a1, 9456) = 1065353216;
    FIELD_U32(a1, 9460) = 1065353216;
    result = 9464;
    FIELD_U32(a1, 9464) = 1065353216;
  }
  return result;
}
