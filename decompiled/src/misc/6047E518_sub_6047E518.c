/* sub_6047E518
 * address: 0x6047E518   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047E518(int a1, int a2, int a3, int a4)
{
  int v8; // r9
  int v9; // r0
  int v10; // r5
  int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  bool v16; // zf
  char v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r6
  int v21; // r5
  int v22; // r7
  int result; // r0
  int v24; // r5
  int v25; // r6
  bool v26; // zf
  int v27; // r1
  int v28; // r2
  int v29; // r5
  int v30; // r4

  v8 = a1 + 12;
  FIELD_U32(a1, 44) &= 0xFFFFFFFC;
  v9 = FIELD_U32(a1, 28);
  if ( v9 )
    FIELD_U32(a1, 36) = v9;
  v10 = FIELD_U32(a1, 16);
  if ( v10 != v8 )
  {
    v11 = FIELD_U32(a1, 24);
    v12 = v10 - v11;
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 120))(v12);
      v10 = FIELD_U32(v10, 4);
      v12 = v10 - v11;
    }
    while ( v10 - v11 != v8 - v11 );
  }
  v13 = FIELD_U32(a1, 8);
  switch ( v13 )
  {
    case 0:
      if ( a2 || a3 == 1 )
      {
        v20 = FIELD_U32(a1, 16);
        if ( v20 != v8 )
        {
          v21 = FIELD_U32(a1, 24);
          v22 = v20 - v21;
          while ( sub_604785EC(v22) != 1 || (*(int (__fastcall **)(int, int))(*(_DWORD *)v22 + 124))(v22, a4) != 1 )
          {
            v20 = FIELD_U32(v20, 4);
            v22 = v20 - v21;
            if ( v20 - v21 == v8 - v21 )
              goto LABEL_28;
          }
          if ( !FIELD_U8(a1, 53) )
          {
            v19 = 1;
            FIELD_U32(a1, 8) = 1;
            v18 = a1;
            goto LABEL_20;
          }
        }
LABEL_28:
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      FIELD_U8(a1, 53) = v17;
      break;
    case 1:
      v18 = a1;
      v19 = a2;
LABEL_20:
      sub_6047E7C8(v18, v19, a3, a4);
      break;
    case 2:
      v14 = FIELD_U32(a1, 28);
      v15 = FIELD_U32(v14, 4);
      if ( v15 == 5 )
      {
        FIELD_U32(a1, 8) = 3;
        v15 = FIELD_U32(v14, 4);
      }
      v16 = v15 == 3;
      if ( v15 == 3 )
        v16 = FIELD_U32(v14, 164) == 1;
      if ( v16 )
      {
        FIELD_U32(a1, 8) = 3;
        sub_60478080(v14);
        FIELD_U32(a1, 44) = 0;
      }
      break;
  }
  result = FIELD_U32(a1, 28);
  if ( FIELD_U32(a1, 32) == result )
    goto LABEL_46;
  if ( !result )
  {
    v24 = 1;
    v25 = 0;
    goto LABEL_39;
  }
  v24 = FIELD_U8(result, 208);
  if ( FIELD_U8(result, 208) )
    v24 = 1;
  if ( FIELD_U32(result, 164) != 4 )
    goto LABEL_37;
  v25 = 1;
  if ( !sub_604785CC(result) )
  {
    result = FIELD_U32(a1, 28);
LABEL_37:
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
    v25 = 1;
    FIELD_U32(a1, 44) |= 2u;
  }
LABEL_39:
  result = FIELD_U32(a1, 32);
  FIELD_U32(a1, 28) = result;
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
    result = FIELD_U32(a1, 44) | 1;
    FIELD_U32(a1, 44) = result;
    if ( v25 == 1 )
    {
      result = FIELD_U8(a1, 52);
      v26 = result == 0;
      if ( !FIELD_U8(a1, 52) )
      {
        result = v24 ^ 1;
        v26 = v24 == 1;
      }
      if ( v26 )
        result = sub_60478750(FIELD_U32(a1, 32));
    }
  }
LABEL_46:
  v27 = FIELD_U32(a1, 44);
  if ( (v27 & 4) != 0 )
  {
    result = FIELD_U32(a1, 28);
    if ( result )
    {
      v28 = 0;
      if ( !FIELD_U8(result, 168) )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 16))(result);
        v27 = FIELD_U32(a1, 44);
        v28 = 2;
      }
      FIELD_U32(a1, 8) = v28;
    }
    FIELD_U32(a1, 44) = v27 & 0xFFFFFFFB;
  }
  v29 = FIELD_U32(a1, 16);
  if ( v29 != v8 )
  {
    v30 = FIELD_U32(a1, 24);
    result = v29 - v30;
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 36))(result);
      v29 = FIELD_U32(v29, 4);
      result = v29 - v30;
    }
    while ( v29 - v30 != v8 - v30 );
  }
  return result;
}
