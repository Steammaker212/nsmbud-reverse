/* sub_601109B0
 * address: 0x601109B0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601109B0(int a1)
{
  int v2; // r4
  char v3; // r12

  if ( FIELD_U8(a1, 6592) && FIELD_F32(a1, 6572) == 1.0 && FIELD_F32(a1, 6588) == 1.0 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C86900);
    v2 = FIELD_U32(a1, 56);
    if ( ((unsigned int)dword_60C866F0 & ~(1611729444 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C866F0) )
    {
      dword_60C866EC = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60C866F0);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C866EC) == 1 && !FIELD_U8(v2, 720) )
      FIELD_U8(v2, 720) = 1;
  }
}
