/* sub_601C1AAC
 * address: 0x601C1AAC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C1AAC(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  float v5; // s16
  int v6; // r5
  int v7; // r0
  int v8; // r0
  __int16 v9; // r1
  int v10; // r5
  _DWORD *v11; // r0

  v3 = 1;
  v4 = FIELD_U32(a1, 1048);
  if ( v4 != 2 )
  {
    if ( v4 != 1 )
    {
      if ( !v4 )
      {
        v5 = FIELD_F32(a1, 332);
        v6 = sub_601CF9C0(dword_60C8AEF0);
        if ( (FIELD_U32(a1, 1468) & 0xFFFFFFFE) != 4 || sub_601D9D10(v6) != 1 )
          goto LABEL_18;
        if ( (FIELD_U8(v6, 1123) & 8) == 0 )
        {
          if ( FIELD_U32(a1, 232) == 1 )
            sub_601C5B4C(a1, 18);
          goto LABEL_18;
        }
        v7 = FIELD_U32(a1, 1044);
        if ( v7 < 1 )
        {
          if ( v7 )
            goto LABEL_18;
          sub_601C5B4C(a1, 18);
          v8 = -1;
        }
        else
        {
          v8 = v7 - 1;
        }
        FIELD_U32(a1, 1044) = v8;
LABEL_18:
        if ( ((int (__fastcall *)(int))loc_601C4CFC)(a1) == 1 )
        {
          sub_60169018((_DWORD *)a1);
          FIELD_U32(a1, 1096) = 6;
          sub_601BA0F8(a1, 9, 0.0, 0.0);
          v9 = FIELD_U16(a1, 440);
          if ( (v9 & 2) != 0 )
          {
            FIELD_U16(a1, 440) = v9 & 0xFFFD;
            v10 = a1 + 1084;
          }
          else
          {
            sub_601C503C(a1);
            v10 = a1 + 1084;
            sub_601C6044(a1, a1 + 1084);
          }
          v11 = (_DWORD *)sub_601E0040(v10);
          FIELD_U32(a1, 984) = *v11;
          FIELD_U32(a1, 988) = v11[1];
          FIELD_U32(a1, 992) = v11[2];
          FIELD_U32(a1, 1020) = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
          FIELD_U32(a1, 1048) = 1;
        }
        if ( v5 < 0.0 && FIELD_F32(a1, 332) >= 0.0 )
          sub_601BA0F8(a1, 35, 0.0, 0.0);
      }
      return 0;
    }
    if ( (FIELD_U32(a1, 264) | 1) == 7 )
    {
      if ( sub_605EB988(**(_DWORD **)(*(_DWORD *)(FIELD_U32(a1, 944) + 12) + 12), a2) != 1 )
        return 0;
    }
    else if ( sub_60793CA8(*(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4)) != 1 )
    {
      return 0;
    }
    sub_601BA0F8(a1, 0, 0.0, 0.0);
    FIELD_U32(a1, 1048) = 2;
  }
  return v3;
}
