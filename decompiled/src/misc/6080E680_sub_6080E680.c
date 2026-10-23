/* sub_6080E680
 * address: 0x6080E680   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080E680(int a1)
{
  sub_608CDEC0();
  sub_608CDED8(a1 + 8);
  FIELD_U32(a1, 16) = 1056964608;
  FIELD_U32(a1, 24) = 1056964608;
  FIELD_U32(a1, 28) = 1061997773;
  FIELD_U32(a1, 32) = 1050253722;
  *(_QWORD *)a1 = *(_QWORD *)&dword_60CC6B50;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 120000000;
  FIELD_U32(a1, 20) = 1036831949;
  return a1;
}
