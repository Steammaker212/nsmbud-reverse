/* sub_601265D8
 * address: 0x601265D8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601265D8(int a1)
{
  int v2; // r0
  int *v3; // r1
  int v4; // r6
  signed int v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 124) = 0;
    v2 = FIELD_U32(a1, 80);
    v3 = dword_60126728;
    if ( !v2 )
      v3 = &dword_60126728[1];
    FIELD_U32(a1, 132) = *v3;
    FIELD_U32(a1, 104) = 1028443341;
  }
  else
  {
    EffectWrapper_update((EffectWrapper *)(a1 + 8448), 1006, (Vec3 *)(a1 + 8164), 0, 0);
    v2 = FIELD_U32(a1, 80);
  }
  v4 = byte_60AFE3F4[v2];
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v4;
  v6 = (int)(float)((float)(FIELD_F32(a1, 8132) * 2147500000.0) / 180.0);
  sub_6083246C((int *)(a1 + 160), &v7, &v6);
  if ( !FIELD_U16(a1, 6276) )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C87000);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
