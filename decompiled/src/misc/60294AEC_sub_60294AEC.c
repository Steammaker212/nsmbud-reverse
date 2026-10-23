/* sub_60294AEC
 * address: 0x60294AEC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60294AEC(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 7512);
  result = FIELD_U32(a1, 80);
  if ( (v1 | 2) == 2 )
    return result | 2;
  return result;
}
