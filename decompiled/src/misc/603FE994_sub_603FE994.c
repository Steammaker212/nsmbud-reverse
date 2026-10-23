/* sub_603FE994
 * address: 0x603FE994   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FE994(int a1)
{
  unsigned int v2; // r10
  int v3; // r5
  int v4; // r11
  int i; // r4
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r1
  unsigned int result; // r0
  int v12; // r9
  unsigned int v13; // r4
  int j; // r6
  int v15; // r1
  int v16; // r2
  bool v17; // cc
  unsigned int v18; // r0
  int v19; // [sp+0h] [bp-38h]
  int v20; // [sp+4h] [bp-34h]
  int v21; // [sp+8h] [bp-30h]
  int v22; // [sp+Ch] [bp-2Ch]

  v2 = 0;
  v3 = FIELD_U32(dword_60C9C0FC, 724);
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v4 = sub_60834614();
  for ( i = 0; i != 6; ++i )
  {
    v6 = v4 + 72 * i;
    if ( FIELD_U32(v6, 32) == 6 )
    {
      if ( FIELD_U8(v6, 20) )
      {
        v7 = FIELD_U32(v6, 44);
        if ( v7 >> 25 <= 2 )
        {
          if ( FIELD_U32(v3, 52) )
          {
            v8 = 0;
            while ( sub_6042EFA8(v3, v8) != v7 )
            {
              if ( (unsigned int)++v8 >= FIELD_U32(v3, 52) )
                goto LABEL_13;
            }
            v9 = sub_6042EFE0(v3, v8);
            v10 = 0;
            if ( v2 < 4 )
              v10 = v2;
            ++v2;
            *(&v19 + v10) = v9;
          }
        }
      }
    }
LABEL_13:
    ;
  }
  if ( v22 )
    sub_6042B94C(dword_60C9C114);
  if ( v21 )
    sub_6042B94C(dword_60C9C114);
  if ( v20 )
    sub_6042B94C(dword_60C9C114);
  if ( v19 )
    sub_6042B94C(dword_60C9C114);
  if ( v2 )
    sub_6042F01C(v3);
  memset((void *)(a1 + 16), 255, 0xD8u);
  result = dword_60C9C0FC;
  v12 = FIELD_U32(dword_60C9C0FC, 724);
  if ( v12 )
  {
    v13 = 0;
    for ( j = 0; j != 54; ++j )
    {
      result = sub_6042EFA8(v12, j);
      if ( result >> 25 <= 2 )
      {
        v15 = 1;
        v16 = a1;
        while ( result != FIELD_U32(v16, 240) )
        {
          if ( result == FIELD_U32(v16, 4664) )
            goto LABEL_33;
          v16 += 8848;
          v17 = v15 + 1 < 54;
          v15 += 2;
          if ( !v17 )
            goto LABEL_36;
        }
        --v15;
LABEL_33:
        v18 = 0;
        if ( v13 < 0x36 )
          v18 = v13;
        ++v13;
        result = a1 + 4 * v18;
        FIELD_U32(result, 16) = v15;
      }
LABEL_36:
      ;
    }
  }
  return result;
}
