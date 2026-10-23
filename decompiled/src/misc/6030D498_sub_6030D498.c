/* sub_6030D498
 * address: 0x6030D498   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030D498(int a1, unsigned int a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r3
  float v6; // s0
  float v7; // s4
  float v8; // s2
  int v9; // r1
  char v10; // r3
  int v11; // r6
  unsigned int v12; // r1
  int (**v13)(); // r6
  int (*v14)(); // t1
  char *v15; // r2
  int *v16; // r7
  char v17; // r3
  int v18; // r2
  _BYTE *v19; // r8
  int (*v20)(); // r2
  _DWORD *v21; // r0
  int (*v22)(); // r0
  char v23; // r3
  int v24; // r2
  int (*v25)(); // r2
  _DWORD *v26; // r0
  int (*v27)(); // r2
  _DWORD *v28; // r0
  int v29; // [sp+0h] [bp-28h] BYREF
  float v30[9]; // [sp+4h] [bp-24h] BYREF

  v2 = a2;
  if ( a2 >= 8 )
    a2 = 0;
  result = a1 + a2;
  v5 = *(unsigned __int8 *)(a1 + a2 + 7568);
  if ( *(_BYTE *)(a1 + a2 + 7568) )
  {
    result = v5 - 1;
    *(_BYTE *)(a1 + a2 + 7568) = v5 - 1;
    if ( (_BYTE)v5 == 1 )
    {
      result = FIELD_U8(a1, 536);
      if ( !FIELD_U8(a1, 536) )
      {
        v6 = FIELD_F32(a1, 108);
        v7 = FIELD_F32(a1, 500) * 0.5;
        result = dword_60CC6484;
        if ( FIELD_F32(dword_60CC6484, 112) <= (float)(v6 + v7)
          && FIELD_F32(dword_60CC6484, 120) >= (float)(v6 - v7) )
        {
          v8 = (float)((float)((float)v2 * 16.0) + 8.0) + FIELD_F32(a1, 112);
          if ( (float)(FIELD_F32(dword_60CC6484, 132) + -8.0) < v8
            && v8 < (float)(FIELD_F32(dword_60CC6484, 124) + 8.0) )
          {
            if ( (FIELD_U8(a1, 23) & 0x20) == 0
              || (v30[0] = FIELD_F32(a1, 108),
                  v30[1] = v8,
                  v30[2] = 0.0,
                  ((void (__fastcall *)(int *, _DWORD, float *, _DWORD))checkLiquidCollisions)(
                    &v29,
                    0,
                    v30,
                    FIELD_U8(a1, 86)),
                  v9 = v29,
                  result = a1 + 108,
                  FIELD_U32(a1, 6008) = a1 + 108,
                  !v9) )
            {
              result = FIELD_U8(a1, 7607);
              if ( !FIELD_U8(a1, 7607) )
                return ((int (__fastcall *)(int, int))loc_6030D7A4)(a1, v2);
            }
          }
        }
      }
    }
    return result;
  }
  if ( FIELD_U8(EnemyCounterMaybe_instance, 2544) )
    return result;
  if ( !FIELD_U8(result, 7576) )
    return result;
  v10 = FIELD_U8(result, 7576) - 1;
  FIELD_U8(result, 7576) = v10;
  if ( v10 )
    return result;
  v11 = a1 + 8 * a2;
  v14 = *(int (**)())(v11 + 7248);
  v13 = (int (**)())(v11 + 7248);
  v12 = (unsigned int)v14;
  v16 = (int *)(v13 + 1);
  v15 = (char *)v13[1];
  if ( FIELD_U32(a1, 7600) == 1 )
  {
    v17 = (unsigned __int8)v15 & 1 | v12;
    if ( (unsigned int)v13[1] & 1 | v12 )
      v17 = 1;
    v18 = (v15 != 0) & (unsigned __int8)v17;
    if ( (int (*)())v12 != sub_6030D9D0 || v18 == 1 )
    {
      v19 = (_BYTE *)(result + 7592);
      if ( (v12 != 0) | v18 )
      {
        *v19 = -1;
        v20 = *v13;
        v21 = (_DWORD *)(a1 + (*v16 >> 1));
        if ( (*v16 & 1) != 0 )
          v20 = *(int (**)())((char *)v20 + *v21);
        ((void (__fastcall *)(_DWORD *, int))v20)(v21, v2);
      }
      v22 = sub_6030D9D0;
LABEL_37:
      *v13 = v22;
      *v16 = 0;
      *v19 = 0;
      v27 = *v13;
      v28 = (_DWORD *)(a1 + (*v16 >> 1));
      if ( (*v16 & 1) != 0 )
        v27 = *(int (**)())((char *)v27 + *v28);
      ((void (__fastcall *)(_DWORD *, int))v27)(v28, v2);
      result = (unsigned __int8)*v19 + 1;
      *v19 = result;
    }
  }
  else
  {
    v23 = (unsigned __int8)v15 & 1 | v12;
    if ( (unsigned int)v13[1] & 1 | v12 )
      v23 = 1;
    v24 = (v15 != 0) & (unsigned __int8)v23;
    if ( (int (*)())v12 != sub_6030DA0C || v24 == 1 )
    {
      v19 = (_BYTE *)(result + 7592);
      if ( (v12 != 0) | v24 )
      {
        *v19 = -1;
        v25 = *v13;
        v26 = (_DWORD *)(a1 + (*v16 >> 1));
        if ( (*v16 & 1) != 0 )
          v25 = *(int (**)())((char *)v25 + *v26);
        ((void (__fastcall *)(_DWORD *, int))v25)(v26, v2);
      }
      v22 = sub_6030DA0C;
      goto LABEL_37;
    }
  }
  return result;
}
