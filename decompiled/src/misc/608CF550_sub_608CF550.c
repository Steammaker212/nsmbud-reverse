/* sub_608CF550
 * address: 0x608CF550   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608CF550(int a1, void *a2, size_t a3)
{
  int v3; // r0

  v3 = FIELD_U32(a1, 28);
  if ( (v3 & 1) != 0 )
  {
    memset(a2, 0, a3);
  }
  else if ( (v3 & 2) != 0 )
  {
    memset(a2, (unsigned __int8)byte_60C5B58C, a3);
  }
}
