/* sub_60809B58
 * address: 0x60809B58   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60809B58(int a1, int a2)
{
  int v3; // r0

  v3 = FIELD_U32(a1, 64);
  if ( !v3 )
    return 0;
  sub_608AF208(v3, a2);
  FIELD_U8(a1, 44) = 0;
  SE_DUMMY_ref(dword_60CC6B0C);
  return 1;
}
