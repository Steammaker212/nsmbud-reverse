/* sub_60502DC8
 * address: 0x60502DC8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60502DC8(int a1, _DWORD *a2)
{
  int v3; // r1
  int v4; // r2
  _BOOL4 result; // r0

  v3 = sub_608DE61C(a1 + 52, *a2);
  v4 = 0;
  result = 0;
  if ( v3 )
    v4 = v3 - FIELD_U32(a1, 64);
  if ( FIELD_U32(v4, 164) == 4 )
    return (FIELD_U32(v4, 4) | 2) == 3;
  return result;
}
