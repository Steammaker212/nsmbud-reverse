/* sub_6077A004
 * address: 0x6077A004   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077A004(int a1, int a2)
{
  int v2; // r5
  int v4; // r0
  bool v5; // zf
  int ActorSlotChecked; // r0

  v4 = sub_60788F54(PlayerMgr_instance, a2);
  v5 = v4 == 0;
  if ( v4 )
  {
    v2 = 1;
    v5 = (FIELD_U8(v4, 1234) & 0x10) == 0;
  }
  if ( v5 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, a2);
    v2 = 0;
    if ( ActorSlotChecked )
      sub_60768A5C(ActorSlotChecked);
  }
  return v2;
}
