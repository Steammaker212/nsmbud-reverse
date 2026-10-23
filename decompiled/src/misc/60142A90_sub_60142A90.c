/* sub_60142A90
 * address: 0x60142A90   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142A90(int a1)
{
  int result; // r0

  result = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_U32(a1, 5952) == 17104911 )
  {
    SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
    return 1;
  }
  return result;
}
