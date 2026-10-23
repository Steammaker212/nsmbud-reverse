/* sub_601421C4
 * address: 0x601421C4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601421C4(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int v5; // r5
  float result; // s0

  sub_6000BF78(a1, a2);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611932160 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v5 = (int)(v3 + 28);
  if ( !(**v3)(v3, &StageActor_RTTI) )
    v5 = 112;
  result = *(float *)v5 + 2.0;
  *(float *)v5 = result;
  return result;
}
