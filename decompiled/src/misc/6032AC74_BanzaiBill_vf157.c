/* BanzaiBill_vf157
 * address: 0x6032AC74   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf157(int a1)
{
  Vec3 *v2; // r4
  _BOOL4 v3; // r0
  int *v4; // r1
  int result; // r0
  int v6; // r2
  unsigned int v7; // r1
  LightSource *v8; // r5
  int a4; // [sp+14h] [bp-14h] BYREF

  v2 = (Vec3 *)(a1 + 7632);
  v3 = sub_60236FD4((float *)(a1 + 7632));
  v4 = (int *)(a1 + 7644);
  if ( v3 )
  {
    result = *v4;
    if ( !*v4 )
    {
      v6 = -1073741824;
      a4 = 0;
      v7 = FIELD_U32(a1, 80);
      if ( v7 <= 2 )
        v6 = dword_60AFF834[v7];
      a4 = v6;
      v8 = (LightSource *)(a1 + 7560);
      LightSource_update1(v8, 49, v2, &a4, 0, 0, 0, 0, 0);
      return LightSource_unkUpdate3(v8);
    }
  }
  else
  {
    *v4 = 20;
    return 20;
  }
  return result;
}
