/* sub_60263FA4
 * address: 0x60263FA4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60263FA4(int a1)
{
  float v2; // r2
  unsigned int v3; // r5
  int v4; // r1
  _BYTE *v5; // r4
  int v6; // t1
  int v7; // r0
  _BOOL4 result; // r0
  Vec3 v9; // [sp+0h] [bp-20h] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF

  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v10,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  v2 = FIELD_F32(a1, 112);
  v9.x = FIELD_F32(a1, 108);
  v9.y = v2;
  v3 = v10 - 1;
  v9.z = 4500.0;
  v6 = FIELD_U8(a1, 12121);
  v5 = (_BYTE *)(a1 + 12121);
  v4 = v6;
  if ( (unsigned int)(v10 - 1) > 4 )
  {
    if ( !v4 )
      goto LABEL_12;
  }
  else if ( v4 )
  {
    goto LABEL_12;
  }
  if ( v3 <= 1 )
  {
    v7 = 521;
LABEL_11:
    EffectData_create(v7, &v9, 0, 0);
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 3) <= 1 )
  {
    v7 = 523;
    goto LABEL_11;
  }
  if ( v10 == 5 )
  {
    v7 = 522;
    goto LABEL_11;
  }
LABEL_12:
  result = v3 < 5;
  *v5 = result;
  return result;
}
