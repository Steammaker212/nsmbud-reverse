/* sub_608E2260
 * address: 0x608E2260   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2260(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v7; // r2
  int v8; // r3
  int v9; // r0

  a2[75] = *a3;
  a2[76] = a3[1];
  v7 = a5[1];
  v8 = a5[2];
  v9 = a5[3];
  a2[79] = *a5;
  a2[80] = v7;
  a2[81] = v8;
  a2[82] = v9;
  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  return sub_6090E2D8(a2 + 70, a4[1], -1, 1, 0);
}
