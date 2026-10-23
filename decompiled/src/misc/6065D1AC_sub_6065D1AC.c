/* sub_6065D1AC
 * address: 0x6065D1AC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D1AC(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2

  v2 = a1 + 1608;
  sub_601601B8(a1 + 1608);
  sub_60160948(v2);
  v3 = a1[1732];
  a1[27] = v3;
  v4 = a1[1733];
  a1[28] = v4;
  v5 = a1[1734];
  a1[29] = v5;
  a1[146] = v3;
  a1[147] = v4;
  a1[148] = v5;
  a1[152] = v3;
  a1[153] = v4;
  a1[154] = v5;
  a1[25] = 0;
  a1[1735] = 0;
  return memset(a1 + 30, 0, 36);
}
