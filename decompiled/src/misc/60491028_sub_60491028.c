/* sub_60491028
 * address: 0x60491028   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60491028(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // lr
  float v5; // s0
  int v6; // r12
  unsigned int v7; // r3
  unsigned int v8; // r5
  int v9; // r6
  int v10; // r5
  int result; // r0

  v2 = a1[14];
  v3 = a1[17];
  v4 = dword_60C99DEC;
  v5 = FIELD_F32(dword_60C99DEC, 584);
  if ( v2 >= 1 )
  {
    v6 = FIELD_U8(dword_60C99DEC, 589);
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v7 < 0x43 )
        v8 = v7;
      if ( FIELD_U8(dword_60C99DEC, 580) == *(_DWORD *)(v3 + 4 * v8 + 3636) )
        break;
      if ( (int)++v7 >= v2 )
        goto LABEL_11;
    }
    v9 = FIELD_U8(dword_60C99DEC, 581);
    a1[11] = v9;
    v10 = FIELD_U8(v4, 583);
    a1[15] = v10;
    a1[12] = FIELD_U8(v4, 582);
    a1[13] = v7;
    if ( v2 > v6 && v10 == 3 )
    {
      v5 = 0.0;
      a1[11] = v9 + 1;
      a1[15] = 1;
    }
  }
LABEL_11:
  sub_60505054(v3, a1[11], a1[15], v5);
  result = *(_DWORD *)(a1[9] + 14228);
  if ( result != a1[10] )
  {
    sub_6050548C(a1[17]);
    a1[15] = 0;
    return 0;
  }
  return result;
}
