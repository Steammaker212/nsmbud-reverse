/* sub_601698C4
 * address: 0x601698C4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601698C4(int a1, _DWORD *a2)
{
  int *v3; // r6
  char v4; // r12
  int *v5; // r4
  int v6; // r7

  v3 = (int *)sub_60008598(ActorMgr__instance, a1, FIELD_U32(ActorMgr__instance, 27172));
  v5 = *(int **)(ActorMgr__instance + 27180);
  if ( v3 == v5 )
    return 0;
  while ( 1 )
  {
    v6 = *v3;
    if ( ((unsigned int)&dword_60C88A98 & ~(1612093788 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A98) )
    {
      dword_60C88A94 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88A98);
    }
    if ( v6
      && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C88A94) == 1
      && FIELD_U32(v6, 240) == *a2
      && FIELD_U32(v6, 244) == a2[1]
      && FIELD_U32(v6, 248) == a2[2] )
    {
      break;
    }
    v3 = (int *)sub_60008598(ActorMgr__instance, a1, (int)(v3 + 1));
    if ( v3 == v5 )
      return 0;
  }
  return v6;
}
