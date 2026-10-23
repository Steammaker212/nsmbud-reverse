/* SE_SYS_CE_ref_3_helper
 * address: 0x603F5030   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_ref_3_helper(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 2592);
  if ( result )
    return CoinEditScene_Attention_ref();
  return result;
}
