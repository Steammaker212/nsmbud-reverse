/* sub_607B7028
 * address: 0x607B7028   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_607B7028(int a1))(_DWORD, int *)
{
  int v1; // r4
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12

  v1 = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                ActorMgr__instance + 27168,
                                                FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618702448 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v2 )
    {
      v1 = (**v2)(v2, &dword_60C7B370);
      if ( v1 )
        return v2;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v1;
}
