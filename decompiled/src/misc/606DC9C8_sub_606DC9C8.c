/* sub_606DC9C8
 * address: 0x606DC9C8   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_606DC9C8()
{
  int ActorSlotChecked; // r4
  char v1; // r12
  int v2; // r4
  char v3; // r12
  int v4; // r4
  char v5; // r12
  int v6; // r4
  char v7; // r12

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1617807884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( ActorSlotChecked
      && (**(int (__fastcall ***)(int, int *))ActorSlotChecked)(ActorSlotChecked, &dword_60C9D3D0) == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 744))(ActorSlotChecked);
    }
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808040 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C9D3D0) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 744))(v2);
    v4 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808196 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C9D3D0) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 744))(v4);
    v6 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1617808352 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( v6 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C9D3D0) == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 744))(v6);
    }
  }
}
