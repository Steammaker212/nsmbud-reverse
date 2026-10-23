/* BrosBase__executeState_Move
 * address: 0x60265384   size: 740   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall BrosBase__executeState_Move(int a1)
{
  unsigned int v2; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r2
  float v8; // s0
  int v9; // r1
  int v10; // r0
  float v11; // s0
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r0
  int v16; // r0
  signed int result; // r0
  float v18; // r1
  int v19; // r0
  int v20; // r1
  Vec3 v21; // [sp+4h] [bp-1Ch] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = 0;
  v4 = 0;
  FIELD_U32(a1, 80) = v2;
  if ( v2 <= 1 )
  {
    v5 = FIELD_U32(a1, 160) + dword_60AF1F98[v2];
    FIELD_U32(a1, 160) = v5;
    if ( v5 < 0 && v5 != 0x80000000 )
      v5 = -v5;
    v6 = Enemy_CommonRotations[v2];
    v7 = v6;
    if ( v6 < 0 )
    {
      v7 = v6;
      if ( v6 != 0x80000000 )
        v7 = -v6;
    }
    v4 = 0;
    if ( v5 >= v7 )
    {
      v4 = 1;
      FIELD_U32(a1, 160) = v6;
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 740))(a1);
  if ( FIELD_U8(a1, 6604) != FIELD_U32(a1, 80) )
    v3 = 1;
  FIELD_U32(a1, 6556) = v3;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v8 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v9 = FIELD_U32(a1, 6560);
  if ( v9 >= 1 )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 6560) = v9 - 1;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648), v8);
  v10 = FIELD_U32(a1, 2872);
  if ( (v10 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
  }
  else
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    if ( FIELD_S32(a1, 6548) <= 15 )
      FIELD_U32(a1, 6548) = 16;
  }
  v11 = FIELD_F32(a1, 120);
  v12 = 0x40000;
  if ( v11 <= 0.0 )
    v12 = 0x80000;
  if ( (v12 & v10) != 0 )
    goto LABEL_25;
  v13 = 0x400000;
  if ( v11 <= 0.0 )
    v13 = 0x800000;
  if ( (v13 & v10) != 0 )
  {
LABEL_25:
    v14 = 0x10000000;
    if ( v11 <= 0.0 )
      v14 = 0x20000000;
    if ( (v14 & v10) == 0 )
      FIELD_U32(a1, 120) = 0;
  }
  v15 = FIELD_U32(a1, 6548);
  FIELD_U32(a1, 6548) = v15 - 1;
  if ( v15 > 1 )
  {
    if ( v4 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1) )
      {
        v16 = FIELD_U32(a1, 6544);
        FIELD_U32(a1, 6544) = v16 - 1;
        if ( v16 <= 1 )
        {
          FIELD_U32(a1, 120) = 0;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 776))(a1);
        }
      }
    }
  }
  else if ( v4 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 764))(a1);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    v18 = FIELD_F32(a1, 112);
    v21.x = FIELD_F32(a1, 108);
    v21.y = v18;
    v21.z = 4500.0;
    v19 = FIELD_U32(a1, 5956);
    switch ( BYTE1(v19) )
    {
      case 1u:
        v20 = 527;
        break;
      case 4u:
        v20 = 525;
        break;
      case 2u:
        v20 = 526;
        break;
      default:
        if ( BYTE1(v19) != 0xB )
          v20 = 524;
        else
          v20 = 528;
        break;
    }
    return EffectWrapper_update((EffectWrapper *)(a1 + 6616), v20, &v21, 0, 0);
  }
  return result;
}
