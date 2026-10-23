/* sub_609A0B94
 * address: 0x609A0B94   size: 1684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A0B94(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r7
  int v7; // r5
  int v8; // r4
  int v9; // r9
  _DWORD *v10; // r6
  int v11; // r6
  int v12; // r0
  int v13; // r2
  bool v14; // cc
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r9
  int v22; // r10
  int v23; // r6
  int v24; // r0
  int v25; // r2
  int v26; // r6
  int v27; // r0
  int v28; // r2
  int v29; // r0
  int v30; // r2
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // [sp+18h] [bp-40h]
  int v36; // [sp+20h] [bp-38h]
  int (**v37)(); // [sp+2Ch] [bp-2Ch] BYREF
  const char *v38; // [sp+30h] [bp-28h]

  v7 = a3;
  v8 = result;
  if ( a2 )
  {
    v9 = a2 + 20;
    v10 = (_DWORD *)a2;
    v36 = **(unsigned __int8 **)(a2 + 24);
    if ( **(_BYTE **)(a2 + 24) )
    {
      if ( a3 >= 1 )
      {
        v11 = a3;
        do
        {
          sub_60905558(v8, 9);
          --v11;
        }
        while ( v11 );
      }
      sub_60905558(v8, 60);
      v10 = (_DWORD *)a2;
      (*(void (__fastcall **)(int))(FIELD_U32(a2, 20) + 12))(v9);
      v12 = FIELD_U32(a2, 24);
      v5 = 0x7FFFF;
      v13 = 0;
      while ( *(_BYTE *)(v12 + v13) )
      {
        if ( !*(_BYTE *)(v12 + v13 + 1) )
        {
          ++v13;
          break;
        }
        if ( !*(_BYTE *)(v12 + v13 + 2) )
        {
          v13 += 2;
          break;
        }
        v14 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v14 )
        {
          v13 = 0;
          break;
        }
      }
      sub_6090567C(v8, v9, v13);
      sub_609A5790(v8, a2);
    }
    v34 = v9;
    v15 = v10[2];
    v16 = v15 == 0;
    if ( v15 )
    {
      v5 = v15 - 4;
      v16 = v15 == 4;
    }
    if ( v16 )
    {
      if ( !v10[24] )
      {
        result = v36;
        if ( !v36 )
          return result;
        v37 = &sead__SafeStringBase__vtable;
        v38 = "/>";
        sub_6090567C(v8, (int)&v37, 2);
        return sub_60905558(v8, 10);
      }
      if ( v36 )
      {
        sub_60905558(v8, 62);
        sub_609A5290(v8, v10, v10[27], a4, a5);
        v37 = &sead__SafeStringBase__vtable;
        v38 = "</";
        sub_6090567C(v8, (int)&v37, 2);
        (*(void (__fastcall **)(int))(v10[5] + 12))(v9);
        v31 = v10[6];
        v30 = 0;
        while ( *(_BYTE *)(v31 + v30) )
        {
          if ( !*(_BYTE *)(v31 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*(_BYTE *)(v31 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v14 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v14 )
          {
            v30 = 0;
            break;
          }
        }
        v32 = v8;
        v33 = v9;
        goto LABEL_87;
      }
      if ( v7 >= 1 )
      {
        do
        {
          sub_60905558(v8, 9);
          --v7;
        }
        while ( v7 );
      }
      sub_609A5290(v8, v10, v10[27], a4, a5);
      return sub_60905558(v8, 10);
    }
    else
    {
      v37 = &sead__SafeStringBase__vtable;
      v38 = ">\n";
      sub_6090567C(v8, (int)&v37, 2);
      sub_609A0B94(v8, v5, v7 + 1, a4, a5);
      v17 = FIELD_U32(v5, 12);
      v18 = v17 == 0;
      if ( v17 )
      {
        v5 = v17 - 4;
        v18 = v17 == 4;
      }
      if ( !v18 )
      {
        do
        {
          v19 = FIELD_U32(v5, 8);
          v20 = v19 == 0;
          if ( v19 )
            v20 = v19 == 4;
          if ( v20 )
          {
            v21 = a4;
            v22 = **(unsigned __int8 **)(v5 + 24);
            if ( **(_BYTE **)(v5 + 24) )
            {
              if ( v7 >= 0 )
              {
                v23 = v7 + 1;
                do
                {
                  sub_60905558(v8, 9);
                  --v23;
                }
                while ( v23 );
              }
              sub_60905558(v8, 60);
              (*(void (__fastcall **)(int))(FIELD_U32(v5, 20) + 12))(v5 + 20);
              v24 = FIELD_U32(v5, 24);
              v25 = 0;
              while ( *(_BYTE *)(v24 + v25) )
              {
                if ( !*(_BYTE *)(v24 + v25 + 1) )
                {
                  ++v25;
                  break;
                }
                if ( !*(_BYTE *)(v24 + v25 + 2) )
                {
                  v25 += 2;
                  break;
                }
                v14 = v25 + 2 <= 0x7FFFF;
                v25 += 3;
                if ( !v14 )
                {
                  v25 = 0;
                  break;
                }
              }
              sub_6090567C(v8, v5 + 20, v25);
              sub_609A5790(v8, v5);
            }
            if ( FIELD_U32(v5, 96) )
            {
              if ( v22 )
              {
                sub_60905558(v8, 62);
                a4 = v21;
                sub_609A5290(v8, v5, FIELD_U32(v5, 108), v21, a5);
                v37 = &sead__SafeStringBase__vtable;
                v38 = "</";
                sub_6090567C(v8, (int)&v37, 2);
                (*(void (__fastcall **)(int))(FIELD_U32(v5, 20) + 12))(v5 + 20);
                v27 = FIELD_U32(v5, 24);
                v28 = 0;
                while ( *(_BYTE *)(v27 + v28) )
                {
                  if ( !*(_BYTE *)(v27 + v28 + 1) )
                  {
                    ++v28;
                    break;
                  }
                  if ( !*(_BYTE *)(v27 + v28 + 2) )
                  {
                    v28 += 2;
                    break;
                  }
                  v14 = v28 + 2 <= 0x7FFFF;
                  v28 += 3;
                  if ( !v14 )
                  {
                    v28 = 0;
                    break;
                  }
                }
                sub_6090567C(v8, v5 + 20, v28);
                sub_60905558(v8, 62);
              }
              else
              {
                if ( v7 >= 0 )
                {
                  v26 = v7 + 1;
                  do
                  {
                    sub_60905558(v8, 9);
                    --v26;
                  }
                  while ( v26 );
                }
                a4 = v21;
                sub_609A5290(v8, v5, FIELD_U32(v5, 108), v21, a5);
              }
              goto LABEL_55;
            }
            v16 = v22 == 0;
            a4 = v21;
            if ( !v16 )
            {
              v37 = &sead__SafeStringBase__vtable;
              v38 = "/>";
              sub_6090567C(v8, (int)&v37, 2);
LABEL_55:
              sub_60905558(v8, 10);
            }
          }
          else
          {
            sub_609A0B94(v8, v5, v7 + 1, a4, a5);
          }
          v5 = FIELD_U32(v5, 12);
          if ( v5 )
            v5 -= 4;
        }
        while ( v5 );
      }
      result = v36;
      if ( v36 )
      {
        if ( v7 >= 1 )
        {
          do
          {
            sub_60905558(v8, 9);
            --v7;
          }
          while ( v7 );
        }
        v37 = &sead__SafeStringBase__vtable;
        v38 = "</";
        sub_6090567C(v8, (int)&v37, 2);
        (*(void (__fastcall **)(int))(FIELD_U32(a2, 20) + 12))(v34);
        v29 = FIELD_U32(a2, 24);
        v30 = 0;
        while ( *(_BYTE *)(v29 + v30) )
        {
          if ( !*(_BYTE *)(v29 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*(_BYTE *)(v29 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v14 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v14 )
          {
            v30 = 0;
            break;
          }
        }
        v32 = v8;
        v33 = v34;
LABEL_87:
        sub_6090567C(v32, v33, v30);
        sub_60905558(v8, 62);
        return sub_60905558(v8, 10);
      }
    }
  }
  return result;
}
