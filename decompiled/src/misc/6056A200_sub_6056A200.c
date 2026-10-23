/* sub_6056A200
 * address: 0x6056A200   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6056A200(ColliderBase *a1)
{
  int *v2; // r5
  signed int v3; // r1
  signed int result; // r0
  int *v5; // r1

  a1[21].field_E4 = 0;
  v2 = &a1[21].field_E4;
  a1[21].owner248Ptr = (Vec3 *)49;
  ColliderBase_setType(a1 + 18, 7);
  v3 = sub_6056EAA4((int)a1);
  result = 2;
  if ( v3 == 1 )
  {
    if ( *v2 == 2 )
      v5 = &dword_60CAE31C;
    else
      v5 = &dword_60CAE2F8;
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v5);
    return 1;
  }
  return result;
}
