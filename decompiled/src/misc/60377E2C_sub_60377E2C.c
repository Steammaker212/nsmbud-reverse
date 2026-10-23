/* sub_60377E2C
 * address: 0x60377E2C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60377E2C(int a1)
{
  int v2; // r4
  int v3; // r0
  char v4; // r12
  int v5; // r5
  int v6; // r0
  bool v7; // zf

  v2 = 1;
  v3 = FIELD_U32(dword_60C995D0, 32);
  if ( v3 && v3 == a1 + 128 || v3 && v3 == a1 + 220 || sub_60777CD0(dword_60CBFA90) )
    return v2;
  v5 = FIELD_U32(a1, 104);
  if ( ((unsigned int)&dword_60C906C0 & ~(1614249628 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C0) )
  {
    dword_60C906BC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C906C0);
  }
  v2 = 0;
  if ( !v5 )
    return v2;
  v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C906BC);
  v7 = v6 == 1;
  if ( v6 == 1 )
    v7 = FIELD_U8(v5, 19) == 0;
  if ( !v7 )
    return v2;
  else
    return sub_602A5688(v5);
}
