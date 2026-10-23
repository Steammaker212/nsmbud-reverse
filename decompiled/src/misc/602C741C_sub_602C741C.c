/* sub_602C741C
 * address: 0x602C741C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C741C(int a1)
{
  _DWORD *v2; // r6
  float v3; // s0
  int v4; // r5
  int v5; // r0
  float v6; // s0
  float v7; // s0
  float32x2_t v8; // d2
  float32x2_t v9; // d0

  v2 = (_DWORD *)(a1 + 28100);
  if ( FIELD_U32(a1, 28100) > 1u )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v3 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v3;
  }
  else
  {
    StageActor__accelerateX((StageActor *)a1);
    v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  v4 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v5 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v5 + 18) >> 5) + 2224) & (1 << ((v5 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v4 + 4 * ((v5 + 22) >> 5) + 2224) & (1 << ((v5 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v4 + 4 * ((v5 + 28) >> 5) + 2224) & (1 << ((v5 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v5 ^ 1;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  }
  if ( *v2 == 1 )
  {
    if ( (float)(FIELD_F32(a1, 28080) + 40.0) > FIELD_F32(a1, 108) )
      goto LABEL_17;
    goto LABEL_11;
  }
  if ( *v2 )
  {
    v6 = FIELD_F32(a1, 28084) + -20.0;
    if ( v6 >= FIELD_F32(a1, 112) )
    {
      FIELD_U32(a1, 136) = -1065353216;
      FIELD_U32(a1, 116) = 1138229248;
      v7 = CollisionMgr_process((_BYTE *)(a1 + 648), v6);
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 660))(a1, v7);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1);
        v8.n64_u32[0] = 2.0;
        v9.n64_f32[0] = FIELD_F32(a1, 124) * -0.5;
        FIELD_U32(a1, 124) = vmin_f32(v9, v8).n64_u32[0];
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91668);
      }
    }
  }
  else if ( (float)(FIELD_F32(a1, 28080) + -40.0) >= FIELD_F32(a1, 108) )
  {
LABEL_11:
    FIELD_U32(a1, 116) = 1138229248;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91668);
  }
LABEL_17:
  ((void (__fastcall *)(int))loc_606E750C)(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 664))(a1);
}
