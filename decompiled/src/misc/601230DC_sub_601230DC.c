/* sub_601230DC
 * address: 0x601230DC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601230DC(int a1)
{
  int v1; // r1
  int v2; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 6312);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 0;
  v2 = FIELD_U32(a1, 6324);
  FIELD_U32(v2, 20) = 0;
  FIELD_U32(v2, 28) |= 2u;
  result = FIELD_U32(a1, 6324);
  FIELD_U32(result, 24) = 0;
  return result;
}
