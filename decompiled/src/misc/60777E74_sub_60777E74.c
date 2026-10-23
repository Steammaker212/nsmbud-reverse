/* sub_60777E74
 * address: 0x60777E74   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777E74(int a1)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  int v5; // r1

  v2 = FIELD_U32(a1, 480);
  v3 = FIELD_U32(dword_60C995D0, 32);
  result = 1;
  if ( (!v3 || v3 != v2) && !FIELD_U32(v2, 20) && !FIELD_U32(v2, 16) )
  {
    v5 = FIELD_U32(a1, 476);
    if ( (!v3 || v3 != v5) && !FIELD_U32(v5, 20) && !FIELD_U32(v5, 16) )
      return 0;
  }
  return result;
}
