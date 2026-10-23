/* sub_6010CF4C
 * address: 0x6010CF4C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010CF4C(int a1)
{
  int v2; // r0
  float v3; // s16
  float v4; // s18
  unsigned int U32; // r5
  float y; // s20
  __int64 v7; // kr00_8
  float v8; // s16
  float v9; // s18
  int v10; // r0
  float v11; // s0
  float v12; // s2
  _BOOL4 v13; // r1
  void (__fastcall *v14)(int, void *); // r2
  void *v15; // r1
  Vec2 v16; // [sp+0h] [bp-30h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  if ( sub_600B33DC((int *)a1, v2) && !FIELD_U16(a1, 6276) )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_F32(dword_60CC6484, 124);
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    StageActor__distanceToPlayer((StateActor *)a1, &v16);
    y = v16.y;
    v7 = 100LL * U32;
    v8 = v3 + 80.0;
    v9 = v4 + -64.0;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
    if ( y > 16.0 )
    {
      if ( HIDWORD(v7) <= 0x31 && (v10 ^ 1) == 1 )
        goto LABEL_6;
      if ( HIDWORD(v7) >= 0x32 && v8 < v9 )
      {
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86584);
        return;
      }
      goto LABEL_19;
    }
    v11 = FIELD_F32(a1, 108);
    v12 = FIELD_F32(dword_60CC6484, 116);
    v13 = 1;
    if ( v11 <= (float)((float)(v12 + FIELD_F32(a1, 7488)) + -1.0) )
      v13 = v11 < (float)((float)(v12 + FIELD_F32(a1, 7492)) + 1.0);
    if ( v10 == 1 )
    {
      if ( v13 )
      {
LABEL_19:
        sub_6010AEDC(a1);
        return;
      }
      v14 = *(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      if ( HIDWORD(v7) > 0x31 || v8 >= v9 )
        v15 = &unk_60C86450;
      else
        v15 = &unk_60C86584;
      goto LABEL_27;
    }
    if ( v13 )
    {
LABEL_6:
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C864BC);
      return;
    }
    if ( HIDWORD(v7) > 0x22 )
    {
      v14 = *(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      if ( HIDWORD(v7) > 0x40 )
      {
        v15 = &unk_60C86450;
        goto LABEL_27;
      }
    }
    else
    {
      v14 = *(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      if ( v8 < v9 )
      {
        v15 = &unk_60C86584;
LABEL_27:
        v14(a1, v15);
        return;
      }
    }
    v15 = &unk_60C864BC;
    goto LABEL_27;
  }
}
