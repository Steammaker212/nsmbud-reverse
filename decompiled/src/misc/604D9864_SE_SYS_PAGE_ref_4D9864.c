/* SE_SYS_PAGE_ref_4D9864
 * address: 0x604D9864   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4D9864(int a1)
{
  int v2; // r4
  StateBase *v3; // r1
  StateBase *v4; // r1

  v2 = 0;
  if ( FIELD_U8(a1, 4735) )
  {
    switch ( FIELD_U32(a1, 4720) )
    {
      case 0:
        v3 = (StateBase *)&unk_60CA4198;
        goto LABEL_8;
      case 1:
        v3 = (StateBase *)&unk_60CA4158;
LABEL_8:
        StateMgr__changeState((StateMgr *)(a1 + 20), v3);
        return 1;
      case 2:
        v2 = 1;
        FIELD_U32(a1, 4720) = 1;
        v4 = (StateBase *)&unk_60CA40D8;
        break;
      case 3:
        if ( FIELD_S32(a1, 13276) > 1 )
          return v2;
        v2 = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
        v4 = (StateBase *)&unk_60CA4238;
        break;
      case 4:
        if ( FIELD_S32(a1, 13276) < 1 )
          return v2;
        v2 = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
        v4 = (StateBase *)&unk_60CA41D8;
        break;
      default:
        return v2;
    }
    StateMgr__changeState((StateMgr *)(a1 + 20), v4);
  }
  return v2;
}
