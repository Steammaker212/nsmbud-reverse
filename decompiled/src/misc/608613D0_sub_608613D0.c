/* sub_608613D0
 * address: 0x608613D0   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608613D0(float32x4_t *a1, _DWORD *a2, int a3, int a4, float32x2_t a5)
{
  unsigned __int8 v8; // r0
  bool v9; // zf
  int result; // r0
  int v11; // r6
  char v12; // lr
  unsigned int v13; // r1
  int v14; // r1
  int v15; // r2
  int v16; // r6
  int (__fastcall *v17)(_DWORD *, float32x4_t *, _DWORD); // r3

  sub_60858D50(a1, (int)a2, a3, a4, a5);
  (*(void (__fastcall **)(float32x4_t *, _DWORD *))(FIELD_U32(a1, 0x0)[0] + 88))(a1, a2);
  v8 = a1[4].n128_u8[0];
  v9 = (v8 & 1) == 0;
  if ( (v8 & 1) != 0 )
    v9 = a1[4].n128_u8[2] == 0;
  if ( v9 )
  {
    if ( FIELD_U8(a3, 23) )
    {
      result = v8 & 0x7F;
      a1[4].n128_u8[0] = result;
    }
    else
    {
      result = a1[4].n128_u8[4] & 0xEF;
      a1[4].n128_u8[4] = result;
    }
  }
  else
  {
    sub_60869A60(a1[13].n128_u32[3], a2);
    sub_608672C4(a1[13].n128_u32[3], a2);
    if ( a1[13].n128_i8[5] >= 1 )
    {
      v11 = 0;
      do
      {
        sub_60869A60(*(_DWORD *)(a1[13].n128_u32[2] + 8 * v11 + 4), a2);
        sub_608672C4(*(_DWORD *)(a1[13].n128_u32[2] + 8 * v11++ + 4), a2);
      }
      while ( v11 < a1[13].n128_i8[5] );
    }
    if ( sub_60867E38(a1[13].n128_u32[3], a2) && sub_60868D58(a1[13].n128_u32[3], a2) )
    {
      result = a1[13].n128_u8[4];
      if ( result == 2 )
      {
        result = sub_60862020(a1, a2);
      }
      else if ( result == 1 )
      {
        result = sub_60861BA0(a1, a2);
      }
      else if ( !a1[13].n128_u8[4] )
      {
        result = sub_608615C8(a1, a2);
      }
      v17 = (int (__fastcall *)(_DWORD *, float32x4_t *, _DWORD))a2[50];
      if ( v17 )
        return v17(a2, a1, a2[51]);
    }
    else
    {
      result = a2[48];
      if ( (*(_DWORD *)result & 2) != 0 && a1[13].n128_u8[5] == 1 )
      {
        v13 = a1[13].n128_i8[4];
        if ( v13 <= 2 )
        {
          v14 = dword_60B1515C[v13];
          v15 = (*(_DWORD *)(a2[46] + 52) + 559) & -*(_DWORD *)(a2[46] + 52);
          v16 = 0;
          if ( (*(_DWORD *)result & 1) == 0 )
            goto LABEL_24;
LABEL_25:
          result = FIELD_U32(result, 36);
          while ( result | (((result | (1619400044 << v12)) + v15) << v12) )
            ;
          while ( ++v16 != v14 )
          {
            result = a2[48];
            if ( (*(_DWORD *)result & 1) != 0 )
              goto LABEL_25;
LABEL_24:
            FIELD_U32(result, 36) += v15;
          }
        }
      }
    }
  }
  return result;
}
