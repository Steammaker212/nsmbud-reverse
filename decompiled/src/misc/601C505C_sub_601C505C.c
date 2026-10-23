/* sub_601C505C
 * address: 0x601C505C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***sub_601C505C())(_DWORD, int *)
{
  int (__fastcall ***v0)(_DWORD, int *); // r7
  int v1; // r4
  int v2; // r5
  char v3; // r12

  v0 = 0;
  if ( sub_60190968(dword_60C8996C) )
  {
    v1 = 0;
    v2 = dword_60C8996C + 1304;
    while ( 1 )
    {
      v0 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                  ActorMgr__instance + 27168,
                                                  *(_DWORD *)(v2 + 4 * v1));
      if ( ((unsigned int)&dword_60C8AE9C & ~(1612468480 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AE9C) )
      {
        dword_60C8AE98 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AE9C);
      }
      if ( v0 && (**v0)(v0, &dword_60C8AE98) )
        break;
      if ( ++v1 == 18 )
        return 0;
    }
  }
  return v0;
}
