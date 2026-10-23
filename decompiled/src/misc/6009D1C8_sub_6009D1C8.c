/* sub_6009D1C8
 * address: 0x6009D1C8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6009D1C8(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r5
  char v5; // r12
  int v6; // r5
  char v7; // r12
  unsigned int v8; // r1
  int v9; // r4

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2030]);
  if ( ((unsigned int)dword_60C81F18 & ~(1611256324 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81F14) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 248))(v2);
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2031]);
  if ( ((unsigned int)dword_60C81F18 & ~(1611256492 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81F14) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 248))(v4);
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2032]);
  if ( ((unsigned int)dword_60C81F18 & ~(1611256660 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C81F14) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 248))(v6);
  v8 = a1[1784];
  if ( v8 )
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
  else
    v9 = 0;
  if ( ((unsigned int)dword_60C81F18 & ~(1611256844 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v9 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C81F14) )
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 248))(v9);
  }
}
