/* sub_60828FB8
 * address: 0x60828FB8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828FB8(int result, int a2, int a3)
{
  unsigned int v3; // r2

  v3 = a3 - 3;
  if ( v3 <= 2 )
  {
    *(_BYTE *)(FIELD_U32(result, 40) + a2 + 6257) = v3 + 1;
    FIELD_U8(result, 45) = 1;
  }
  return result;
}
