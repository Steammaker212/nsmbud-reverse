/* SE_OBJ_CMN_TOUCH_HARD_ref_6A8D78
 * address: 0x606A8D78   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_HARD_ref_6A8D78(int a1)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
  if ( FIELD_U8(a1, 6114) )
  {
    if ( !ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6108)) )
      goto LABEL_11;
    if ( FIELD_U8(a1, 6115) )
    {
      if ( sub_606C4014() )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( !sub_606AE22C() )
LABEL_11:
      (*(void (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 40))(
        Global_BasicSoundActor2,
        "SE_OBJ_CMN_TOUCH_HARD",
        a1 + 6100,
        1,
        0);
  }
  else if ( FIELD_U8(a1, 6113) && ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6108)) )
  {
    if ( FIELD_U8(a1, 6115) )
      sub_606C4000();
    else
      sub_606AE218();
  }
LABEL_12:
  FIELD_U8(a1, 6113) = 0;
  FIELD_U8(a1, 6114) = 0;
  return 6113;
}
