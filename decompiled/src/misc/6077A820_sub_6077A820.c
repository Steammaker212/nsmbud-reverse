/* sub_6077A820
 * address: 0x6077A820   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6077A820()
{
  int ActorSlotChecked; // r0
  int v1; // r1
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r1

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
    {
      v1 = FIELD_U32(ActorSlotChecked, 1232);
      if ( (v1 & 0x100000) == 0 )
        FIELD_U32(ActorSlotChecked, 1232) = v1 | 0x4000000;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v2 )
    {
      v3 = FIELD_U32(v2, 1232);
      if ( (v3 & 0x100000) == 0 )
        FIELD_U32(v2, 1232) = v3 | 0x4000000;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v4 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v4 )
    {
      v5 = FIELD_U32(v4, 1232);
      if ( (v5 & 0x100000) == 0 )
        FIELD_U32(v4, 1232) = v5 | 0x4000000;
    }
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
    {
      v7 = FIELD_U32(result, 1232);
      if ( (v7 & 0x100000) == 0 )
        FIELD_U32(result, 1232) = v7 | 0x4000000;
    }
  }
  return result;
}
