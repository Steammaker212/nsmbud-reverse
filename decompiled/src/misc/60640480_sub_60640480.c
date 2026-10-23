/* sub_60640480
 * address: 0x60640480   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60640480(int a1)
{
  int v2; // r0
  bool v3; // zf
  int ActorSlotChecked; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int result; // r0
  bool v12; // zf

  v2 = FIELD_U32(a1, 6968);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(a1, 6984) == 2;
  if ( !v3 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
    {
      if ( sub_6078663C(ActorSlotChecked + 688) == 1 )
        FIELD_U8(a1, 7016) = 1;
    }
  }
  v5 = FIELD_U32(a1, 6972);
  v6 = v5 == 0;
  if ( v5 )
    v6 = FIELD_U32(a1, 6988) == 2;
  if ( !v6 )
  {
    v7 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v7 )
    {
      if ( sub_6078663C(v7 + 688) == 1 )
        FIELD_U8(a1, 7017) = 1;
    }
  }
  v8 = FIELD_U32(a1, 6976);
  v9 = v8 == 0;
  if ( v8 )
    v9 = FIELD_U32(a1, 6992) == 2;
  if ( !v9 )
  {
    v10 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v10 )
    {
      if ( sub_6078663C(v10 + 688) == 1 )
        FIELD_U8(a1, 7018) = 1;
    }
  }
  result = FIELD_U32(a1, 6980);
  v12 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 6996);
    v12 = result == 2;
  }
  if ( !v12 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
    {
      result = sub_6078663C(result + 688);
      if ( result == 1 )
      {
        FIELD_U8(a1, 7019) = 1;
        return 7019;
      }
    }
  }
  return result;
}
