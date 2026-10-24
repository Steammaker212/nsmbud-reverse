/* sub_605D05CC
 * address: 0x605D05CC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605D05CC(ColliderBase *a1)
{
  ColliderBase *v2; // r5

  a1[18].field_138 = (int)sub_605B348C;
  a1[18].field_13C = (int)sub_605B3934;
  a1[18].field_140 = (int)sub_605B4110;
  v2 = a1 + 18;
  ColliderBase_setType(a1 + 18, 8);
  a1[18].field_150 = &a1[21].field_CC;
  if ( !LOBYTE(a1[21].field_88) )
  {
    ColliderMgr_add(ColliderMgr_instance, v2);
    LOBYTE(a1[21].field_88) = 1;
  }
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)48;
  return 7296;
}
