/* sub_608649B0
 * address: 0x608649B0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608649B0(int a1, const char *a2)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 1;
  sub_608649EC((const char **)a1, a2);
  return a1;
}
