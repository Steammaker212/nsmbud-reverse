/* sub_60452CE8
 * address: 0x60452CE8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60452CE8(int a1)
{
  int result; // r0
  int v3; // r4

  sub_6045BF58(FIELD_U32(a1, 1264), 0);
  sub_6045BF58(FIELD_U32(a1, 1268), 1);
  sub_6045BF58(FIELD_U32(a1, 1272), 2);
  sub_6045BF58(FIELD_U32(a1, 1276), 3);
  sub_6045BF58(FIELD_U32(a1, 1280), 4);
  FIELD_U8(a1, 1356) = 1;
  result = FIELD_U32(dword_60C99DD4, 764);
  if ( result == 3 )
  {
    v3 = a1 + 1444;
    N_NormalCoin_00_ref(v3);
    sub_604AEFA0(v3);
    sub_604AEE94(v3, 0);
    return sub_604AEEC0(v3, 1);
  }
  return result;
}
