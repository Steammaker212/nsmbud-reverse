/* sub_6021405C
 * address: 0x6021405C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6021405C(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = dword_60C99DEC;
  FIELD_U32(v2, 484) = sub_60220C90(dword_60C8D4EC, FIELD_U8(a1, 368));
  FIELD_U32(v2, 504) = 0;
  sub_601863B8(a1, 39, 0);
  v3 = sub_601CF9C0(dword_60C8AEF0);
  return sub_601D0A30(v3, 0);
}
