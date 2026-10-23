/* STRM_BGM_SHADOW_CATCH_ref
 * address: 0x603E772C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall STRM_BGM_SHADOW_CATCH_ref(int a1)
{
  int ActorSlotChecked; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  FIELD_U32(a1, 112) = 0;
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
    FIELD_U32(ActorSlotChecked, 1236) |= 2u;
  v3 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v3 )
    FIELD_U32(v3, 1236) |= 2u;
  v4 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v4 )
    FIELD_U32(v4, 1236) |= 2u;
  v5 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( v5 )
    FIELD_U32(v5, 1236) |= 2u;
  FIELD_U8(dword_60C99D88, 30) = 1;
  sub_605E9BF8(dword_60CB1BE4);
  sub_60816F60(dword_60CC6B68, 8);
  sub_6080A1A0(SoundSystem_instance, 0);
  sub_6080A760(SoundSystem_instance, 0);
  sub_608091A4(SoundSystem_instance, "STRM_BGM_SHADOW_CATCH");
  return StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)&dword_60C99714);
}
