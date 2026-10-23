/* sub_605724B0
 * address: 0x605724B0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605724B0(ColliderBase *a1)
{
  signed int v2; // r1
  signed int result; // r0
  int ProfileId; // r0
  int *v5; // r2
  char *v6; // s0
  int v7; // r1

  a1[21].field_E4 = 1;
  a1[21].owner248Ptr = (Vec3 *)48;
  ColliderBase_setType(a1 + 18, 8);
  v2 = sub_60562ABC((int)a1);
  result = 2;
  if ( v2 == 1 )
  {
    sub_60563AB8(a1);
    ProfileId = Actor__getProfileId((Actor *)a1);
    v5 = dword_60572590;
    if ( ProfileId == 303 )
      v5 = &dword_60572590[1];
    v6 = (char *)*v5;
    a1[1].owner56Ptr = (char *)*v5;
    a1[1].owner57Ptr = v6;
    LOBYTE(a1[21].field_EC) = 1;
    a1[21].field_94 = 1;
    if ( a1[20].nodes[3].next == (ColliderListNode *)21 )
      LOBYTE(a1[20].nodes[5].owner) = 1;
    v7 = Actor__getProfileId((Actor *)a1);
    result = 1;
    if ( v7 == 304 )
      a1[18].field_14C = (int)sub_60563A00;
  }
  return result;
}
