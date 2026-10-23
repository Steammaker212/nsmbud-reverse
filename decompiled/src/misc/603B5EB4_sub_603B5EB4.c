/* sub_603B5EB4
 * address: 0x603B5EB4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603B5EB4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  if ( FIELD_U32(a3, 0x8C) == 7 && SE_EMY_DOWN_ref_3B565C((int)a1, (int)a2, (int)a3) )
    return 1;
  else
    return Enemy__vfEC(a1, a2, a3);
}
