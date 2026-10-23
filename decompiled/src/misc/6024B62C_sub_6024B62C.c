/* sub_6024B62C
 * address: 0x6024B62C   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024B62C(unsigned int *a1)
{
  int v2; // r4
  int v3; // r6
  char v4; // r12
  unsigned int v5; // r1
  int v6; // r6
  char v7; // r12
  unsigned int v8; // r1
  int v9; // r6
  char v10; // r12
  unsigned int v11; // r1
  int v12; // r5
  char v13; // r12

  v2 = 0;
  if ( !*a1 )
    return v2;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *a1);
  if ( !v3 )
    return v2;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613018744 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8DD50) == 1 && !FIELD_U8(v3, 6324) )
    return v2;
  v5 = a1[1];
  if ( !v5 )
    return v2;
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
  if ( !v6 )
    return v2;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613018916 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DD50) == 1 && !FIELD_U8(v6, 6324) )
    return v2;
  v8 = a1[2];
  if ( !v8 )
    return v2;
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
  if ( !v9 )
    return v2;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613019088 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8DD50) == 1 && !FIELD_U8(v9, 6324) )
    return v2;
  v11 = a1[3];
  if ( !v11 )
    return v2;
  v12 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
  if ( !v12 )
    return v2;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613019260 << v13) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C8DD50) != 1 )
    return 1;
  if ( FIELD_U8(v12, 6324) )
    return 1;
  return v2;
}
