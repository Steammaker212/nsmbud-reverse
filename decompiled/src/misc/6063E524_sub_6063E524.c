/* sub_6063E524
 * address: 0x6063E524   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E524(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  FIELD_U32(a1, 6168) = 60 * (unsigned __int8)(FIELD_U32(a1, 24) >> 12);
  v2 = (_DWORD *)(a1 + 6344);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6344));
  sub_60160948(v2);
  result = FIELD_U8(a1, 27);
  if ( (result & 0x10) == 0 )
    return lift_han_leaf_ref(a1);
  return result;
}
