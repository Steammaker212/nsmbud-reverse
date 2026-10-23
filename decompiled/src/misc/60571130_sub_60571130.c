/* sub_60571130
 * address: 0x60571130   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60571130()
{
  int (__fastcall ****v0)(_DWORD, int *); // r5
  char v1; // r12
  int (__fastcall ***v2)(_DWORD, int *); // r6
  int v3; // r4
  int v4; // r1
  _BOOL4 result; // r0
  int v6; // r4
  int v7; // r1
  int v8; // r4
  int v9; // r1
  int v10; // r4

  v0 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                               ActorMgr__instance,
                                               854,
                                               *(_DWORD *)(ActorMgr__instance + 27172));
  if ( v0 == *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180) )
  {
LABEL_8:
    v3 = FIELD_U32(PlayerMgr_instance, 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616319068 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v3
      || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) != 1
      || (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
      || (v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1204))(v3), result = 0, !v4) )
    {
      v6 = FIELD_U32(PlayerMgr_instance, 52);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616319256 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v6
        || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) != 1
        || (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
        || (v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1204))(v6), result = 0, !v7) )
      {
        v8 = FIELD_U32(PlayerMgr_instance, 56);
        if ( ((unsigned int)&dword_60C7B37C & ~(1616319444 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !v8
          || (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) != 1
          || (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
          || (v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 1204))(v8), result = 0, !v9) )
        {
          v10 = FIELD_U32(PlayerMgr_instance, 60);
          if ( ((unsigned int)&dword_60C7B37C & ~(1616319632 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          return !v10
              || (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B378) != 1
              || (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0
              || (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1204))(v10) == 0;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v2 = *v0;
      if ( ((unsigned int)&dword_60C7B364 & ~(1616318924 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v2 && (**v2)(v2, &StageActor_RTTI) )
        return 0;
      v0 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(ActorMgr__instance, 854, (int)(v0 + 1));
      if ( v0 == *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180) )
        goto LABEL_8;
    }
  }
  return result;
}
