/* sub_601C46E4
 * address: 0x601C46E4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C46E4(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 264);
  result = 7;
  if ( v1 <= 5 )
    return dword_60AFC220[v1];
  return result;
}
