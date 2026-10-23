/* sub_6049B3F4
 * address: 0x6049B3F4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049B3F4(int *a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r1
  int v5; // r5
  _DWORD *v6; // r7
  int v7; // r0
  int v8; // r3
  int result; // r0

  v3 = a1 + 1334;
  v2 = a1[1334];
  v4 = FIELD_U8(dword_60CC6D8C, 17);
  if ( *((_BYTE *)v3 + 16) )
  {
    v5 = v2 + 1;
    *v3 = v2 + 1;
    if ( v4 )
    {
      if ( v2 < 5 )
        goto LABEL_13;
      v5 = 2;
    }
    else
    {
      if ( v2 < 3 )
        goto LABEL_13;
      v5 = 1;
    }
  }
  else
  {
    v5 = v2 - 1;
    *v3 = v2 - 1;
    if ( v4 )
    {
      if ( v2 > 2 )
        goto LABEL_13;
      v5 = 5;
    }
    else
    {
      if ( v2 > 1 )
        goto LABEL_13;
      v5 = 3;
    }
  }
  *v3 = v5;
LABEL_13:
  v6 = (_DWORD *)dword_60C99DEC;
  v7 = sub_603FCFF8(dword_60C99DEC + 16, v5);
  if ( v7 >= 0 )
  {
    if ( (unsigned int)v7 >= 6 )
      v7 = 0;
    goto LABEL_21;
  }
  v7 = 0;
  if ( v6[12] == v5 || (v7 = 1, v6[30] == v5) || (v7 = 2, v6[48] == v5) || (v8 = 5, v7 = 3, v6[66] == v5) )
LABEL_21:
    v8 = v6[18 * v7 + 10];
  sub_6047E0EC(&dword_60CA07E0, a1[923], 1, v8);
  sub_6049C484(a1, *v3);
  result = a1[924];
  FIELD_U8(result, 64) |= 1u;
  return result;
}
