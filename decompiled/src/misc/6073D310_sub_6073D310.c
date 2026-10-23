/* sub_6073D310
 * address: 0x6073D310   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_6073D310(int a1))(_DWORD, int *)
{
  int v1; // r4
  unsigned int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  v1 = 0;
  v2 = FIELD_U32(a1, 8084);
  if ( v2 )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60CBE274 & ~(1618203476 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE274) )
    {
      dword_60CBE270 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60CBE274);
    }
    if ( v3 )
    {
      v1 = (**v3)(v3, &dword_60CBE270);
      if ( v1 )
        return v3;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v1;
}
