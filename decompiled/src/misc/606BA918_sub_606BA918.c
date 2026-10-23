/* sub_606BA918
 * address: 0x606BA918   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BA918(int a1)
{
  int v1; // r0
  unsigned int v2; // r0

  v1 = sub_6079D894(a1);
  if ( v1
    && (v2 = FIELD_S8(v1, 84), v2 <= 3)
    && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v2)) != 0 )
  {
    return 1 << v2;
  }
  else
  {
    return 0;
  }
}
