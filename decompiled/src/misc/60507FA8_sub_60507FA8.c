/* sub_60507FA8
 * address: 0x60507FA8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60507FA8(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = 0;
  v2 = sub_6047482C(a1 + 40, 0);
  if ( v2 )
    return FIELD_F32(v2, 44) != 0.0;
  return v1;
}
