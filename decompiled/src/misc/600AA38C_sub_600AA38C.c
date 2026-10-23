/* sub_600AA38C
 * address: 0x600AA38C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600AA38C(int a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD *v4; // r6
  int v5; // r5
  char v6; // r12
  int v7; // r5
  char v8; // r12

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8640));
  if ( ((unsigned int)dword_60C81F18 & ~(1611310028 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  v4 = (_DWORD *)(a1 + 7124);
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81F14) == 1 )
  {
    FIELD_U32(v2, 80) = FIELD_U32(a1, 80);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 236))(v2, *v4);
    FIELD_F32(v2, 116) = FIELD_F32(a1, 116) + 600.0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 216))(v2);
  }
  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8644));
  if ( ((unsigned int)dword_60C81F18 & ~(1611310244 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81F14) == 1 )
  {
    FIELD_U32(v5, 80) = FIELD_U32(a1, 80);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 236))(v5, *v4);
    FIELD_F32(v5, 116) = FIELD_F32(a1, 116) + 600.0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 216))(v5);
  }
  v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8648));
  if ( ((unsigned int)dword_60C81F18 & ~(1611310456 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v7 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81F14) == 1 )
    {
      FIELD_U32(v7, 80) = FIELD_U32(a1, 80);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 236))(v7, *v4);
      FIELD_F32(v7, 116) = FIELD_F32(a1, 116) + 600.0;
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 216))(v7);
    }
  }
}
