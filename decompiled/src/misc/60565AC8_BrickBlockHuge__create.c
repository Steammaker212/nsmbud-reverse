/* BrickBlockHuge__create
 * address: 0x60565AC8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BrickBlockHuge__create(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1CE8u);
  result = BlockBase__ctor(v2, a1);
  *(_DWORD *)result = &BrickBlockHuge_vtable;
  FIELD_U16(result, 7396) = 0;
  return result;
}
