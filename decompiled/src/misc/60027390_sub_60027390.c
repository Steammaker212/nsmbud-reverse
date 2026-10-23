/* sub_60027390
 * address: 0x60027390   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60027390(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  char v5; // r12

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 8);
    FIELD_U32(a1, 6112) = v4;
    if ( !v4 )
      return;
  }
  else if ( !FIELD_U32(a1, 6112) )
  {
    return;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1) == 1 )
  {
    if ( ((unsigned int)&dword_60C7F664 & ~(1610773508 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
    {
      dword_60C7F660 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C7F664);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7F660) == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 684))(v3);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1) == 1 )
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C7F6A0);
    }
  }
}
