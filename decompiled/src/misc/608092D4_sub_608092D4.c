/* sub_608092D4
 * address: 0x608092D4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608092D4(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v5 = a1 + 15;
  v4 = a1[15];
  if ( v4 )
    sub_608AF208(v4, 0);
  v6 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 24))(a1, v5, a2);
  sub_60807574(a1);
  if ( v6 == 1 )
  {
    a1[25] = 0;
    nn__os__GetSystemTick((nn__os *)v9);
    v7 = v9[0];
    a1[27] = v9[1];
    a1[26] = v7;
    a1[29] = 40;
    *((_BYTE *)a1 + 120) = 0;
    a1[28] = 1065353216;
    sub_6080C38C(dword_60CC6B0C, 5, 0.2);
  }
  return v6;
}
