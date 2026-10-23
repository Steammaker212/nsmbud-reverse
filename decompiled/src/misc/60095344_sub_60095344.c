/* sub_60095344
 * address: 0x60095344   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60095344(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611223940 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81734) == 1 )
  {
    v4 = FIELD_U32(v2, 7144) & 2;
    if ( FIELD_U8(a1, 15260) )
    {
      if ( v4 )
      {
        sub_6040810C(dword_60C9A1E8);
        FIELD_U8(a1, 15260) = 0;
      }
    }
    else if ( !v4 )
    {
      sub_60095218(a1);
    }
  }
}
