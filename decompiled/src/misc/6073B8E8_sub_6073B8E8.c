/* sub_6073B8E8
 * address: 0x6073B8E8   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6073B8E8(int a1)
{
  _BYTE *v2; // r1
  int v3; // r2
  signed int result; // r0
  _BYTE *v5; // r5
  bool v6; // zf
  signed int v7; // r3
  int v8; // r0
  char v9; // r6
  unsigned int i; // r1
  int v11; // r0
  unsigned int v12; // r6
  int v13; // r0
  unsigned int v14; // r8
  char *v15; // r11
  unsigned int v16; // r0
  unsigned int v17; // r10
  int v18; // r9
  int v19; // r7
  bool *v20; // r10
  int v21; // t1
  int v22; // r0
  unsigned __int8 *v23; // [sp+0h] [bp-28h]

  v2 = (_BYTE *)(a1 + 6110);
  v3 = FIELD_U8(a1, 6110);
  v5 = (_BYTE *)(a1 + 6108);
  result = FIELD_U8(a1, 6108);
  if ( v3 )
  {
    v6 = result == 0;
    result = 0;
    if ( !v6 )
    {
      v7 = 0;
      do
      {
        v8 = a1;
        if ( (unsigned int)v7 < 5 )
          v8 = a1 + v7;
        v9 = v7 % 2;
        ++v7;
        FIELD_U8(v8, 6205) = v9;
        result = (unsigned __int8)*v5;
      }
      while ( v7 < result );
    }
    *v2 = 0;
    if ( !result )
      return result;
LABEL_15:
    v12 = 0;
    do
    {
      v6 = (unsigned __int8)result == 0;
      result = 0;
      if ( !v6 )
      {
        v13 = a1;
        v14 = 0;
        if ( v12 < 5 )
          v13 = a1 + v12;
        v15 = (char *)(v13 + 6200);
        v23 = (unsigned __int8 *)(v13 + 6205);
        do
        {
          if ( v12 != v14 )
          {
            v16 = 0;
            if ( v14 < 5 )
              v16 = v14;
            v17 = a1 + v16;
            v18 = *(char *)(a1 + v16 + 6200);
            if ( v18 == *(unsigned __int8 *)(sub_6073AFA4(a1, (unsigned __int8)v12) + 7392) )
            {
              v19 = *v15;
              if ( v19 == *(unsigned __int8 *)(sub_6073AFA4(a1, (unsigned __int8)v14) + 7392) )
              {
                v21 = FIELD_U8(v17, 6205);
                v20 = (bool *)(v17 + 6205);
                v22 = *v23;
                if ( v22 == v21 )
                  *v20 = v22 == 0;
              }
            }
          }
          result = (unsigned __int8)*v5;
          ++v14;
        }
        while ( (int)v14 < result );
      }
      ++v12;
    }
    while ( (int)v12 < result );
    return result;
  }
  if ( result )
  {
    for ( i = 0; (int)i < result; ++i )
    {
      v11 = a1;
      if ( i < 5 )
        v11 = a1 + i;
      FIELD_U8(v11, 6205) = FIELD_U8(v11, 6205) == 0;
      result = (unsigned __int8)*v5;
    }
    if ( *v5 )
      goto LABEL_15;
  }
  return result;
}
