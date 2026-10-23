/* sub_60779690
 * address: 0x60779690   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60779690(int a1)
{
  int ActorSlotChecked; // r0
  int v3; // r1
  _BOOL4 result; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
    {
      v3 = FIELD_U32(ActorSlotChecked, 1228);
      if ( (FIELD_U8(a1, 60) & 0x40) != 0 )
      {
        result = 0;
        if ( (v3 & 0xC000000) == 0x4000000 )
          return result;
      }
      else
      {
        result = 0;
        if ( (v3 & 0x8000000) == 0 )
          return result;
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v5 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v5 )
    {
      v6 = FIELD_U32(v5, 1228);
      if ( (FIELD_U8(a1, 60) & 0x40) != 0 )
      {
        result = 0;
        if ( (v6 & 0xC000000) == 0x4000000 )
          return result;
      }
      else
      {
        result = 0;
        if ( (v6 & 0x8000000) == 0 )
          return result;
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v7 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v7 )
    {
      v8 = FIELD_U32(v7, 1228);
      if ( (FIELD_U8(a1, 60) & 0x40) != 0 )
      {
        result = 0;
        if ( (v8 & 0xC000000) == 0x4000000 )
          return result;
      }
      else
      {
        result = 0;
        if ( (v8 & 0x8000000) == 0 )
          return result;
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0 )
    return 1;
  v9 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( !v9 )
    return 1;
  v10 = FIELD_U32(v9, 1228);
  if ( (FIELD_U8(a1, 60) & 0x40) == 0 )
    return (v10 & 0x8000000) != 0;
  result = 0;
  if ( (v10 & 0xC000000) != 0x4000000 )
    return 1;
  return result;
}
