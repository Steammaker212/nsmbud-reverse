/* sub_60054100
 * address: 0x60054100   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60054100(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int result; // r0

  if ( ((unsigned int)&unk_60C80860 & ~(1610957080 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C80860) )
  {
    dword_60C80864 = 679;
    dword_60C80868 = 680;
    dword_60C8086C = 681;
    dword_60C80870 = 682;
    dword_60C80874 = 683;
    dword_60C80878 = 684;
    _cxa_guard_release((__guard *)&unk_60C80860);
  }
  v3 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                *((_DWORD *)&unk_60C80860 + FIELD_U32(a1, 6124) + 1),
                                                FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1610957280 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v3 )
    return 0;
  result = (**v3)(v3, &StageActor_RTTI);
  if ( result )
    return (int)v3;
  return result;
}
