/* sub_60154420
 * address: 0x60154420   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60154420(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r1

  result = 5532;
  v5 = FIELD_U32(a1, 5532);
  if ( v5 )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    if ( result )
    {
      result = FIELD_U8(result, 19);
      if ( !result )
      {
        FIELD_U32(a1, 5532) = 0;
        result = sub_6014A2B8(a1 + 5416);
        if ( result )
        {
          *(_DWORD *)(result + 4 * *(char *)(FIELD_U32(a1, 2196) + 84) + 352) = a2;
          return sub_60165934(result, a1);
        }
      }
    }
  }
  return result;
}
