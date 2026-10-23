/* sub_603EB98C
 * address: 0x603EB98C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603EB98C()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
    (*(void (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 1348))(ActorSlotChecked);
  v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 1348))(v1);
  v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1348))(v2);
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 1348))(result);
  return result;
}
