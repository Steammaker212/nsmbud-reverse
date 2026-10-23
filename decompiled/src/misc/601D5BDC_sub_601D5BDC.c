/* sub_601D5BDC
 * address: 0x601D5BDC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D5BDC(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 1112) - 3;
  if ( v1 <= 0x1E )
    return ((int (*)(void))((char *)dword_601D5BFC + dword_601D5BFC[v1]))();
  return result;
}
