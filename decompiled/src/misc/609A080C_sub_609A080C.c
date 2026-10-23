/* sub_609A080C
 * address: 0x609A080C   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A080C(int a1, int a2)
{
  int v2; // r4
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  bool v10; // zf
  int v11; // r6
  int v12; // r0
  bool v13; // zf
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  int v17; // r1
  int v18; // r0
  bool v19; // cc
  int v20; // r7
  int v21; // r0
  _DWORD *v22; // r6
  int v23; // r1
  int v24; // r0
  int v25; // r7
  int v26; // r6
  int v27; // t1
  int v28; // r1
  int v29; // r0
  int v30; // r7
  int v31; // r0
  int v32; // r1

  while ( 1 )
  {
LABEL_33:
    (*(void (__fastcall **)(int))(FIELD_U32(a2, 20) + 12))(a2 + 20);
    v17 = FIELD_U32(a2, 24);
    v18 = 0;
    while ( *(_BYTE *)(v17 + v18) )
    {
      if ( !*(_BYTE *)(v17 + v18 + 1) )
      {
        LOBYTE(v18) = v18 + 1;
        break;
      }
      if ( !*(_BYTE *)(v17 + v18 + 2) )
      {
        LOBYTE(v18) = v18 + 2;
        break;
      }
      v19 = v18 + 2 <= 0x7FFFF;
      v18 += 3;
      if ( !v19 )
      {
        LOBYTE(v18) = 0;
        break;
      }
    }
    v20 = (unsigned __int8)v18;
    sub_60905558(a1, (unsigned __int8)v18);
    sub_6090567C(a1, a2 + 20, v20);
    v21 = FIELD_U32(a2, 120);
    if ( v21 < 1 )
    {
      sub_60905558(a1, 0);
    }
    else
    {
      sub_60905558(a1, (unsigned __int8)v21);
      v2 = FIELD_U32(a2, 116);
      if ( v2 != a2 + 112 )
      {
        v22 = (_DWORD *)(v2 - 24);
        do
        {
          (*(void (__fastcall **)(_DWORD *))(*v22 + 12))(v22);
          v23 = v22[1];
          v24 = 0;
          while ( *(_BYTE *)(v23 + v24) )
          {
            if ( !*(_BYTE *)(v23 + v24 + 1) )
            {
              LOBYTE(v24) = v24 + 1;
              break;
            }
            if ( !*(_BYTE *)(v23 + v24 + 2) )
            {
              LOBYTE(v24) = v24 + 2;
              break;
            }
            v19 = v24 + 2 <= 0x7FFFF;
            v24 += 3;
            if ( !v19 )
            {
              LOBYTE(v24) = 0;
              break;
            }
          }
          v25 = (unsigned __int8)v24;
          sub_60905558(a1, (unsigned __int8)v24);
          sub_6090567C(a1, (int)v22, v25);
          v27 = v22[3];
          v26 = (int)(v22 + 3);
          (*(void (__fastcall **)(int))(v27 + 12))(v26);
          v28 = FIELD_U32(v26, 4);
          v29 = 0;
          while ( *(_BYTE *)(v28 + v29) )
          {
            if ( !*(_BYTE *)(v28 + v29 + 1) )
            {
              LOBYTE(v29) = v29 + 1;
              break;
            }
            if ( !*(_BYTE *)(v28 + v29 + 2) )
            {
              LOBYTE(v29) = v29 + 2;
              break;
            }
            v19 = v29 + 2 <= 0x7FFFF;
            v29 += 3;
            if ( !v19 )
            {
              LOBYTE(v29) = 0;
              break;
            }
          }
          v30 = (unsigned __int8)v29;
          sub_60905558(a1, (unsigned __int8)v29);
          sub_6090567C(a1, v26, v30);
          v2 = FIELD_U32(v2, 4);
          v22 = (_DWORD *)(v2 - 24);
        }
        while ( v2 - 24 != a2 + 88 );
      }
    }
    v5 = FIELD_U32(a2, 96);
    v6 = FIELD_U32(a2, 8);
    if ( !v5 )
    {
      v7 = v6 == 0;
      if ( v6 )
        v7 = v6 == 4;
      if ( v7 )
      {
        sub_60905584(a1, 0);
        v8 = FIELD_U32(a2, 12);
        v9 = v8 == 0;
        if ( v8 )
        {
          a2 = v8 - 4;
          v9 = v8 == 4;
        }
        if ( !v9 )
        {
          sub_60905558(a1, 4);
          continue;
        }
        v31 = a1;
        v32 = 5;
        return sub_60905558(v31, v32);
      }
    }
    v10 = v6 == 0;
    if ( v6 )
      v10 = v6 == 4;
    if ( v10 )
      break;
    sub_60905584(a1, 0);
    v12 = FIELD_U32(a2, 12);
    v13 = v12 == 0;
    if ( v12 )
    {
      v2 = v12 - 4;
      v13 = v12 == 4;
    }
    if ( v13 )
    {
      sub_60905558(a1, 1);
      a2 = FIELD_U32(a2, 8);
      if ( a2 )
        a2 -= 4;
    }
    else
    {
      sub_60905558(a1, 2);
      v14 = FIELD_U32(a2, 8);
      if ( v14 )
        v14 -= 4;
      sub_609A080C(a1, v14);
      a2 = v2;
    }
  }
  if ( v5 )
  {
    v11 = ((int (__fastcall *)(_DWORD))off_60C5CB04[0])(FIELD_U16(a2, 100));
    sub_60905584(a1, v11);
    if ( v11 )
      sub_609056A8(a1, FIELD_U32(a2, 96), v11);
  }
  else
  {
    sub_60905584(a1, 0);
  }
  v15 = FIELD_U32(a2, 12);
  v16 = v15 == 0;
  if ( v15 )
  {
    a2 = v15 - 4;
    v16 = v15 == 4;
  }
  if ( !v16 )
  {
    sub_60905558(a1, 0);
    goto LABEL_33;
  }
  v31 = a1;
  v32 = 3;
  return sub_60905558(v31, v32);
}
