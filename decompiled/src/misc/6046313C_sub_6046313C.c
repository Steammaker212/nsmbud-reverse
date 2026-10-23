/* sub_6046313C
 * address: 0x6046313C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046313C(int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  int v3; // t1
  int v4; // r2

  v1 = (_BYTE *)(result + 6197);
  if ( FIELD_U8(result, 6197) )
  {
    v3 = FIELD_U32(result, 6204);
    result += 6204;
    v2 = v3;
    if ( !v3 || (v4 = v2 - 1, (*(_DWORD *)result = v4) == 0) )
    {
      *v1 = 0;
      return 0;
    }
  }
  return result;
}
