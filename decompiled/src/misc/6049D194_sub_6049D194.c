/* sub_6049D194
 * address: 0x6049D194   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D194(int result)
{
  int v1; // r2
  int v2; // r1

  v1 = 3;
  v2 = FIELD_U32(result, 4664);
  if ( v2 == 3 )
    v1 = 2;
  if ( v2 == 2 )
    v1 = 1;
  FIELD_U32(result, 22480) = v1;
  return result;
}
