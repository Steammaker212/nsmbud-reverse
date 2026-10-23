/* sub_600DE62C
 * address: 0x600DE62C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DE62C(int a1)
{
  int v2; // r5
  char v3; // r12

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
  if ( ((unsigned int)&dword_60C84B4C & ~(1611523688 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B48) == 1 && !FIELD_U32(v2, 6548) )
    sub_600E371C(v2, 1);
  return BossBase__vf3E4(a1);
}
