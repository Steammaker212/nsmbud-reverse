/* sub_6043F5A0
 * address: 0x6043F5A0   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043F5A0(int a1, _DWORD **a2)
{
  _DWORD **v2; // r4
  int v4; // r9
  int v5; // r0
  int v6; // r11
  int v7; // r4
  unsigned __int8 *v8; // r8
  size_t v9; // r7
  int v10; // r0
  int v11; // r1
  int *v12; // r6
  int v13; // r2
  int v14; // r3
  unsigned __int16 *v15; // r0
  size_t v16; // r10
  size_t v17; // r2
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  unsigned __int8 *v22; // r6
  _DWORD *v23; // r4
  int v24; // r11
  size_t v25; // r7
  int v26; // r0
  int v27; // r1
  int *v28; // r10
  int v29; // r2
  int v30; // r3
  unsigned __int16 *v31; // r0
  size_t v32; // r8
  size_t v33; // r2
  int v34; // r0
  int v35; // r1
  int v36; // r7
  size_t v37; // r0
  int v38; // r2
  int v39; // r1
  int v40; // r3
  bool v41; // cc
  int v42; // r5
  _DWORD **v44; // [sp+4h] [bp-34h]
  int v45; // [sp+8h] [bp-30h]
  int v46; // [sp+10h] [bp-28h]

  v2 = a2;
  sub_608739AC(a2);
  v45 = FIELD_U32(a1, 4);
  if ( v45 >= 1 )
  {
    v4 = 0;
    v44 = v2;
    do
    {
      v46 = a1 + 4 * v4;
      v22 = *(unsigned __int8 **)(v46 + 8);
      v23 = (_DWORD *)**v2;
      v24 = v23[8];
      if ( !v24 )
        goto LABEL_45;
      if ( v22 )
        v25 = strlen(*(const char **)(v46 + 8));
      else
        v25 = 0;
      v26 = FIELD_U16(v24, 12);
      v28 = (int *)(v24 + 8 + 16 * v26);
      v27 = *v28;
      if ( FIELD_U32(v24, 8) < *v28 )
      {
        do
        {
          v29 = 0;
          if ( v25 > v27 >> 3 )
            v29 = (v22[v25 + ~(v27 >> 3)] >> (v27 & 7)) & 1;
          v30 = *(_DWORD *)(v24 + 8 + 16 * v26);
          v26 = *(unsigned __int16 *)(v24 + 8 + 16 * v26 + 2 * v29 + 4);
          v28 = (int *)(v24 + 8 + 16 * v26);
          v27 = *v28;
        }
        while ( v30 < *v28 );
      }
      v31 = (unsigned __int16 *)v28[2];
      v32 = *v31;
      v33 = v32;
      if ( v25 < v32 )
        v33 = v25;
      if ( v33 )
      {
        v34 = memcmp(v31 + 1, v22, v33);
        if ( v25 < v32 || v34 )
          goto LABEL_45;
      }
      else if ( v25 < v32 )
      {
        goto LABEL_45;
      }
      v35 = 0;
      if ( v32 < v25 )
        v35 = -1;
      if ( v35 || (v5 = (int)v28 - v24 - 24, v5 >> 4 == -1) )
      {
LABEL_45:
        v36 = v23[4];
        if ( v36 )
        {
          if ( v22 )
            v37 = strlen((const char *)v22);
          else
            v37 = 0;
          v2 = v44;
          v38 = FIELD_U16(v36, 12);
          v39 = *(_DWORD *)(v36 + 8 + 16 * v38);
          if ( FIELD_U32(v36, 8) < v39 )
          {
            do
            {
              v40 = 0;
              if ( v37 > v39 >> 3 )
                v40 = (v22[v37 + ~(v39 >> 3)] >> (v39 & 7)) & 1;
              v38 = *(unsigned __int16 *)(v36 + 8 + 16 * v38 + 2 * v40 + 4);
              v41 = v39 < *(_DWORD *)(v36 + 8 + 16 * v38);
              v39 = *(_DWORD *)(v36 + 8 + 16 * v38);
            }
            while ( v41 );
            v2 = v44;
          }
        }
        else
        {
          v2 = v44;
        }
        goto LABEL_55;
      }
      v6 = v5 >> 4;
      v7 = *(_DWORD *)(v23[6] + 40 * (v5 >> 4) + 8);
      if ( v7 )
      {
        v8 = *(unsigned __int8 **)(v46 + 4104);
        if ( v8 )
          v9 = strlen(*(const char **)(v46 + 4104));
        else
          v9 = 0;
        v10 = FIELD_U16(v7, 12);
        v12 = (int *)(v7 + 8 + 16 * v10);
        v11 = *v12;
        if ( FIELD_U32(v7, 8) < *v12 )
        {
          do
          {
            v13 = 0;
            if ( v9 > v11 >> 3 )
              v13 = (v8[v9 + ~(v11 >> 3)] >> (v11 & 7)) & 1;
            v14 = *(_DWORD *)(v7 + 8 + 16 * v10);
            v10 = *(unsigned __int16 *)(v7 + 8 + 16 * v10 + 2 * v13 + 4);
            v12 = (int *)(v7 + 8 + 16 * v10);
            v11 = *v12;
          }
          while ( v14 < *v12 );
        }
        v15 = (unsigned __int16 *)v12[2];
        v16 = *v15;
        v17 = v16;
        if ( v9 < v16 )
          v17 = v9;
        if ( v17 )
        {
          v18 = memcmp(v15 + 1, v8, v17);
          if ( v9 >= v16 && !v18 )
          {
LABEL_21:
            v19 = 0;
            if ( v16 < v9 )
              v19 = -1;
            if ( !v19 )
            {
              v20 = v7 + 24;
              v2 = v44;
              v21 = (int)v12 - v20;
              if ( v21 >> 4 != -1 )
              {
                sub_60873A18(v44, v6, v21 >> 4);
                v45 = FIELD_U32(a1, 4);
              }
              goto LABEL_55;
            }
          }
          v2 = v44;
          goto LABEL_55;
        }
        if ( v9 >= v16 )
          goto LABEL_21;
        v2 = v44;
      }
      else
      {
        v2 = v44;
      }
LABEL_55:
      ++v4;
    }
    while ( v4 < v45 );
  }
  v42 = *(_DWORD *)(**v2 + 184);
  if ( v42 )
  {
    sead__CriticalSection__lock(*(_DWORD *)(**v2 + 184));
    sub_608738F4(v2, FIELD_U32(dword_60CCFC8C, 24));
    sead__CriticalSection__unlock(v42);
  }
  else
  {
    sub_608738F4(v2, FIELD_U32(dword_60CCFC8C, 24));
  }
  return v2[4];
}
