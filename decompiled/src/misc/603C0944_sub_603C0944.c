/* sub_603C0944
 * address: 0x603C0944   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C0944(int a1)
{
  int v2; // r0
  int *v3; // r1
  bool v4; // cc
  int result; // r0
  int (__fastcall ***v6)(_DWORD, int *); // r5
  char v7; // r12

  v3 = (int *)(a1 + 6336);
  v2 = FIELD_U32(a1, 6336);
  v4 = v2 <= 1;
  result = v2 - 1;
  *v3 = result;
  if ( v4 )
  {
    if ( !FIELD_U8(a1, 6356) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98580);
    v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                ActorMgr__instance + 27168,
                                                FIELD_U32(a1, 6352));
    if ( ((unsigned int)&dword_60C7B364 & ~(1614547368 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v6 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98580);
    result = (**v6)(v6, &StageActor_RTTI);
    if ( !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98580);
  }
  return result;
}
