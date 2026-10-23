/* sub_609118FC
 * address: 0x609118FC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609118FC(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r5

  dword_60CCFC5C = a3;
  sub_60913410(sub_60911994, sub_609119AC);
  v5 = MsgStdBn_ref(a2);
  FIELD_U32(a1, 4) = v5;
  v6 = sub_60911618((int)v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_609115F4(FIELD_U32(a1, 4));
    v6 = 0;
    FIELD_U32(a1, 4) = 0;
  }
  FIELD_U32(a1, 8) = v6;
  sub_60913410(0, 0);
  dword_60CCFC5C = 0;
  return v7 >= 0;
}
