/* sub_6074E5B0
 * address: 0x6074E5B0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074E5B0(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 8);
  if ( v1 != -1 )
    ++v1;
  FIELD_U32(result, 8) = v1;
  return result;
}
