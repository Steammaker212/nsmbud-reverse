/* sub_60442824
 * address: 0x60442824   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60442824(int a1)
{
  int result; // r0
  int v3; // r1

  result = *(_DWORD *)(FIELD_U32(a1, 432) + 420);
  FIELD_U32(result, 892) = 0;
  v3 = FIELD_U32(a1, 512);
  if ( v3 )
  {
    result = sub_6093EA98(dword_60CD09F8, v3);
    FIELD_U32(a1, 512) = 0;
  }
  return result;
}
