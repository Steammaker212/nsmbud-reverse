/* ActorMgrRelated_getById
 * address: 0x60008DFC   size: 72   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActorMgrRelated_getById(int a1, unsigned int a2)
{
  int result; // r0

  result = 0;
  if ( a2 )
  {
    result = *(_DWORD *)(FIELD_U32(a1, 4) + 4 * (a2 >> 22));
    if ( result && !FIELD_U8(result, 19) )
    {
      if ( FIELD_U32(result, 8) != a2 )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
