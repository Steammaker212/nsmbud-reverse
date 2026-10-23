/* sub_607B6228
 * address: 0x607B6228   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B6228(int *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r0
  int *v3; // r5
  int v4; // r1
  unsigned int v5; // r0

  v2 = sub_6079D9A4((int)a1);
  v3 = a1 + 3025;
  if ( v2 )
    sub_60021570((int)v2[157], a1[3025]);
  sub_60021570(a1[157], *v3);
  sub_602360C0((int)(a1 + 3121));
  a1[3116] = 0;
  a1[3115] = 0;
  *v3 = 0;
  a1[39] = 0;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  v4 = a1[306];
  v5 = a1[303] & 0xFFFFFFA3;
  a1[307] &= 0xFFFF3FFF;
  a1[303] = v5;
  a1[306] = v4 & 0xFFFFF22B;
  a1[309] &= ~0x10u;
  return sub_607957D4((int)a1, 0);
}
