/* sub_605E160C
 * address: 0x605E160C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E160C(int a1)
{
  char v2; // r1
  int result; // r0
  bool v4; // zf
  int v5; // r1
  int v6; // r0

  v2 = FIELD_U8(a1, 6260);
  result = 3;
  v4 = (v2 & 0x10) == 0;
  v5 = FIELD_U32(a1, 8020);
  if ( !v4 )
    result = 0;
  if ( (unsigned int)(v5 - 1) >= 2 )
  {
    if ( v5 )
      return result;
  }
  else
  {
    sub_605EAB48(a1 + 6064, 0.0);
    FIELD_U32(a1, 80) = 0;
    FIELD_F32(a1, 120) = (float)1 + (float)1;
    FIELD_U32(a1, 124) = 1077936128;
    FIELD_U32(a1, 128) = 0;
    v6 = sub_605D792C(a1, 0);
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = v6;
    FIELD_U32(a1, 164) = 0;
    sub_605D793C(a1);
    FIELD_U32(a1, 96) = -1063256064;
    result = 1;
  }
  FIELD_U32(a1, 8012) = result;
  return result;
}
