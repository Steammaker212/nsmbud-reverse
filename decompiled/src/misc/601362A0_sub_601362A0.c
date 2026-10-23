/* sub_601362A0
 * address: 0x601362A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601362A0(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  float v4; // r1
  float v5; // r2
  Vec3 v6; // [sp+4h] [bp-1Ch] BYREF

  v3 = (_BYTE *)(a1 + 6240);
  result = FIELD_U8(a1, 6240);
  if ( !result )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_F32(a1, 116);
    v6.x = FIELD_F32(a1, 108);
    v6.y = v4;
    v6.z = v5;
    if ( sub_60236FD4((float *)(a1 + 584)) == 1 )
      v6.z = 4500.0;
    EffectData_create(4, &v6, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
    *v3 = 1;
    return 1;
  }
  return result;
}
