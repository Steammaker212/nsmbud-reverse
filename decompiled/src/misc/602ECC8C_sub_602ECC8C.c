/* sub_602ECC8C
 * address: 0x602ECC8C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ECC8C(int a1)
{
  int result; // r0
  ColliderBase *v3; // r4

  sub_602F0518();
  result = FIELD_U8(a1, 6780);
  if ( FIELD_U8(a1, 6780) )
  {
    v3 = (ColliderBase *)(a1 + 6104);
    ColliderMgr_removeRelated1(ColliderMgr_instance, v3);
    return sub_601601B8(v3);
  }
  return result;
}
