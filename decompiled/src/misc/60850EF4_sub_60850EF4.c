/* sub_60850EF4
 * address: 0x60850EF4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850EF4(int result, int a2)
{
  int v2; // r6
  int v3; // r4
  int i; // r5

  v2 = FIELD_U32(a2, 16);
  v3 = result;
  for ( i = a2 + 12; v2 != i; v2 = FIELD_U32(v2, 4) )
    result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 56))(v3, FIELD_U32(v2, 8));
  return result;
}
