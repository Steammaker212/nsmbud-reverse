/* sub_605E1D00
 * address: 0x605E1D00   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1D00(int a1)
{
  int v2; // r1
  int result; // r0

  sub_605D793C(a1);
  sub_605D7954(a1);
  FIELD_U32(a1, 104) = 0;
  result = FIELD_U32(a1, 8012);
  if ( result == 1 )
  {
    result = sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), v2);
    if ( result != 1 )
      return result;
    goto LABEL_7;
  }
  if ( !result )
  {
    result = FIELD_U8(a1, 6804);
    if ( (result & 1) != 0 )
    {
      if ( FIELD_U32(a1, 6144) == 14 )
      {
        FIELD_U32(a1, 6144) = 15;
        result = 1;
LABEL_8:
        FIELD_U32(a1, 8012) = result;
        return result;
      }
LABEL_7:
      sub_605EAB48(a1 + 6064, 0.0);
      result = 2;
      goto LABEL_8;
    }
  }
  return result;
}
