/* sub_606A6130
 * address: 0x606A6130   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6130(int a1)
{
  sub_606D8E08();
  *(_DWORD *)a1 = off_60C19A0C;
  RectCollider_ctor((RectCollider *)(a1 + 6120));
  FIELD_U32(a1, 6120) = off_60BC30D8;
  FIELD_U32(a1, 6776) = off_60C19AF0;
  FIELD_U32(a1, 6780) = 0;
  FIELD_U16(a1, 6784) = 0;
  return a1;
}
