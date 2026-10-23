/* sub_605E41BC
 * address: 0x605E41BC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E41BC(int result)
{
  int v1; // t1

  if ( (FIELD_U8(result, 6261) & 8) != 0 )
  {
    v1 = FIELD_U32(result, 6268);
    result += 6268;
    *(_DWORD *)result = v1 | 2;
  }
  return result;
}
