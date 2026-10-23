/* sub_600D3BA8
 * address: 0x600D3BA8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D3BA8(int a1)
{
  float *v1; // r5
  int ActorSlotChecked; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4
  int result; // r0
  int v9; // r4

  v1 = (float *)(a1 + 6332);
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    v3 = ActorSlotChecked;
    if ( ActorSlotChecked )
    {
      ((void (__fastcall *)(int, float, float))loc_60768E4C)(ActorSlotChecked, *v1 + -64.0, 3.0);
      FIELD_U32(v3, 1236) |= 2u;
      FIELD_U32(v3, 1220) |= 0x10000000u;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v4 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    v5 = v4;
    if ( v4 )
    {
      ((void (__fastcall *)(int, float, float))loc_60768E4C)(v4, *v1 + -64.0, 3.0);
      FIELD_U32(v5, 1236) |= 2u;
      FIELD_U32(v5, 1220) |= 0x10000000u;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v6 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    v7 = v6;
    if ( v6 )
    {
      ((void (__fastcall *)(int, float, float))loc_60768E4C)(v6, *v1 + -64.0, 3.0);
      FIELD_U32(v7, 1236) |= 2u;
      FIELD_U32(v7, 1220) |= 0x10000000u;
    }
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    v9 = result;
    if ( result )
    {
      ((void (__fastcall *)(int, float, float))loc_60768E4C)(result, *v1 + -64.0, 3.0);
      FIELD_U32(v9, 1236) |= 2u;
      result = FIELD_U32(v9, 1220) | 0x10000000;
      FIELD_U32(v9, 1220) = result;
    }
  }
  return result;
}
