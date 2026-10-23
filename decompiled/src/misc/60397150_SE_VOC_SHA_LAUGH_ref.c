/* SE_VOC_SHA_LAUGH_ref
 * address: 0x60397150   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_VOC_SHA_LAUGH_ref(int a1)
{
  _DWORD *v2; // r6
  float v3; // r1
  int v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  sub_6039AF5C(a1, -1, 0.0);
  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) == 21 && (FIELD_U8(a1, 6321) & 1) != 0 )
  {
    v3 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v10, &position);
    sub_60813570(a1 + 12988, "SE_VOC_SHA_LAUGH", &v10, 0);
    if ( *v2 != 22 )
    {
      *v2 = 22;
      v5 = *(_DWORD **)(a1 + 6304);
      v4 = a1 + 6304;
      sub_60421938(v5, *(_DWORD *)(v4 - 4), (int)&dword_60C97088);
      v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v7 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v7 )
        v6 += 4 * v7;
      *(_DWORD *)(*(_DWORD *)v6 + 24) = dword_60C96F28[4 * *v2 + 2];
      v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
        v8 += 4 * v9;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60C96F28[4 * *v2 + 3]);
    }
  }
}
