/* sub_6007E9C4
 * address: 0x6007E9C4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6007E9C4(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 6348);
  FIELD_U32(a1, 6348) = v1 - 1;
  if ( v1 <= 1 )
    FIELD_U8(a1, 19) = 1;
  JUMPOUT(0x60000CD0);
}
