/* sub_6032D878
 * address: 0x6032D878   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032D878(Vec3 *a1)
{
  Vec3 *v2; // r4
  _BOOL4 v3; // r0
  int *v4; // r1
  int result; // r0
  unsigned int v6; // r0
  LightSource *v7; // r5
  unsigned int a4; // [sp+14h] [bp-14h] BYREF

  v2 = a1 + 636;
  v3 = sub_60236FD4(&a1[636].x);
  v4 = (int *)&a1[637];
  if ( v3 )
  {
    result = *v4;
    if ( !*v4 )
    {
      v6 = 0;
      if ( !LODWORD(a1[6].z) )
        v6 = 0x80000000;
      a4 = v6;
      v7 = (LightSource *)&a1[630];
      LightSource_update1(v7, 49, v2, &a4, 0, 0, 0, 0, 0);
      return LightSource_unkUpdate3(v7);
    }
  }
  else
  {
    *v4 = 20;
    return 20;
  }
  return result;
}
