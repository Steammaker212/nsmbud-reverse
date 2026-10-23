/* sub_605641B4
 * address: 0x605641B4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605641B4(int a1)
{
  unsigned int result; // r0
  unsigned int *v3; // r6
  double v4; // d0
  float v5; // s16
  float v6; // s2
  int v7; // r5
  float v8; // s0
  float *v9; // r2
  float *v10; // r2
  double v11; // [sp+4h] [bp-2Ch] BYREF
  float v12; // [sp+Ch] [bp-24h]

  FIELD_U32(a1, 6860) = FIELD_S8(a1, 6850);
  v3 = (unsigned int *)(a1 + 6856);
  result = FIELD_U32(a1, 6856);
  if ( result <= 0x18 && ((1 << result) & 0x1883080) != 0 )
  {
    v4 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 368))(a1);
    v5 = *((float *)&v4 + 1);
    v11 = v4;
    v12 = v6;
    if ( FIELD_U32(a1, 7304) )
      FIELD_U32(a1, 6872) = 1;
    v7 = sub_60465D48();
    result = *v3;
    if ( *v3 <= 0x18 )
    {
      if ( ((1 << result) & 0x1803000) != 0 )
      {
        if ( !v7 || result != 24 )
          goto LABEL_9;
        goto LABEL_24;
      }
      if ( result != 7 )
      {
        if ( result != 19 )
          return result;
        if ( sub_6078A168(PlayerMgr_instance) )
        {
          if ( v7 )
            result = 22;
          else
            result = 23;
          goto LABEL_25;
        }
        if ( !v7 )
        {
LABEL_9:
          v8 = FIELD_F32(a1, 7352);
LABEL_10:
          *((float *)&v11 + 1) = v8 + v5;
          return ((int (__fastcall *)(int, double *, _DWORD, int, _DWORD))sub_605B5BDC)(
                   a1,
                   &v11,
                   FIELD_U32(a1, 6852),
                   1,
                   0);
        }
LABEL_24:
        result = 3;
LABEL_25:
        *v3 = result;
        return result;
      }
      if ( sub_60465D70(dword_60C9D3E4, FIELD_U32(a1, 6860)) != 1 )
        goto LABEL_24;
      if ( !v7 || FIELD_U32(a1, 7368) )
      {
        v9 = (float *)(a1 + 7352);
        if ( FIELD_U8(a1, 6846) == 2 )
          v9 = (float *)(a1 + 7356);
        v8 = *v9;
        goto LABEL_10;
      }
      v10 = (float *)(a1 + 7360);
      if ( FIELD_U8(a1, 6846) == 2 )
        v10 = (float *)(a1 + 7364);
      *((float *)&v11 + 1) = *v10 + v5;
      return ((int (__fastcall *)(int, double *, _DWORD, int, _DWORD))sub_605B6238)(
               a1,
               &v11,
               FIELD_U32(a1, 6852),
               1,
               0);
    }
  }
  return result;
}
