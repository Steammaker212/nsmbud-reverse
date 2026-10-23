/* sub_60918798
 * address: 0x60918798   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60918798(int a1, int a2)
{
  bool v3; // zf
  int v4; // r0

  v3 = (FIELD_U8(a1, 4) & 1) == 0;
  v4 = 0;
  if ( !v3 )
  {
    v4 = FIELD_U32(a1, 40);
    if ( v4 )
      v4 += 72 * a2;
  }
  sub_608354E0(v4);
  nullsub_66();
}
