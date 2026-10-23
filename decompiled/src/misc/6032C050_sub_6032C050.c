/* sub_6032C050
 * address: 0x6032C050   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032C050(int a1)
{
  Vec3 *v2; // r4
  _BOOL4 v3; // r0
  int *v4; // r1
  int result; // r0

  v2 = (Vec3 *)(a1 + 7632);
  v3 = sub_60236FD4((float *)(a1 + 7632));
  v4 = (int *)(a1 + 7644);
  if ( v3 )
  {
    result = *v4;
    if ( !*v4 )
    {
      LightSource_update1((LightSource *)(a1 + 7560), 48, v2, (_DWORD *)(a1 + 156), 0, 0, 0, 0, 0);
      return LightSource_unkUpdate3((LightSource *)(a1 + 7560));
    }
  }
  else
  {
    *v4 = 20;
    return 20;
  }
  return result;
}
