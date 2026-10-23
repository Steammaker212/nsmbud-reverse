/* sub_601C6A74
 * address: 0x601C6A74   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_601C6A74(__int64 result)
{
  unsigned int v1; // r2

  v1 = HIDWORD(result) - 3;
  HIDWORD(result) = 0;
  if ( v1 <= 0x1E )
    HIDWORD(result) = ((1 << v1) & 0x423E0005) != 0;
  FIELD_U8(result, 664) = BYTE4(result);
  return result;
}
