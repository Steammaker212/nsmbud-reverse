/* sub_602870B8
 * address: 0x602870B8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602870B8(int a1)
{
  _BYTE *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  float v8; // r0
  int result; // r0
  Vec3 v10; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6606);
  if ( FIELD_U8(a1, 6606) != 2 )
  {
    v3 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F19C);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    *v2 = 2;
  }
  sub_602890D0(a1);
  v8 = FIELD_F32(a1, 108);
  v10.y = FIELD_F32(a1, 112);
  v10.x = v8;
  v10.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, &v10, 0, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 3196) |= 0x20000u;
  FIELD_U32(a1, 3192) |= 0x800u;
  FIELD_U32(a1, 3180) |= 0x20000u;
  result = FIELD_U32(a1, 3188) | 0x20000;
  FIELD_U32(a1, 3188) = result;
  return result;
}
