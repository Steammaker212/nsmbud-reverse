/* sub_607FF398
 * address: 0x607FF398   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607FF398(_BYTE *result)
{
  int v1; // r2
  int v2; // lr
  __int64 v3; // r2

  if ( *result && !result[1] )
  {
    v1 = (unsigned __int8)result[2];
    if ( result[2] )
    {
      v2 = v1 - 33;
      HIDWORD(v3) = 1u >> (33 - v1);
      LODWORD(v3) = 1 << (v1 - 1);
      if ( v2 >= 0 )
      {
        HIDWORD(v3) = 1 << v2;
        LODWORD(v3) = 0;
      }
      if ( (*(_QWORD *)(EventMgr__instance + 16) & v3) != 0 )
        result[1] = 1;
    }
    else
    {
      result[1] = 1;
    }
  }
  return result;
}
