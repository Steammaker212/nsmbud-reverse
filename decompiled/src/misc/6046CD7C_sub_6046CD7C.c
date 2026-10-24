/* sub_6046CD7C
 * address: 0x6046CD7C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046CD7C(Actor *a1)
{
  int v3; // [sp+4h] [bp-Ch] BYREF

  if ( sub_60463998(a1, &v3, 4, 1) == 1 )
    SE_PLY_GET_ITEM_AGAIN_ref((int)a1, v3, FIELD_U32(a1 + (77) * 80, 0x30));
  nullsub_22();
  return sub_6046C3AC((int)a1);
}
