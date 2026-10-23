/* sub_60973CF8
 * address: 0x60973CF8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60973CF8(int *a1, int *a2, int a3, __int16 a4, int a5, int a6)
{
  int v8; // r1
  int v9; // r2
  int v11[7]; // [sp+1Ch] [bp-1Ch] BYREF

  sub_6091FDB0((int)a1, 1, a4, a5, a6, 1, 1, 0, 0, 1);
  v8 = a2[1];
  v9 = a2[2];
  v11[0] = *a2;
  v11[1] = v8;
  v11[2] = v9;
  sub_609208DC(a1, v11, 0);
  sub_60920168(a1);
  return sub_60916E94(dword_60CCFC8C, (int)a1);
}
