/* sub_606DCCCC
 * address: 0x606DCCCC   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_606DCCCC()
{
  int (__fastcall ***ActorSlotChecked)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r1
  _BOOL4 result; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12
  int v6; // r1
  int (__fastcall ***v7)(_DWORD, int *); // r4
  char v8; // r12
  int v9; // r1
  int (__fastcall ***v10)(_DWORD, int *); // r4
  char v11; // r12

  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return 0;
  ActorSlotChecked = (int (__fastcall ***)(_DWORD, int *))Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808656 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
  {
    dword_60C9D3D0 = (int)&off_60BFB878;
    _cxa_guard_release(&dword_60C9D3D4);
  }
  if ( !ActorSlotChecked
    || (**ActorSlotChecked)(ActorSlotChecked, &dword_60C9D3D0) != 1
    || (v2 = sub_60768FC4(ActorSlotChecked, 10), result = 1, !v2) )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808824 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( !v4 || (**v4)(v4, &dword_60C9D3D0) != 1 || (v6 = sub_60768FC4(v4, 10), result = 1, !v6) )
    {
      v7 = (int (__fastcall ***)(_DWORD, int *))Player_getActorSlotChecked(PlayerMgr_instance, 2);
      if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808992 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
      {
        dword_60C9D3D0 = (int)&off_60BFB878;
        _cxa_guard_release(&dword_60C9D3D4);
      }
      if ( !v7 || (**v7)(v7, &dword_60C9D3D0) != 1 || (v9 = sub_60768FC4(v7, 10), result = 1, !v9) )
      {
        v10 = (int (__fastcall ***)(_DWORD, int *))Player_getActorSlotChecked(PlayerMgr_instance, 3);
        if ( ((unsigned int)&dword_60C9D3D4 & ~(1617809160 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
        {
          dword_60C9D3D0 = (int)&off_60BFB878;
          _cxa_guard_release(&dword_60C9D3D4);
        }
        if ( v10 && (**v10)(v10, &dword_60C9D3D0) == 1 )
          return sub_60768FC4(v10, 10) != 0;
        return 0;
      }
    }
  }
  return result;
}
