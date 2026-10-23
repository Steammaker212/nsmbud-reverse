/* sub_60835BF8
 * address: 0x60835BF8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835BF8(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r2

  if ( !a2 )
  {
    v4 = 0;
    goto LABEL_5;
  }
  v4 = FIELD_U32(a2, 8);
  if ( (FIELD_U8(a2, 1) & 1) != 0 )
  {
LABEL_5:
    v5 = sub_6083AC38(a3);
    return dword_60CC7818(FIELD_U32(a1, 184), v4, v5);
  }
  v5 = FIELD_U32(a2, 4);
  return dword_60CC7818(FIELD_U32(a1, 184), v4, v5);
}
