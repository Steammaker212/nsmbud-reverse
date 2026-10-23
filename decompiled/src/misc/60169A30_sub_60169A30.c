/* sub_60169A30
 * address: 0x60169A30   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60169A30(_DWORD *a1)
{
  int v1; // r11
  int v2; // r6
  int *v3; // r4
  char v4; // r12
  int *v5; // r10
  int v6; // r5

  v1 = 0;
  while ( 1 )
  {
    v2 = sub_6021EE50(*a1, v1);
    if ( v2 != -1 )
    {
      v3 = (int *)sub_60008598(ActorMgr__instance, v2, *(_DWORD *)(ActorMgr__instance + 27172));
      v5 = *(int **)(ActorMgr__instance + 27180);
      if ( v3 != v5 )
        break;
    }
LABEL_15:
    if ( ++v1 >= 5 )
      return 0;
  }
  while ( 1 )
  {
    v6 = *v3;
    if ( ((unsigned int)&dword_60C88AA8 & ~(1612094224 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
    {
      dword_60C88AA4 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88AA8);
    }
    if ( v6
      && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C88AA4) == 1
      && FIELD_U32(v6, 240) == *a1
      && FIELD_U32(v6, 244) == a1[1]
      && FIELD_U32(v6, 248) == a1[2] )
    {
      return v6;
    }
    v3 = (int *)sub_60008598(ActorMgr__instance, v2, (int)(v3 + 1));
    if ( v3 == v5 )
      goto LABEL_15;
  }
}
