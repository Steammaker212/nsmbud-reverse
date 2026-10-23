/* sub_60095218
 * address: 0x60095218   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60095218(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611223644 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( !v2
    || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81734) != 1
    || (result = FIELD_U8(v2, 7144), (result & 2) == 0) )
  {
    result = FIELD_U8(a1, 15260);
    if ( !FIELD_U8(a1, 15260) )
    {
      sub_60407E74(dword_60C9A1E8, a1 + 108, 35, -1, 0, FIELD_U32(a1, 8));
      FIELD_U8(a1, 15260) = 1;
      return 1;
    }
  }
  return result;
}
