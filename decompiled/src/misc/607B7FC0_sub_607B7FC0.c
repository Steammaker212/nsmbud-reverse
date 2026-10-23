/* sub_607B7FC0
 * address: 0x607B7FC0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607B7FC0(int a1, float a2)
{
  int v4; // r4
  char v5; // r12

  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= ~0x400u;
  sub_60794954(a1 + 11356, 0, a2, 0.0);
  FIELD_U32(a1, 9940) = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618706500 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) == 1 )
        (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(FIELD_U32(v4, 648) + 4) + 100))(
          *(_DWORD *)(FIELD_U32(v4, 648) + 4),
          a2);
    }
  }
}
