/* sub_6090D028
 * address: 0x6090D028   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090D028(int a1, _DWORD *a2)
{
  int result; // r0

  *a2 = FIELD_U32(a1, 228);
  result = FIELD_U32(a1, 232);
  a2[1] = result;
  return result;
}
