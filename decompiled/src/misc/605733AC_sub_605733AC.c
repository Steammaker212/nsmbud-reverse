/* sub_605733AC
 * address: 0x605733AC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605733AC(ColliderBase *a1)
{
  int *v2; // r5
  int v3; // r1
  signed int result; // r0

  a1[21].field_E4 = 1;
  v2 = &a1[21].field_E4;
  ColliderBase_setType(a1 + 18, 8);
  v3 = sub_605736E0(a1);
  result = 2;
  if ( v3 == 1 )
  {
    sub_60563AB8(a1);
    if ( *v2 != 2 )
      a1[21].owner248Ptr = (Vec3 *)48;
    result = 1;
    LOBYTE(a1[21].field_EC) = 1;
    a1[21].field_94 = 1;
    if ( a1[20].nodes[3].next == (ColliderListNode *)21 )
    {
      LOBYTE(a1[20].nodes[5].owner) = 1;
      return 1;
    }
  }
  return result;
}
