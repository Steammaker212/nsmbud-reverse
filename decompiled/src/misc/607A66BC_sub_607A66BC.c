/* sub_607A66BC
 * address: 0x607A66BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A66BC(int a1)
{
  int v1; // r4
  bool v2; // zf

  v1 = 0;
  v2 = (FIELD_U8(a1, 1219) & 8) == 0;
  if ( (FIELD_U8(a1, 1219) & 8) == 0 )
    v2 = (FIELD_U8(a1, 1233) & 2) == 0;
  if ( v2 )
  {
    v1 = 1;
    sub_60766314(a1, (StateBase *)&unk_60CC49CC, 1);
  }
  return v1;
}
