/* sub_60136894
 * address: 0x60136894   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60136894(int a1)
{
  int result; // r0
  float v3; // r1
  float v4; // r2
  Vec3 v5; // [sp+4h] [bp-1Ch] BYREF

  result = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_U32(a1, 5952) == 17104911 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    result = 1;
    if ( !FIELD_U8(a1, 6240) )
    {
      v3 = FIELD_F32(a1, 112);
      v4 = FIELD_F32(a1, 116);
      v5.x = FIELD_F32(a1, 108);
      v5.y = v3;
      v5.z = v4;
      if ( sub_60236FD4((float *)(a1 + 584)) == 1 )
        v5.z = 4500.0;
      EffectData_create(4, &v5, 0, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
      FIELD_U8(a1, 6240) = 1;
      return 1;
    }
  }
  return result;
}
