/* sub_60856E70
 * address: 0x60856E70   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856E70(int result, int a2)
{
  int v2; // r5
  int i; // r6
  int v5; // r5
  int v6; // t1

  v2 = FIELD_U32(result, 8);
  for ( i = result + 4; v2 != i; v2 = FIELD_U32(v5, 8) )
  {
    v6 = *(_DWORD *)(v2 - 4);
    v5 = v2 - 4;
    result = (*(int (__fastcall **)(int, int))(v6 + 56))(v5, a2);
  }
  return result;
}
