/* sub_606D0A4C
 * address: 0x606D0A4C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D0A4C(int a1)
{
  int result; // r0

  sub_602A8EE0(a1);
  result = FIELD_U8(a1, 6320);
  if ( !FIELD_U8(a1, 6320) )
  {
    ShapedCollider_execute((ColliderBase *)(a1 + 33656));
    sub_60603510(a1 + 6464);
    ((void (__fastcall *)(int))loc_60602DF0)(a1 + 6464);
    return sub_606D0708(a1);
  }
  return result;
}
