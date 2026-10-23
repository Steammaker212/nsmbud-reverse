/* sub_602873F0
 * address: 0x602873F0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602873F0(int a1)
{
  _BYTE *v2; // r6
  _DWORD **v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  float v10; // r0
  Vec3 v12; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6606);
  v3 = (_DWORD **)(a1 + 6300);
  if ( FIELD_U8(a1, 6606) != 2 )
  {
    sub_60421938(*v3, FIELD_U32(a1, 6304), (int)&dword_60C8F19C);
    v4 = (*v3)[3];
    v5 = (*v3)[17];
    if ( (*v3)[2] > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = (*v3)[3];
    v7 = (*v3)[17];
    if ( (*v3)[2] > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    *v2 = 2;
  }
  FIELD_U32(a1, 6564) = 0;
  v8 = (*v3)[3];
  v9 = (*v3)[17];
  if ( (*v3)[2] > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U16(a1, 6598) = 0;
  FIELD_U32(a1, 104) = 1023410176;
  FIELD_U16(a1, 6600) = 0;
  sub_602890D0(a1);
  v10 = FIELD_F32(a1, 108);
  v12.y = FIELD_F32(a1, 112);
  v12.x = v10;
  v12.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, &v12, 0, 0);
  FIELD_U32(a1, 6588) = 5;
  return 6588;
}
