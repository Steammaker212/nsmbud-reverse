/* sub_601B2EF0
 * address: 0x601B2EF0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B2EF0(int a1, int a2)
{
  int v3; // r5
  int v4; // r1
  int result; // r0

  v3 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 412) = *(_DWORD *)a2;
  FIELD_U32(v3, 416) = FIELD_U32(a2, 4);
  FIELD_U32(v3, 420) = FIELD_U32(a2, 8);
  v4 = sub_601E02C4(a2);
  result = -1;
  if ( v4 >= 2 )
    result = sub_601A47DC(dword_60C89E18, *(_DWORD *)a2, FIELD_U32(a2, 4), FIELD_U32(a2, 8));
  if ( FIELD_U8(v3, 511) )
    result = 34;
  FIELD_U32(dword_60C89E18, 20) = result;
  return result;
}
