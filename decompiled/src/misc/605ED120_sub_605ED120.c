/* sub_605ED120
 * address: 0x605ED120   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED120(int a1)
{
  int v2; // r2
  unsigned __int8 *v3; // r10
  unsigned int v4; // r9
  unsigned int v5; // r8
  unsigned int v7; // r0
  int v8; // r7
  _DWORD *v9; // r1
  int v10; // r2
  int v11; // r6
  int v12; // r3
  unsigned int v13; // r5
  unsigned int v14; // r6
  int v15; // r1

  v3 = (unsigned __int8 *)(a1 + 10566);
  v2 = FIELD_U8(a1, 10566);
  if ( !FIELD_U8(a1, 10566) && FIELD_U8(a1, 10567) )
    goto LABEL_23;
  v4 = FIELD_U8(a1, 10569);
  v5 = FIELD_U8(a1, 10570);
  if ( v4 < v5 && --FIELD_U8(a1, 10568) == 0 )
  {
    v7 = v4;
    if ( v4 >= 0xF )
      v7 = 0;
    sub_605ECF7C((_DWORD *)(a1 + 24 * v7 + 6108), (Vec3 *)(a1 + 108), v2 != 0, FIELD_U8(a1, 29));
    LOBYTE(v4) = v4 + 1;
    FIELD_U8(a1, 10568) = 24;
    FIELD_U8(a1, 10569) = v4;
    v2 = *v3;
  }
  v8 = 1;
  if ( !v2 )
  {
    if ( (_BYTE)v4 )
    {
      v9 = (_DWORD *)(a1 + 6108);
      LOWORD(v2) = FIELD_U16(a1, 10564) - 32;
      do
      {
        v10 = v2 & 0x1FF;
        v11 = a1 + 8 * v10;
        v2 = v10 - 24;
        v12 = FIELD_U32(v11, 6472);
        *v9 = FIELD_U32(v11, 6468);
        v9[1] = v12;
        v9[2] = 1141473280;
        v9 += 6;
      }
      while ( (unsigned int)v9 < a1 + 24 * (unsigned int)(unsigned __int8)v4 + 6108 );
      v8 = *v3;
    }
    else
    {
      v8 = 0;
    }
  }
  v13 = a1 + 6108;
  v14 = FIELD_U32(a1, 6104);
  if ( a1 + 6108 < v14 )
  {
    do
    {
      v15 = v8;
      if ( v8 )
        v15 = 1;
      sub_605ED490(v13, v15, v2);
      v13 += 24;
    }
    while ( v13 < v14 );
    v8 = *v3;
  }
  if ( (unsigned __int8)v4 >= v5 && v8 )
LABEL_23:
    FIELD_U8(a1, 19) = 1;
  return 1;
}
