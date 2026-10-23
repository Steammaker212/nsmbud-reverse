/* sub_603E3E88
 * address: 0x603E3E88   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603E3E88()
{
  int ActorSlotChecked; // r0
  int result; // r0
  int v2; // r0
  int v3; // r0

  sub_603FBA90(dword_60C99DD4);
  STRM_BGM_DOWN_ref(dword_60CC6B68);
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    sub_603FBAD0();
    sub_6078AA44(PlayerMgr_instance);
  }
  if ( (sub_6078A4C8(PlayerMgr_instance, 0) != 1
     || (ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0)) == 0
     || (result = (*(int (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 656))(ActorSlotChecked)) == 0)
    && (!sub_6078A4C8(PlayerMgr_instance, 1)
     || (v2 = Player_getActorSlotChecked(PlayerMgr_instance, 1)) == 0
     || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 656))(v2)) == 0)
    && (sub_6078A4C8(PlayerMgr_instance, 2) != 1
     || (v3 = Player_getActorSlotChecked(PlayerMgr_instance, 2)) == 0
     || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 656))(v3)) == 0) )
  {
    result = sub_6078A4C8(PlayerMgr_instance, 3);
    if ( result == 1 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
      if ( result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)result + 656))(result);
    }
  }
  return result;
}
