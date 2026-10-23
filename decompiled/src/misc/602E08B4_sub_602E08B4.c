/* sub_602E08B4
 * address: 0x602E08B4   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E08B4(int a1)
{
  int v2; // r5
  int v3; // r1
  int result; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r1
  float v9; // s6
  float v10; // s4
  float v11; // s10
  float v12; // s2
  float v13; // s0
  float v14; // s16
  float v15; // s0
  int v16; // r0
  char v17; // r1
  float v18[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U32(a1, 15416) = 0;
  sub_602E25E4(a1);
  v2 = a1 + 6300;
  sub_602E6EF0(a1 + 6300);
  if ( FIELD_U8(a1, 15364) && !FIELD_U8(a1, 15377) )
  {
    FIELD_U8(a1, 15377) = 16;
    v3 = -134217728;
    if ( !FIELD_U8(a1, 15378) )
      v3 = 0x8000000;
    FIELD_U32(a1, 15352) = v3;
    FIELD_U8(a1, 15384) = 0;
    j_ibaramushi_ref((_DWORD *)(a1 + 6300), 0, 0);
  }
  result = a1 + 15375;
  if ( FIELD_U8(a1, 15375) )
  {
    *(_BYTE *)result = FIELD_U8(a1, 15375) - 1;
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += 4 * v6;
    result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
    if ( (result & 8) != 0 )
    {
      result = a1 + 15420;
      v7 = FIELD_U32(a1, 15420);
      if ( v7 )
      {
        *(_DWORD *)result = v7 - 1;
      }
      else
      {
        v8 = FIELD_U32(a1, 80);
        v9 = FIELD_F32(a1, 112);
        v10 = FIELD_F32(a1, 6444);
        v11 = flt_60AFEC30[2 * FIELD_U8(a1, 15381) + v8];
        v12 = FIELD_F32(a1, 6492);
        v13 = FIELD_F32(a1, 144) * 64.0;
        v14 = v9 + v11;
        if ( v8 )
        {
          if ( v10 < v12 )
            v15 = v10 - v13;
          else
            v15 = v12 - v13;
        }
        else if ( v10 < v12 )
        {
          v15 = v13 + v12;
        }
        else
        {
          v15 = v10 + v13;
        }
        v18[0] = v15;
        v18[1] = v9 + v11;
        v16 = sub_602E3270(a1, v18);
        if ( (unsigned int)(v16 + 1) < 3 )
        {
          FIELD_F32(a1, 112) = v14;
          FIELD_U8(a1, 15379) = byte_60AFEC58[2 * FIELD_U8(a1, 15381) + FIELD_U32(a1, 80)];
          v17 = 0;
          if ( v16 == -1 )
            v17 = 2;
          if ( v16 == 1 )
            v17 = 1;
          FIELD_U8(a1, 15380) = v17;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92224);
        }
        else
        {
          result = FIELD_U32(a1, 80);
          FIELD_U32(a1, 80) = result == 0;
        }
      }
    }
  }
  return result;
}
