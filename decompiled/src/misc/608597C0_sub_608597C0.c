/* sub_608597C0
 * address: 0x608597C0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608597C0(int a1)
{
  int v1; // r1
  unsigned __int16 v3; // r1

  v1 = FIELD_U32(a1, 132);
  if ( !v1 )
    return 0;
  v3 = FIELD_U16(v1, 8);
  if ( (FIELD_U8(a1, 72) & 1) != 0 )
    --v3;
  return v3;
}
