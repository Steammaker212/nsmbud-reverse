/* sub_607CACC4
 * address: 0x607CACC4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CACC4(_DWORD *a1, float a2, float a3, float a4, float a5)
{
  int v6; // r7
  int *v7; // r0
  int *v8; // r0
  int result; // r0

  v6 = a1[7];
  v7 = &dword_60CBFBC4[13 * a1[141]];
  a1[49] = v7[12];
  a1[50] = v7[12];
  sub_607931B8((int)a1, *((float *)v7 + 9), a2, 0.0, a5);
  v8 = &dword_60CBFBC4[13 * v6];
  a1[49] = v8[12];
  result = v8[12];
  a1[50] = result;
  return result;
}
