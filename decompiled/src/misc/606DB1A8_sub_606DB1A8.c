/* sub_606DB1A8
 * address: 0x606DB1A8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606DB1A8(_DWORD *a1)
{
  int *i; // r7
  char v3; // r12
  int v4; // r4

  for ( i = (int *)sub_60008598(ActorMgr__instance, 808, *(_DWORD *)(ActorMgr__instance + 27172));
        ;
        i = (int *)sub_60008598(ActorMgr__instance, 808, (int)(i + 1)) )
  {
    v4 = *i;
    if ( ((unsigned int)&dword_60C906C8 & ~(1617801804 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C8) )
    {
      dword_60C906C4 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C906C8);
    }
    if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C906C4) != 1 )
      break;
    if ( FIELD_U32(v4, 8) != a1[2] )
    {
      a1[1626] = FIELD_U32(v4, 6508);
      a1[1629] = FIELD_U32(v4, 6520);
      a1[1631] = FIELD_U32(v4, 6528);
      FIELD_U32(v4, 6504) = a1[1627];
      FIELD_U32(v4, 6516) = a1[1630];
      FIELD_U32(v4, 6524) = a1[1632];
      return;
    }
  }
}
