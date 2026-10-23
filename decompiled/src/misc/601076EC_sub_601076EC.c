/* sub_601076EC
 * address: 0x601076EC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601076EC(int a1)
{
  float v2; // s0
  int v3; // r0

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 6692) = 0;
  v2 = FIELD_F32(a1, 6596);
  if ( v2 >= 0.0 )
  {
    if ( v2 >= 2.0 )
      v3 = sub_608FBB48(2.0 / v2);
    else
      v3 = 0x40000000 - sub_608FBB48(v2 * 0.5);
  }
  else if ( v2 <= -2.0 )
  {
    v3 = 0x80000000 - sub_608FBB48(-2.0 / v2);
  }
  else
  {
    v3 = sub_608FBB48(v2 * -0.5) + 0x40000000;
  }
  FIELD_U32(a1, 6700) = v3;
  FIELD_U32(a1, 6696) = 0;
  FIELD_U32(a1, 6688) = 60;
  return 6688;
}
