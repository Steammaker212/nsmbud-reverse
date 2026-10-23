/* sub_600E96B0
 * address: 0x600E96B0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_600E96B0(int a1, unsigned int a2))(_DWORD, int *)
{
  int v2; // r5
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12

  v2 = 0;
  if ( a2 >= 2 )
    a2 = 0;
  v3 = *(_DWORD *)(a1 + 4 * a2 + 8336);
  if ( v3 )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
    {
      if ( ((unsigned int)&dword_60C836A8 & ~(1611568904 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C836A8) )
      {
        dword_60C836A4 = (int)&off_60BC9BA0;
        _cxa_guard_release(&dword_60C836A8);
      }
      if ( !(**v4)(v4, &dword_60C836A4) )
        return 0;
      return v4;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v2;
}
