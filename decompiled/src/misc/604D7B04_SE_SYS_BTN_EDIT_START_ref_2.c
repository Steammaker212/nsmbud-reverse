/* SE_SYS_BTN_EDIT_START_ref_2
 * address: 0x604D7B04   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BTN_EDIT_START_ref_2(int a1)
{
  char v2; // r1
  int result; // r0
  int v4; // r0
  int v5; // r0

  v2 = FIELD_U8(a1, 5725);
  result = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v4 = FIELD_U32(a1, 4668);
    if ( v4 == 2 )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      v5 = 3;
    }
    else
    {
      if ( v4 != 1 )
      {
LABEL_9:
        sub_60502694(a1 + 3640);
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA4038);
        return 1;
      }
      if ( FIELD_U8(a1, 6144) )
      {
        sub_60807EF0(SoundSystem_instance, "SE_SYS_BTN_EDIT_START", 0, 1);
        v5 = 4;
      }
      else
      {
        sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
        v5 = 2;
      }
    }
    FIELD_U32(a1, 6128) = v5;
    goto LABEL_9;
  }
  return result;
}
