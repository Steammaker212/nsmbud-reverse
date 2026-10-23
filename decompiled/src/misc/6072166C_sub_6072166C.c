/* sub_6072166C
 * address: 0x6072166C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072166C(int a1)
{
  _DWORD *v2; // r5

  FIELD_U32(a1, 5456) = off_60BF9C4C;
  v2 = (_DWORD *)(a1 + 5456);
  FIELD_U32(a1, 5472) = &off_60BF9C5C;
  nullsub_124(a1 + 5456);
  sead__IDisposer__dtor(v2);
  sub_609175E4(a1 + 5064);
  sub_609175E4(a1 + 4792);
  sub_609175E4(a1 + 4520);
  sub_609175E4(a1 + 4248);
  sub_609175E4(a1 + 3976);
  sub_609175E4(a1 + 3704);
  nullsub_111(a1 + 3548);
  nullsub_113(a1 + 3376);
  j_nullsub_280(a1 + 3312);
  sub_609175E4(a1 + 3032);
  j_nullsub_280(a1 + 2904);
  sub_609175E4(a1 + 2624);
  sub_609175E4(a1 + 2272);
  sub_609175E4(a1 + 2000);
  sub_609175E4(a1 + 1728);
  sub_609175E4(a1 + 1456);
  sub_609175E4(a1 + 1184);
  sub_609175E4(a1 + 904);
  sub_609175E4(a1 + 632);
  sub_609175E4(a1 + 360);
  sub_609175E4(a1 + 88);
  return a1;
}
