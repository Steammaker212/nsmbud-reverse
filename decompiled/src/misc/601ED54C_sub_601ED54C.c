/* sub_601ED54C
 * address: 0x601ED54C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ED54C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  a1[106] = 4;
  v2 = sub_601DFFE4((int)(a1 + 97));
  a1[29] = 0;
  a1[30] = 0;
  a1[31] = 0;
  v3 = (_DWORD *)sub_60178694(v2, a1[106]);
  a1[100] = v3[21];
  a1[101] = v3[22];
  a1[102] = v3[24];
  v4 = (_DWORD *)sub_601E0040((int)(a1 + 100));
  a1[82] = *v4;
  a1[83] = v4[1];
  a1[84] = v4[2];
  a1[103] = sub_608332B0(a1 + 20, a1 + 82);
  sub_601ECD14((int)a1, 0);
  a1[94] = 40;
  return 40;
}
