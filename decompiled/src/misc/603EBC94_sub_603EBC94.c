/* sub_603EBC94
 * address: 0x603EBC94   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603EBC94()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  sub_603FBA90(dword_60C99DD4);
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    sub_603FBAD0();
    sub_6078AA44(PlayerMgr_instance);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      (*(void (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 652))(ActorSlotChecked);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 652))(v1);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 652))(v2);
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)result + 652))(result);
  }
  return result;
}
