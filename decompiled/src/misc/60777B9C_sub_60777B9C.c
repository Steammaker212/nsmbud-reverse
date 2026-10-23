/* sub_60777B9C
 * address: 0x60777B9C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777B9C(int a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = FIELD_U32(a1, 468);
  v2 = FIELD_U32(dword_60C995D0, 32);
  result = 1;
  if ( (!v2 || v2 != v1) && !FIELD_U32(v1, 20) && !FIELD_U32(v1, 16) )
    return 0;
  return result;
}
