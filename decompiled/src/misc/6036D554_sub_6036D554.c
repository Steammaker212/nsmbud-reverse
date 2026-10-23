/* sub_6036D554
 * address: 0x6036D554   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036D554(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 144);
  if ( !v2 )
    return 0;
  SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(v2, 0);
  return 1;
}
