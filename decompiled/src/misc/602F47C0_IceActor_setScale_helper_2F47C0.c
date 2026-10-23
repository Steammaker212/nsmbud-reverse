/* IceActor_setScale_helper_2F47C0
 * address: 0x602F47C0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall IceActor_setScale_helper_2F47C0(_DWORD *result, float a2)
{
  int v2; // r1

  v2 = 0;
  if ( a2 >= 600.0 )
  {
    v2 = 1;
    if ( a2 >= 1536.0 )
    {
      v2 = 3;
      if ( a2 < 3072.0 )
        v2 = 2;
    }
  }
  *result = (char *)&unk_60AFEE44 + 12 * v2;
  return result;
}
