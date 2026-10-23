/* sub_6099696C
 * address: 0x6099696C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6099696C(_DWORD *a1)
{
  int v1; // r0
  int v2; // r5
  unsigned int v3; // r0
  void *v4; // r0

  *a1 = off_60C60864;
  v1 = *(_DWORD *)(a1[4] + 72);
  v2 = *(_DWORD *)(FIELD_U32(v1, 20) + 840);
  v3 = sub_6098BED8(v1);
  sub_6097C7B8(v2, v3, 0);
  nullsub_2422();
  operator_delete(v4);
}
