/* sub_608F1BFC
 * address: 0x608F1BFC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1BFC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 42);
  if ( result )
  {
    dword_60CC73A8(
      FIELD_U32(a1, 12),
      FIELD_U32(a1, 44),
      FIELD_U32(a1, 48),
      FIELD_U32(a1, 52),
      FIELD_U32(a1, 56));
    FIELD_U8(a1, 42) = 0;
    return 0;
  }
  return result;
}
