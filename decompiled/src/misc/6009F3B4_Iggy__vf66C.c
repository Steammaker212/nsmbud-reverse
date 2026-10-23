/* Iggy__vf66C
 * address: 0x6009F3B4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B79C8
// 
// Overridden by: None
void __fastcall Iggy__vf66C(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s0

  sub_60421AE4(FIELD_U32(a1, 7096), FIELD_U32(a1, 7120) + 24, 0);
  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 85, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C82848 & ~(1611265048 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C82848) )
  {
    dword_60C82844 = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60C82848);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C82844) == 1 )
    {
      v4 = FIELD_F32(v2, 112);
      FIELD_F32(a1, 8208) = v4;
      FIELD_F32(a1, 8212) = v4 + 48.0;
    }
  }
}
