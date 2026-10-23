/* sub_60441CAC
 * address: 0x60441CAC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60441CAC(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  *a1 = off_60BFACF0;
  a1[4] = &off_60BFAD4C;
  a1[428] = off_60BF9C4C;
  v2 = a1 + 428;
  a1[432] = &off_60BF9C5C;
  nullsub_124(a1 + 428);
  sead__IDisposer__dtor(v2);
  v3 = (void *)*(v2 - 24);
  if ( v3 )
  {
    operator_delete(v3);
    a1[404] = 0;
  }
  sub_609175E4(a1 + 338);
  sub_60917AE4(a1 + 318);
  j_nullsub_280(a1 + 302);
  sub_609175E4(a1 + 232);
  sub_609175E4(a1 + 146);
  sub_60954610(a1 + 109);
  return sub_60443614(a1);
}
