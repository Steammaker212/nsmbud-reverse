/* sub_6083CA08
 * address: 0x6083CA08   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083CA08(int a1, int a2, unsigned __int16 *a3, int a4)
{
  int v5; // r1
  int v6; // r2
  int v7; // r4
  int i; // r6
  int v9; // r5
  int v10; // r7
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r10
  int v14; // r4
  int v15; // r8
  int v16; // r5
  const char *v17; // r3
  int v18; // r7
  int v19; // r6
  int v20; // r0
  int v21; // r11
  int v22; // r8
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int v26; // r0
  bool v27; // cc
  int v28; // r5
  int v29; // r6
  _DWORD v33[18]; // [sp+10h] [bp-48h] BYREF

  FIELD_U32(a1, 4) = a3[1];
  v5 = a3[1];
  v6 = FIELD_U32(a1, 16);
  FIELD_U32(a1, 24) = v6 + 8 * v5;
  if ( a3[1] )
  {
    v7 = 0;
    for ( i = 1; ; ++i )
    {
      v9 = *((_DWORD *)a3 + 4);
      v10 = v6 + v7;
      dword_60CC77A0(v6 + v7);
      v11 = (_DWORD *)(v9 + 2 * v7);
      dword_60CC77A4(v10, *v11);
      dword_60CC77A8(v10, v11[1]);
      if ( i >= a3[1] )
        break;
      v7 += 8;
      v6 = FIELD_U32(a1, 16);
    }
  }
  LOWORD(v12) = 0;
  memset(v33, 0, 32);
  if ( *a3 )
  {
    v13 = -1;
    v14 = 0;
    if ( a4 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = *((_DWORD *)a3 + 2) + v14;
        v17 = *(const char **)(v16 + 16);
        if ( v17 )
        {
          v18 = sub_6083BDB8(a4, 0, 0, v17);
          if ( v18 >= 0 )
            goto LABEL_12;
        }
        else
        {
          v18 = FIELD_S16(v16, 2);
          if ( v18 >= 0 )
          {
LABEL_12:
            v19 = FIELD_U32(a1, 24) + 4 * v18;
            dword_60CC778C(v19);
            v20 = sub_6083AA20(FIELD_U32(v16, 12));
            ((void (__fastcall *)(int, int, _DWORD))dword_60CC7790)(v19, v20, FIELD_U32(v16, 8));
            dword_60CC7794(v19, FIELD_U16(v16, 4));
            if ( v13 < v18 )
              v13 = v18;
            v33[(unsigned int)v18 >> 5] |= 1 << (v18 & 0x1F);
          }
        }
        v12 = *a3;
        ++v15;
        v14 += 40;
        if ( v15 >= v12 )
          goto LABEL_24;
      }
    }
    v21 = 0;
    LOWORD(v12) = *a3;
    do
    {
      v22 = *((_DWORD *)a3 + 2) + v14;
      v23 = FIELD_S16(v22, 2);
      if ( v23 >= 0 )
      {
        v24 = FIELD_U32(a1, 24) + 4 * v23;
        dword_60CC778C(v24);
        v25 = sub_6083AA20(FIELD_U32(v22, 12));
        ((void (__fastcall *)(int, int, _DWORD))dword_60CC7790)(v24, v25, FIELD_U32(v22, 8));
        dword_60CC7794(v24, FIELD_U16(v22, 4));
        if ( v13 < v23 )
          v13 = v23;
        v33[(unsigned int)v23 >> 5] |= 1 << (v23 & 0x1F);
        LOWORD(v12) = *a3;
      }
      ++v21;
      v14 += 40;
    }
    while ( v21 < (unsigned __int16)v12 );
  }
  else
  {
    v13 = -1;
  }
LABEL_24:
  v12 = (unsigned __int16)v12;
  if ( (_WORD)v12 )
    v12 = v13 + 1;
  FIELD_U32(a1, 8) = v12;
  v26 = *a3;
  v27 = v13 < v26;
  if ( v13 >= v26 )
    v27 = v13 < 0;
  if ( !v27 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      if ( (v33[v29 >> 5] & (1 << (v29 & 0x1F))) == 0 )
        dword_60CC778C(FIELD_U32(a1, 24) + v28);
      ++v29;
      v28 += 4;
    }
    while ( v13 + 1 != v29 );
  }
  *(_BYTE *)a1 = 1;
  return 1;
}
