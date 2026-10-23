/* sub_6075FA34
 * address: 0x6075FA34   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6075FA34(int a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = FIELD_U32(a1, 1228);
  if ( (v1 & 0x1000000) != 0 )
    return 0;
  v2 = (FIELD_U8(a1, 1219) & 8) == 0;
  if ( (FIELD_U8(a1, 1219) & 8) == 0 )
    v2 = (FIELD_U8(a1, 1239) & 0x40) == 0;
  return v2 && ((v1 & 0x800000) == 0 || FIELD_U32(a1, 684) != 0);
}
