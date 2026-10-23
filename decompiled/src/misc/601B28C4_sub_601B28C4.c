/* sub_601B28C4
 * address: 0x601B28C4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B28C4(int *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  int *v7; // r0
  signed int v9; // [sp+0h] [bp-18h] BYREF
  int v10[5]; // [sp+4h] [bp-14h] BYREF

  v2 = a1[280];
  if ( (v2 & 0x1000) != 0 )
  {
    v10[0] = 0;
    v9 = 16384000;
    sub_6083224C(a1 + 305, v10, &v9);
    v6 = a1[305];
    v7 = a1 + 45;
    if ( v6 )
    {
      *v7 += v6;
    }
    else
    {
      v10[0] = 0x20000000;
      v9 = 0x100000;
      sub_608322C0(v7, a1 + 250, v10, &v9);
      if ( a1[45] == a1[250] )
      {
        v5 = a1[280] & 0xFFFFEFFF;
        goto LABEL_13;
      }
    }
  }
  else if ( (v2 & 0x180000) != 0 )
  {
    v3 = sub_601C6BF0(a1);
    v4 = v3 + 460;
    if ( (v2 & 0x100000) != 0 )
      v4 = v3 + 472;
    v10[0] = FIELD_U32(v4, 4);
    v9 = FIELD_U32(v4, 8);
    sub_608322C0(a1 + 45, a1 + 250, v10, &v9);
    if ( a1[45] == a1[250] )
    {
      v5 = a1[280] & 0xFFE7FFFF;
LABEL_13:
      a1[280] = v5;
    }
  }
  else if ( (v2 & 0x40000) == 0 )
  {
    v10[0] = 805306368;
    v9 = 0x100000;
    sub_608322C0(a1 + 45, a1 + 250, v10, &v9);
  }
  return sub_601C61A0(a1, a1[a1[312] + 230]);
}
