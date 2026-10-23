/* STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref
 * address: 0x603E59F8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  sub_603FBB0C(dword_60C99DD4);
  sub_608091A4(SoundSystem_instance, "STRM_BGM_COURSE_OUT_ALL_BUBBLE");
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      (*(void (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 1356))(ActorSlotChecked);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 1356))(v1);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1356))(v2);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    v3 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1356))(v3);
  }
  return sub_605E9C7C(dword_60CB1BE4);
}
