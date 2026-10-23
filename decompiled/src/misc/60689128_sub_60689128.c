/* sub_60689128
 * address: 0x60689128   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60689128(unsigned int *result)
{
  unsigned int *v1; // r4
  Actor *v2; // r0
  Actor *v3; // r5
  int ProfileId; // r0
  char v5; // r12
  int v6; // r0

  v1 = result;
  if ( *result )
  {
    v2 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, *result);
    v3 = v2;
    if ( v2 )
    {
      ProfileId = Actor__getProfileId(v2);
      if ( ProfileId == 467 || ProfileId == 468 )
        BYTE1(v3[83].field_3C) = 0;
      if ( ProfileId == 392 )
      {
        v6 = 7528;
      }
      else
      {
        if ( BYTE1(v3[6].field_34) != 3 )
          goto LABEL_15;
        if ( ((unsigned int)&dword_60C830F8 & ~(1617465820 << v5) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C830F8) )
          {
            dword_60C830F4 = (int)&off_60BC321C;
            _cxa_guard_release(&dword_60C830F8);
          }
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C830F4) != 1 )
          goto LABEL_15;
        v6 = 6609;
      }
      *((_BYTE *)&FIELD_U32(v3, 0x0) + v6) = 0;
    }
LABEL_15:
    *v1 = 0;
    return 0;
  }
  return result;
}
