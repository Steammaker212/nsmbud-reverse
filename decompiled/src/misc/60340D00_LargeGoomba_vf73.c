/* LargeGoomba_vf73
 * address: 0x60340D00   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf73(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614023964 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C7B378);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  a1[1580] = FIELD_U32(v6, 108);
  a1[1597] = FIELD_S8(v6, 84);
  v7 = dword_60C7F52C;
  v8 = sub_602A3358((int)a1, (int)v5);
  sub_60022760(0.0, 24.0, v7, (int)a1, v8, a1[1597]);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 664))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 676))(a1);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C94644);
  return 1;
}
