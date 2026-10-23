/* sub_605DBF54
 * address: 0x605DBF54   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605DBF54(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 6260);
  return (v1 & 0xC00) == 0 && !(FIELD_U32(a1, 6264) & 0x2000 | FIELD_U32(a1, 6260) & 2) && (v1 & 0x10000000) == 0;
}
