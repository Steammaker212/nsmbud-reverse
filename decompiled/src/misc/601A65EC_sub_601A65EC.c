/* sub_601A65EC
 * address: 0x601A65EC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A65EC(int a1)
{
  int v2; // r5

  v2 = dword_60C99DEC;
  FIELD_U32(v2, 484) = sub_60220C90(dword_60C8D4EC, FIELD_U8(a1, 368));
  FIELD_U32(v2, 504) = 0;
  return sub_601863B8(a1, 39, 0);
}
