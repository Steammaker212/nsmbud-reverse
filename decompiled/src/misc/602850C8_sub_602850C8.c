/* sub_602850C8
 * address: 0x602850C8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602850C8(int a1)
{
  _BYTE *v2; // r0
  int v3; // r2

  ++FIELD_U32(a1, 9000);
  FIELD_U8(a1, 8941) = 0;
  v2 = (_BYTE *)(a1 + 8941);
  v3 = dword_60C9CF0C;
  if ( (FIELD_U8(dword_60C9CF0C, 1364) & 1) != 0 )
  {
    *v2 = 1;
    sub_603F4BF4(AreaTask_intance, a1 + 8944, v3 + 1368);
  }
  sub_60283D2C(a1);
  return 1;
}
