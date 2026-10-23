/* sub_6074CA64
 * address: 0x6074CA64   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074CA64(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 1180) + 1;
  if ( v1 >= 14 )
    v1 = 14;
  FIELD_U32(result, 1180) = v1;
  return result;
}
