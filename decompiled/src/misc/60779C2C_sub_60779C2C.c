/* sub_60779C2C
 * address: 0x60779C2C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60779C2C()
{
  int ActorSlotChecked; // r0
  bool v1; // zf
  char v2; // r1
  _BOOL4 result; // r0
  int v4; // r0
  bool v5; // zf
  char v6; // r1
  int v7; // r0
  bool v8; // zf
  char v9; // r1
  int v10; // r0
  bool v11; // zf

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0 )
    goto LABEL_24;
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  v1 = ActorSlotChecked == 0;
  if ( ActorSlotChecked )
    v1 = (FIELD_U8(ActorSlotChecked, 1231) & 4) == 0;
  if ( v1 || (v2 = FIELD_U8(ActorSlotChecked, 1233), result = 0, (v2 & 1) != 0) )
  {
LABEL_24:
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0 )
      goto LABEL_25;
    v4 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    v5 = v4 == 0;
    if ( v4 )
      v5 = (FIELD_U8(v4, 1231) & 4) == 0;
    if ( v5 || (v6 = FIELD_U8(v4, 1233), result = 0, (v6 & 1) != 0) )
    {
LABEL_25:
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0 )
        goto LABEL_19;
      v7 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      v8 = v7 == 0;
      if ( v7 )
        v8 = (FIELD_U8(v7, 1231) & 4) == 0;
      if ( v8 || (v9 = FIELD_U8(v7, 1233), result = 0, (v9 & 1) != 0) )
      {
LABEL_19:
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0 )
          return 1;
        v10 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
        v11 = v10 == 0;
        if ( v10 )
          v11 = (FIELD_U8(v10, 1231) & 4) == 0;
        return v11 || (FIELD_U8(v10, 1233) & 1) != 0;
      }
    }
  }
  return result;
}
