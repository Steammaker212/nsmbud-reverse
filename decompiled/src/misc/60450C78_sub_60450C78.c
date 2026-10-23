/* sub_60450C78
 * address: 0x60450C78   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60450C78(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r0
  int result; // r0

  if ( a4 >= 0xC )
    a4 = 0;
  v4 = a1 + 4 * a4;
  *(_DWORD *)(FIELD_U32(v4, 16) + 40) = a3;
  result = FIELD_U32(v4, 16);
  FIELD_U32(result, 36) = a2;
  return result;
}
