/* sub_608D32D4
 * address: 0x608D32D4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D32D4(int a1, _DWORD *a2)
{
  _BOOL4 v4; // r7
  _BYTE *v5; // r6
  int *v6; // r0
  int v7; // r1
  int *v8; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r1
  int i; // r5
  int v13; // r3
  int v14; // r7
  int v15; // r6
  int v16; // r7
  int v17; // r3
  int v18; // r6
  int v19; // r0
  int v20; // r6
  int result; // r0
  int *v22; // r0
  char v23; // [sp+4h] [bp-1Ch] BYREF

  if ( FIELD_U8(a1, 36) )
  {
    v4 = 1;
    FIELD_U8(a1, 39) = 1;
    v5 = (_BYTE *)(a1 + 1518);
    if ( FIELD_U8(a1, 1518) )
    {
      v6 = sub_608C3C60();
      sub_608C411C((int)v6, a1 + 164);
      FIELD_U8(a1, 1518) = 0;
    }
    if ( FIELD_U8(a1, 37) )
      FIELD_U8(a1, 37) = 0;
  }
  else
  {
    v5 = (_BYTE *)(a1 + 1518);
    v4 = FIELD_U8(a1, 1518) == 0;
  }
  FIELD_U32(a1, 176) = *a2;
  FIELD_U32(a1, 1508) = a2[1];
  v7 = a2[2];
  FIELD_U32(a1, 1500) = v7;
  FIELD_U32(a1, 1504) = a2[3];
  FIELD_U8(a1, 36) = 1;
  if ( v4 )
  {
    v8 = sub_608C3C60();
    sub_608C40FC((int)v8, a1 + 164);
    *v5 = 1;
    v7 = FIELD_U32(a1, 1500);
  }
  FIELD_U32(a1, 1512) = 0;
  v9 = sub_608D9E9C(&v23, v7);
  if ( sub_608D9F74(v9, a1 + 180) == 1 )
  {
    FIELD_U8(a1, 1160) = 0;
    v10 = FIELD_U32(a1, 180);
    if ( v10 >= 1 )
    {
      v11 = a1 + 1168;
      for ( i = 0; i != v10; ++i )
      {
        v13 = a1 + 84 * i;
        FIELD_U8(v13, 1164) = 0;
        v14 = *(_DWORD *)(a1 + 244 * i + 184);
        if ( v14 >= 1 )
        {
          v15 = 0;
          if ( (v14 & 1) != 0 )
          {
            FIELD_U8(v13, 1168) = 0;
            FIELD_U32(v13, 1172) = 0;
            v15 = 1;
          }
          if ( v14 != 1 )
          {
            v16 = v14 - v15;
            v17 = 8 * v15;
            v18 = v11;
            do
            {
              v19 = v18 + 16;
              *(_BYTE *)(v18 + v17) = 0;
              v20 = v18 + v17;
              v16 -= 2;
              FIELD_U32(v20, 4) = 0;
              FIELD_U8(v20, 8) = 0;
              FIELD_U32(v20, 12) = 0;
              v18 = v19;
            }
            while ( v16 );
          }
        }
        v11 += 84;
      }
    }
    FIELD_U8(a1, 1516) = 1;
    return 1;
  }
  else
  {
    FIELD_U8(a1, 39) = 1;
    if ( *v5 )
    {
      v22 = sub_608C3C60();
      sub_608C411C((int)v22, a1 + 164);
      *v5 = 0;
    }
    result = FIELD_U8(a1, 37);
    if ( FIELD_U8(a1, 37) )
    {
      FIELD_U8(a1, 37) = 0;
      return 0;
    }
  }
  return result;
}
