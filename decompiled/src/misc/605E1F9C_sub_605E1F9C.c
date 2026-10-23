/* sub_605E1F9C
 * address: 0x605E1F9C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1F9C(int result)
{
  _DWORD *v1; // r4

  if ( (FIELD_U32(result, 6264) & 0xC000000) == 0xC000000 )
  {
    v1 = (_DWORD *)(result + 8012);
    if ( !FIELD_U32(result, 8012) )
    {
      sub_605EAB48(result + 6064, 0.0);
      *v1 = 1;
      return 1;
    }
  }
  return result;
}
