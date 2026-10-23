/* sub_605ED5C0
 * address: 0x605ED5C0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED5C0(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  char v5; // r12

  v1 = result;
  v2 = FIELD_U32(result, 12);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C7B364 & ~(1616827904 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)&dword_60CB1E08 & ~(1616828020 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1E08) )
      {
        dword_60CB1E04 = (int)&off_60BD48EC;
        _cxa_guard_release(&dword_60CB1E08);
      }
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB1E04) == 1 )
        FIELD_U8(v3, 7482) = 1;
    }
    FIELD_U32(v1, 12) = 0;
    return 0;
  }
  return result;
}
