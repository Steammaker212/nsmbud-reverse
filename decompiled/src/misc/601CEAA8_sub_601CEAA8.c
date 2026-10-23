/* sub_601CEAA8
 * address: 0x601CEAA8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601CEAA8(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U8(dword_60C88BC8, 601) = 1;
  if ( sub_601916F4(dword_60C8996C) )
  {
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "F001";
    v2 = (_DWORD *)sub_601E03D4(7, 1, v9);
    a1[20] = v2[18];
    a1[21] = v2[19];
    a1[22] = v2[20];
    a1[258] = v2[21];
    a1[259] = v2[22];
    a1[260] = v2[24];
  }
  else
  {
    v3 = (_DWORD *)sub_6019172C(dword_60C8996C);
    a1[20] = v3[20];
    a1[21] = v3[21];
    a1[22] = v3[22];
    v4 = v3[44];
    v5 = v3[45];
    v6 = v3[46];
    a1[44] = v4;
    a1[45] = v5;
    a1[46] = v6;
    v7 = (_DWORD *)sub_601E0040(a1 + 258);
    a1[245] = *v7;
    a1[246] = v7[1];
    a1[247] = v7[2];
    sub_601C53E0(a1);
  }
  return sub_601C503C(a1);
}
