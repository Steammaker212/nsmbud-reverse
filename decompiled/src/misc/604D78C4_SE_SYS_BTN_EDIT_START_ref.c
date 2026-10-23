/* SE_SYS_BTN_EDIT_START_ref
 * address: 0x604D78C4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BTN_EDIT_START_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  StateBase *v4; // r1
  int v6; // r0

  v2 = 0;
  if ( !FIELD_U8(a1, 4683) )
    return v2;
  v3 = FIELD_U32(a1, 4668);
  if ( v3 == 2 )
  {
    v2 = 1;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
    FIELD_U32(a1, 6128) = 3;
    StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA4038);
    return v2;
  }
  if ( v3 == 1 )
  {
    if ( FIELD_U8(a1, 6144) )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_BTN_EDIT_START", 0, 1);
      v6 = 4;
    }
    else
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      v6 = 2;
    }
    FIELD_U32(a1, 6128) = v6;
    v4 = (StateBase *)&unk_60CA4038;
    goto LABEL_12;
  }
  if ( v3 )
    return v2;
  FIELD_U32(a1, 6128) = 5;
  v4 = (StateBase *)&unk_60CA3FF8;
LABEL_12:
  StateMgr__changeState((StateMgr *)(a1 + 20), v4);
  return 1;
}
