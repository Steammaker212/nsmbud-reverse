/* sub_60670C2C
 * address: 0x60670C2C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60670C2C(int a1)
{
  _DWORD *v1; // r4
  int *i; // r7
  char v3; // r12
  int v4; // r5

  v1 = (_DWORD *)(a1 + 8272);
  if ( FIELD_U32(a1, 8272) )
  {
    for ( i = (int *)sub_60008598(ActorMgr__instance, 129, FIELD_U32(ActorMgr__instance, 27172));
          ;
          i = (int *)sub_60008598(ActorMgr__instance, 129, (int)(i + 1)) )
    {
      v4 = *i;
      if ( ((unsigned int)&dword_60CB724C & ~(1617366240 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB724C) )
      {
        dword_60CB7248 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CB724C);
      }
      if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB7248) != 1 )
        break;
      if ( *v1 == FIELD_U32(v4, 8272) && !FIELD_U8(v4, 8266) )
      {
        FIELD_U8(v4, 8266) = 40;
        sub_606702FC(v4);
        sub_60670C2C(v4);
      }
    }
  }
}
