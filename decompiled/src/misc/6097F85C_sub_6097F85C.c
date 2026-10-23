/* sub_6097F85C
 * address: 0x6097F85C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6097F85C(_DWORD *a1)
{
  void *v2; // r0
  int v3; // r0

  *a1 = off_60C5F60C;
  v2 = (void *)a1[46];
  if ( v2 )
  {
    operator_delete(v2);
    a1[46] = 0;
  }
  v3 = a1[47];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    a1[47] = 0;
  }
  sub_609175E4((int)(a1 + 88));
  j_nullsub_280((int)(a1 + 55));
  nullsub_2261();
}
