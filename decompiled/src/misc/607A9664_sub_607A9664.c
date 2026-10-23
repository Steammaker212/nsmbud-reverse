/* sub_607A9664
 * address: 0x607A9664   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9664(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r2
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12

  result = 0;
  if ( (FIELD_U8(a1, 1228) & 8) != 0 )
  {
    v3 = FIELD_U8(a1, 84);
    v4 = 0;
    result = 0;
    if ( v3 < 4 )
      v4 = (char)v3;
    if ( (*(_BYTE *)(dword_60C9CF0C + 312 * v4 + 21) & 8) != 0 )
    {
      v5 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                    ActorMgr__instance,
                                                    796,
                                                    *(_DWORD *)(ActorMgr__instance + 27172));
      if ( ((unsigned int)&dword_60CC4B78 & ~(1618646760 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B78) )
      {
        dword_60CC4B74 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60CC4B78);
      }
      if ( v5 )
      {
        if ( (**v5)(v5, &dword_60CC4B74) == 1 )
          SE_SYS_DECIDE_ref_83038C(v5, FIELD_U32(a1, 20) & 0xF);
      }
      sub_607865D0(a1 + 688);
      return 1;
    }
  }
  return result;
}
