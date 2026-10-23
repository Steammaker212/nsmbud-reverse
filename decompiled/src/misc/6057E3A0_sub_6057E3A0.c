/* sub_6057E3A0
 * address: 0x6057E3A0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057E3A0(_DWORD *a1)
{
  a1[1537] = a1[27];
  a1[1538] = a1[28];
  a1[1539] = a1[29];
  a1[1531] = 3;
  a1[155] = a1 + 1527;
  a1[40] = FIELD_U32(dword_60CBD894, 32);
  obj_coin_blue_ref(a1);
  sub_6057E594(a1);
  return 1;
}
