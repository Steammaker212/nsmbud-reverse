/* sub_60665044
 * address: 0x60665044   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60665044(int a1)
{
  int v1; // r10
  char v2; // r12
  int v4; // r7
  int v5; // r6
  _DWORD *v6; // r11
  __guard *v7; // r5
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r5
  unsigned int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // r9
  int v20; // r0
  int v21; // r8
  int v22; // r1
  int v23; // r0
  int result; // r0
  __guard *v25; // [sp+4h] [bp-64h]
  float *v26; // [sp+8h] [bp-60h]
  int v27; // [sp+20h] [bp-48h]
  int v28; // [sp+24h] [bp-44h]
  int v29; // [sp+28h] [bp-40h]
  _DWORD v30[14]; // [sp+30h] [bp-38h] BYREF

  v4 = 0;
  v5 = 0;
  memset(v30, 0, 16);
  v6 = *(_DWORD **)(a1 + 6960);
  if ( v6 )
  {
    v5 = 0;
    v4 = 0;
    v26 = (float *)(a1 + 7324);
    v7 = &dword_60C7B37C;
    do
    {
      v8 = *v6 == 0;
      if ( *v6 )
      {
        v1 = *(_DWORD *)(*v6 + 2196);
        v8 = v1 == 0;
      }
      if ( !v8 && FIELD_U8(v1, 533) == 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1617318212 << v2) & 1) == 0 && _cxa_guard_acquire(v7) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B378) == 1 )
        {
          if ( ((unsigned int)&dword_60C7B374 & ~(1617318292 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          v9 = (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B370);
          v10 = v9 == 1;
          if ( v9 == 1 )
            v10 = (FIELD_U8(v1, 1213) & 0x10) == 0;
          if ( v10 )
          {
            v25 = v7;
            v11 = 0;
            v12 = FIELD_U8(v1, 84);
            if ( v12 < 4 )
              v11 = (char)v12;
            v30[v11] = 1;
            sub_607B946C(v1, FIELD_F32(a1, 108) + *v26);
            if ( (FIELD_U8(v1, 1212) & 0x40) != 0 )
            {
              v13 = FIELD_U32(v1, 12100);
              v14 = v13;
              if ( v13 < 0 )
              {
                v14 = FIELD_U32(v1, 12100);
                if ( v13 != 0x80000000 )
                  v14 = -v13;
              }
              v15 = v4;
              if ( v4 < 0 )
              {
                v15 = v4;
                if ( v4 != 0x80000000 )
                  v15 = -v4;
              }
              v5 = 2;
              if ( v14 < v15 )
                v13 = v4;
              v30[v11] = 2;
            }
            else
            {
              v13 = v4;
            }
            v7 = v25;
            v4 = v13;
            if ( !v5 )
              v5 = 1;
          }
        }
      }
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
  }
  v28 = v4;
  v29 = v5;
  v16 = 7296;
  v17 = 0;
  v18 = a1 + 7312;
  v27 = FIELD_U32(a1, 7272);
  do
  {
    v19 = a1 + v16;
    v20 = *(_DWORD *)(a1 + v16 - 16);
    if ( v20 != 2 )
    {
      v21 = v30[v17];
      if ( v21 == 2 )
      {
        v22 = *(_DWORD *)(a1 + v16);
        *(_DWORD *)(a1 + v16) = v22 + 1;
        if ( v22 >= 1 )
        {
          *(_DWORD *)(a1 + v16) = 2;
          *(_BYTE *)(v18 + v17) = 0;
          sub_603F0040(dword_60C99D6C, v17, 9, 0);
          v20 = *(_DWORD *)(v19 - 16);
        }
      }
      if ( !v20 )
      {
        if ( (unsigned int)(v21 - 1) > 1 )
          goto LABEL_45;
        *(_BYTE *)(v18 + v17) = 1;
        v20 = *(_DWORD *)(v19 - 16);
      }
      if ( (unsigned int)(v20 - 1) > 1 )
      {
LABEL_45:
        v23 = v30[v17];
        if ( v23 )
          goto LABEL_47;
        goto LABEL_46;
      }
    }
    v23 = v30[v17];
    if ( v23 )
      goto LABEL_47;
    *(_DWORD *)(a1 + v16) = 0;
    *(_BYTE *)(v18 + v17) = 0;
    sub_603F01A0(dword_60C99D6C, v17, 9, 60);
LABEL_46:
    v23 = 0;
    *(_BYTE *)(v18 + v17) = 0;
LABEL_47:
    ++v17;
    v16 += 4;
    *(_DWORD *)(v19 - 16) = v23;
  }
  while ( v17 != 4 );
  sub_60664E84((_BYTE *)a1);
  FIELD_U32(a1, 7240) = v28;
  result = v29;
  if ( v27 )
    result = 2;
  FIELD_U32(a1, 7264) = result;
  return result;
}
