/* sub_60856EAC
 * address: 0x60856EAC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856EAC(int result)
{
  int v1; // r4
  int i; // r5
  int v3; // r4
  int v4; // t1

  v1 = FIELD_U32(result, 8);
  for ( i = result + 4; v1 != i; v1 = FIELD_U32(v3, 8) )
  {
    v4 = *(_DWORD *)(v1 - 4);
    v3 = v1 - 4;
    result = (*(int (__fastcall **)(int))(v4 + 68))(v3);
  }
  return result;
}
