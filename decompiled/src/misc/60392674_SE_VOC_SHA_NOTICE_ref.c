/* SE_VOC_SHA_NOTICE_ref
 * address: 0x60392674   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_VOC_SHA_NOTICE_ref(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // r0
  float v8; // r1
  int v9; // r4
  _DWORD *v10; // t1
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  Vec2 v15; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, -1, 0.0);
  if ( !sub_60377C40(dword_60C96478) )
    sub_60377C24(dword_60C96478);
  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) == 19 )
  {
    if ( (FIELD_U8(a1, 6321) & 1) != 0 )
    {
      *v2 = 20;
      v10 = *(_DWORD **)(a1 + 6304);
      v9 = a1 + 6304;
      sub_60421938(v10, *(_DWORD *)(v9 - 4), (int)&dword_60C97068);
      v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v12 )
        v11 += 4 * v12;
      *(_DWORD *)(*(_DWORD *)v11 + 24) = dword_60C96F28[4 * *v2 + 2];
      v13 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v14 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v14 )
        v13 += 4 * v14;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), dword_60C96F28[4 * *v2 + 3]);
    }
    else
    {
      v3 = *(_DWORD **)(a1 + 6304);
      v4 = (_DWORD *)v3[3];
      v5 = v3[2];
      v6 = v3[17];
      if ( v5 > v6 )
        v4 += v6;
      if ( sub_60418548(*v4 + 4) )
      {
        v7 = FIELD_F32(a1, 108);
        position.y = FIELD_F32(a1, 112);
        position.x = v7;
        position.z = 4500.0;
        EffectData_create(598, &position, 0, 0);
        v8 = FIELD_F32(a1, 112);
        position.x = FIELD_F32(a1, 108);
        position.y = v8;
        mapPositionToScreen(&v15, &position);
        sub_60813570(a1 + 12988, "SE_VOC_SHA_NOTICE", &v15, 0);
      }
    }
  }
}
