/* sub_607AE4BC
 * address: 0x607AE4BC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE4BC(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  char v4; // r12

  v2 = (_DWORD *)(a1 + 12996);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12996));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618666748 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
  {
    FIELD_U32(a1, 80) = FIELD_U32(v3, 80);
    sub_60765948(a1, v3, 10);
    sub_6079C0A8(v3);
  }
  *v2 = 0;
  return 0;
}
