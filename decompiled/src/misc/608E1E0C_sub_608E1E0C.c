/* sub_608E1E0C
 * address: 0x608E1E0C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1E0C(int a1, int a2, int a3)
{
  sub_6090C954(a2, a3);
  sub_6090A7D4(a2 + 172, (float *)a2);
  (*(void (__fastcall **)(int, int))(FIELD_U32(a2, 172) + 16))(a2 + 172, a2 + 176);
  sub_608F4CA8(a2 + 260, a2 + 172);
  sub_608F4CBC(a2 + 260, a2);
  sub_6090DBC8(FIELD_U32(a2, 364));
  return sub_608F4CE4(a2 + 260);
}
