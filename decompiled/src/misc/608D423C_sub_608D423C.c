/* sub_608D423C
 * address: 0x608D423C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D423C(_DWORD *a1, int a2, int a3)
{
  int v3; // r10
  int v4; // lr
  int v5; // r5
  _DWORD *v6; // r12
  int v7; // r8
  int v8; // r9
  _DWORD *v9; // r1
  int result; // r0
  int v11; // r5

  v3 = 0;
  v4 = a1[134];
  if ( v4 == a2 )
    goto LABEL_10;
  v3 = 1;
  v6 = a1 + 136;
  v5 = a1[136];
  if ( v5 == a2 )
    goto LABEL_10;
  v3 = 2;
  v7 = a1[138];
  if ( v7 == a2
    || (v3 = 3, v8 = a1[140], v8 == a2)
    || (v3 = 4, a1[142] == a2)
    || (v3 = 5, a1[144] == a2)
    || (v3 = 6, a1[146] == a2)
    || (v3 = 7, a1[148] == a2)
    || (v3 = 8, a1[150] == a2) )
  {
LABEL_10:
    v9 = &a1[2 * v3];
    result = v9[135];
    v9[135] = a3;
    return result;
  }
  if ( v4 == -1 )
  {
    v11 = 0;
    v6 = a1 + 134;
    goto LABEL_29;
  }
  if ( v5 == -1 )
  {
    v11 = 1;
    goto LABEL_29;
  }
  if ( v7 == -1 )
  {
    v11 = 2;
    v6 = a1 + 138;
    goto LABEL_29;
  }
  if ( v8 == -1 )
  {
    v11 = 3;
    v6 = a1 + 140;
    goto LABEL_29;
  }
  if ( a1[142] == -1 )
  {
    v6 = a1 + 142;
    v11 = 4;
    goto LABEL_29;
  }
  if ( a1[144] == -1 )
  {
    v6 = a1 + 144;
    v11 = 5;
    goto LABEL_29;
  }
  if ( a1[146] == -1 )
  {
    v6 = a1 + 146;
    v11 = 6;
    goto LABEL_29;
  }
  if ( a1[148] == -1 )
  {
    v6 = a1 + 148;
    v11 = 7;
    goto LABEL_29;
  }
  if ( a1[150] == -1 )
  {
    v11 = 8;
    v6 = a1 + 150;
LABEL_29:
    *v6 = a2;
    a1[2 * v11 + 135] = a3;
  }
  return 0;
}
