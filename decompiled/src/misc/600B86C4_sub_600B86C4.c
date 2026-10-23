/* sub_600B86C4
 * address: 0x600B86C4   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B86C4(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int result; // r0

  if ( ((unsigned int)&unk_60C835D0 & ~(1611368156 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C835D0) )
  {
    dword_60C835D4 = 696;
    dword_60C835D8 = 697;
    dword_60C835DC = 694;
    dword_60C835E0 = 700;
    dword_60C835E4 = 704;
    dword_60C835E8 = 707;
    dword_60C835EC = 702;
    _cxa_guard_release((__guard *)&unk_60C835D0);
  }
  v3 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                *((_DWORD *)&unk_60C835D0 + FIELD_U32(a1, 6124) + 1),
                                                *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611368372 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
