/* sub_6097E74C
 * address: 0x6097E74C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6097E74C(_DWORD *a1)
{
  void *v2; // r0
  int v3; // r0
  void *v4; // r5

  *a1 = off_60C5F598;
  v2 = (void *)a1[44];
  if ( v2 )
  {
    operator_delete(v2);
    a1[44] = 0;
  }
  v3 = a1[45];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    a1[45] = 0;
  }
  if ( a1[156] )
    sub_60913ABC((int)(a1 + 156));
  v4 = (void *)a1[52];
  if ( v4 )
  {
    sub_609175E4((int)v4 + 64);
    operator_delete(v4);
  }
  sub_609175E4((int)(a1 + 86));
  j_nullsub_280((int)(a1 + 53));
  nullsub_2261();
}
