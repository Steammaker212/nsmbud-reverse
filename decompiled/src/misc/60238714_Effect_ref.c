/* Effect_ref
 * address: 0x60238714   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall Effect_ref(_QWORD *a1, int a2)
{
  int v3; // r0

  v3 = sub_60916740(dword_60CCFC8C, FIELD_U32(a2, 8), FIELD_U32(a2, 16), "Effect");
  *a1 = (unsigned int)v3;
  return v3 != 0;
}
