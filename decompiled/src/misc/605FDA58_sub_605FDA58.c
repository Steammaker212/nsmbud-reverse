/* sub_605FDA58
 * address: 0x605FDA58   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_605FDA58(int a1))(_DWORD, int *)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int v3; // r5
  char v4; // r12

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6164));
  if ( ((unsigned int)&dword_60C7B364 & ~(1616894608 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v3 = 0;
  if ( v1 && (**v1)(v1, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)dword_60CB2698 & ~(1616894728 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB2698) )
    {
      dword_60CB2694 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CB2698);
    }
    if ( !(**v1)(v1, &dword_60CB2694) )
      return 0;
    return v1;
  }
  return (int (__fastcall ***)(_DWORD, int *))v3;
}
