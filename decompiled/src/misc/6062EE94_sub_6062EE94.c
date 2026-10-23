/* sub_6062EE94
 * address: 0x6062EE94   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062EE94(int a1, int a2)
{
  char v2; // r12
  int v3; // r4

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60CB3FC8 & ~(1617096364 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB3FC8) )
  {
    dword_60CB3FC4 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB3FC8);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB3FC4) == 1 )
    StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60CB3FA4);
  return 1;
}
