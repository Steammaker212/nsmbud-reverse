/* sub_608B4B54
 * address: 0x608B4B54   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4B54(int a1, unsigned int a2, int a3)
{
  int result; // r0
  int v5; // r12
  bool v6; // zf

  result = 0;
  v5 = FIELD_U8(a1, 12);
  v6 = v5 == 0;
  if ( FIELD_U8(a1, 12) )
  {
    v5 = FIELD_U32(a1, 8);
    v6 = v5 == 0;
  }
  if ( !v6 && **(_DWORD **)(a1 + 4) > a2 )
  {
    result = *(_DWORD *)(v5 + 4 * a2);
    *(_DWORD *)(v5 + 4 * a2) = a3;
  }
  return result;
}
