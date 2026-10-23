/* sub_60748238
 * address: 0x60748238   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60748238(int a1)
{
  int result; // r0

  FIELD_U8(a1, 535) = 1;
  result = Actor__getProfileId((Actor *)a1);
  if ( result != 842 )
    FIELD_U8(a1, 534) = 1;
  return result;
}
