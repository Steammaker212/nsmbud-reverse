/* sub_607CD8A8
 * address: 0x607CD8A8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CD8A8(int a1, _DWORD *a2)
{
  char v2; // r12
  int v3; // r4
  int v5; // r6
  int v6; // r7
  int (__fastcall **v7)(int, int *); // r0
  char v8; // r12
  int v9; // r0
  bool v10; // zf

  v3 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1618794692 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  v5 = 0;
  if ( !v3 )
    return v5;
  if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B404) != 1 )
    return v5;
  v6 = a2[16];
  if ( !v6 )
    return v5;
  v7 = *(int (__fastcall ***)(int, int *))v3;
  if ( a2[34] > 1u )
  {
    if ( ((int (__fastcall *)(int))v7[289])(v3) )
      return v5;
  }
  else if ( ((int (__fastcall *)(int))v7[290])(v3)
         || FIELD_U32(v3, 11360) == FIELD_U32(v6, 8)
         || sub_607781EC(dword_60CBFA90) )
  {
    return v5;
  }
  v9 = a2[35];
  v5 = 1;
  if ( (unsigned int)(v9 - 19) < 3 )
    return v5;
  v10 = v9 == 13;
  if ( v9 != 13 )
    v10 = v9 == 7;
  if ( !v10 )
    return 0;
  if ( ((unsigned int)&dword_60C7B37C & ~(1618794960 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !(**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) )
    v6 = 0;
  sub_607CDC8C(v3, v6, a2[35]);
  return 1;
}
