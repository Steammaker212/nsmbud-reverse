/* sub_6020AE7C
 * address: 0x6020AE7C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020AE7C(int a1)
{
  unsigned int v1; // r2
  int result; // r0

  v1 = FIELD_U32(a1, 352);
  if ( v1 >= 5 )
    v1 = 0;
  result = dword_60C8D4EC + 4 * v1;
  FIELD_U32(result, 16) = FIELD_U32(result, 36);
  FIELD_U32(result, 36) = 0;
  return result;
}
