/* sub_607D033C
 * address: 0x607D033C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D033C(int a1)
{
  Actor *v2; // r5
  char v3; // r12
  const char *v4; // r1

  v2 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618805624 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v2, 0x0))(v2, &StageActor_RTTI) == 1 )
  {
    if ( Actor__getProfileId(v2) == 478 )
      v4 = "SE_PLY_YOSHI_FIRE";
    else
      v4 = "SE_VOC_YS_ATTACK";
    sub_607734E8((unsigned __int8 *)a1, (int)v4, 0, 0);
  }
}
