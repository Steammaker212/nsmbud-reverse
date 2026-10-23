/* sub_6063189C
 * address: 0x6063189C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063189C(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r7
  int result; // r0

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6532));
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60CB42CC & ~(1617107168 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB42CC) )
    {
      dword_60CB42C8 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB42CC);
    }
    v4 = (int)(v2 + 1527);
    if ( !(**v2)(v2, &dword_60CB42C8) )
      v4 = 6108;
    result = *(_DWORD *)v4;
    FIELD_U32(a1, 6556) = *(_DWORD *)v4;
  }
  else
  {
    FIELD_U8(a1, 6572) = 1;
    return 6572;
  }
  return result;
}
