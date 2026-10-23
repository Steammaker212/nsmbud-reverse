/* sub_601693DC
 * address: 0x601693DC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601693DC(int a1, int a2, int a3, int a4)
{
  int *v5; // r4
  char v6; // r12
  int *v7; // r9
  int v8; // r8

  v5 = (int *)sub_60008598(ActorMgr__instance, a1, *(_DWORD *)(ActorMgr__instance + 27172));
  v7 = *(int **)(ActorMgr__instance + 27180);
  if ( v5 == v7 )
    return 0;
  while ( 1 )
  {
    v8 = *v5;
    if ( ((unsigned int)&dword_60C88A98 & ~(1612092540 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A98) )
    {
      dword_60C88A94 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88A98);
    }
    if ( v8
      && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C88A94) == 1
      && FIELD_U32(v8, 240) == a2
      && FIELD_U32(v8, 244) == a3
      && FIELD_U32(v8, 248) == a4 )
    {
      break;
    }
    v5 = (int *)sub_60008598(ActorMgr__instance, a1, (int)(v5 + 1));
    if ( v5 == v7 )
      return 0;
  }
  return v8;
}
