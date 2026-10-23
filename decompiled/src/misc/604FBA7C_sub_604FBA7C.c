/* sub_604FBA7C
 * address: 0x604FBA7C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FBA7C(int a1)
{
  int v1; // r2

  *(_BYTE *)(FIELD_U32(a1, 37760) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 37764) + 64) &= ~1u;
  v1 = 19;
  if ( !FIELD_U8(a1, 40100) )
    v1 = 18;
  FIELD_U32(a1, 36536) = v1;
  return sub_60502694(a1 + 35508);
}
