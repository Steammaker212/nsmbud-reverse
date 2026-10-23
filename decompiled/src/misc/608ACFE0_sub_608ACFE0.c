/* sub_608ACFE0
 * address: 0x608ACFE0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACFE0(int a1, int a2)
{
  int result; // r0
  int v3; // r2
  int v4; // t1
  int v5; // t1
  _DWORD *v6; // r1
  int v7; // t1

  if ( FIELD_U8(a2, 20) == 2 )
  {
    v4 = FIELD_U32(a1, 16);
    result = a1 + 16;
    v3 = v4;
  }
  else
  {
    v5 = FIELD_U32(a1, 24);
    result = a1 + 24;
    v3 = v5;
  }
  v7 = FIELD_U32(a2, 24);
  v6 = (_DWORD *)(a2 + 24);
  *v6 = v3;
  FIELD_U32(v7, 4) = result;
  *(_DWORD *)(*(_DWORD *)result + 4) = v6;
  *(_DWORD *)result = v7;
  return result;
}
