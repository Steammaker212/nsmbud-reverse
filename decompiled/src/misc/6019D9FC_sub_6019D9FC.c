/* sub_6019D9FC
 * address: 0x6019D9FC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019D9FC(int a1)
{
  unsigned __int8 *v2; // r6
  int v3; // r7
  int v4; // r0
  Vec3 v6; // [sp+0h] [bp-30h] BYREF

  v2 = (unsigned __int8 *)(a1 + 12891);
  if ( FIELD_U8(a1, 12891) )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      if ( (unsigned int)v3 < 6 )
        v4 = v3;
      v6 = *(Vec3 *)(a1 + 40 * v4 + 12644);
      EffectData_create(1134, &v6, 0, 0);
      ++v3;
    }
    while ( v3 < *v2 );
  }
  sub_601E4C88(dword_60C8B13C, 198, a1 + 80, 1);
  FIELD_U8(a1, 12893) = 0;
  return 12893;
}
