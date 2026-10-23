/* sub_608091F4
 * address: 0x608091F4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608091F4(_DWORD *a1, int a2, int a3, int a4, float a5, float a6, int a7, int a8)
{
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r7
  int v17; // r0
  _DWORD v19[14]; // [sp+0h] [bp-38h] BYREF

  v15 = a1 + 15;
  v14 = a1[15];
  if ( v14 )
    sub_608AF208(v14, 0);
  v16 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 24))(a1, v15, a2);
  sub_60807574(a1);
  if ( a8 >= 0 && v16 == 1 )
  {
    a1[25] = a8;
    nn__os__GetSystemTick((nn__os *)v19);
    v17 = v19[0];
    a1[27] = v19[1];
    a1[26] = v17;
    a1[29] = a4;
    *((_BYTE *)a1 + 120) = a7;
    if ( a7 )
      byte_60CC6AFD = 1;
    *((float *)a1 + 28) = a6;
    sub_6080C38C(dword_60CC6B0C, a3, a5);
  }
  return v16;
}
