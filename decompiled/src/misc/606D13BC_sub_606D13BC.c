/* sub_606D13BC
 * address: 0x606D13BC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D13BC(int a1)
{
  FIELD_U32(a1, 6404) = FIELD_U32(a1, 164);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6160));
  return sub_606D114C((_DWORD *)a1);
}
