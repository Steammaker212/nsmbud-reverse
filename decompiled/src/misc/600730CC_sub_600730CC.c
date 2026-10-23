/* sub_600730CC
 * address: 0x600730CC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600730CC(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12

  if ( ActorMgr__instance && FIELD_F32(a1, 12) < (float)(FIELD_F32(a1, 16) * 0.7) )
  {
    v2 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                  ActorMgr__instance,
                                                  374,
                                                  FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C81738 & ~(1611084080 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
    {
      dword_60C81734 = (int)&off_60BC1FA8;
      _cxa_guard_release(&dword_60C81738);
    }
    if ( v2 )
    {
      if ( (**v2)(v2, &dword_60C81734) == 1 )
        sub_600731CC(v2, a1);
    }
  }
}
