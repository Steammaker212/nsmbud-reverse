/* STRM_BGM_ref_3_helper_80A170
 * address: 0x6080A170   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_3_helper_80A170(int a1, int a2)
{
  int v3; // r0

  v3 = FIELD_U32(a1, 68);
  if ( !v3 )
    return 0;
  sub_608AF208(v3, a2);
  FIELD_U8(a1, 46) = 0;
  return 1;
}
