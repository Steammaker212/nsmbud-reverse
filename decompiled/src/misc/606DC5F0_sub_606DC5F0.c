/* sub_606DC5F0
 * address: 0x606DC5F0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor **sub_606DC5F0()
{
  char v0; // r12
  Actor **v1; // r5
  Actor **result; // r0
  Actor *v3; // r7
  int ProfileId; // r0
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf

  v1 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( result = *(Actor ***)(ActorMgr__instance + 27180); v1 != result; result = *(Actor ***)(ActorMgr__instance + 27180) )
  {
    v3 = *v1;
    if ( *v1 && !FIELD_U8(v3, 0x13) )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617807184 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI) == 1 )
      {
        ProfileId = Actor__getProfileId(v3);
        v5 = ProfileId == 320;
        if ( ProfileId != 320 )
          v5 = ProfileId == 591;
        if ( v5 )
          goto LABEL_27;
        v6 = ProfileId == 592;
        if ( ProfileId != 592 )
          v6 = ProfileId == 854;
        if ( v6 )
          goto LABEL_27;
        v7 = ProfileId == 593;
        if ( ProfileId != 593 )
          v7 = ProfileId == 594;
        if ( v7 )
          goto LABEL_27;
        v8 = ProfileId == 595;
        if ( ProfileId != 595 )
          v8 = ProfileId == 596;
        if ( v8 )
          goto LABEL_27;
        v9 = ProfileId == 597;
        if ( ProfileId != 597 )
          v9 = ProfileId == 598;
        if ( v9 )
          goto LABEL_27;
        v10 = ProfileId == 599;
        if ( ProfileId != 599 )
          v10 = ProfileId == 853;
        if ( v10 || ProfileId == 601 )
        {
LABEL_27:
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v3, 0x0) + 104))(v3);
          FIELD_U8(v3, 0x13) = 1;
        }
      }
    }
    ++v1;
  }
  return result;
}
