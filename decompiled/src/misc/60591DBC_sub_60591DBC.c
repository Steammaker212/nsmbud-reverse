/* sub_60591DBC
 * address: 0x60591DBC   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60591DBC(int a1)
{
  char v2; // r5
  float v3; // s16
  char v4; // r1
  char v5; // r6
  char v6; // r1
  char v7; // r0
  char v8; // r12
  unsigned int result; // r0
  _BYTE *v10; // r5
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  signed int v14; // r0
  float v15; // s0
  float v16; // s2
  int v17; // r1
  int speed; // [sp+8h] [bp-20h] BYREF
  int target; // [sp+Ch] [bp-1Ch] BYREF

  if ( sub_6059634C() || FIELD_U8(a1, 8208) )
    FIELD_U32(a1, 124) = 1065353216;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = 1;
  v3 = FIELD_F32(a1, 108) + -8.0;
  sub_607160F4(TileMgr_instance, (int)v3, (unsigned __int16)(int)(float)-FIELD_F32(a1, 112), 0, 1);
  v5 = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
    v5 = 1;
  sub_607160F4(TileMgr_instance, (int)(float)(v3 + 16.0), (unsigned __int16)(int)(float)-FIELD_F32(a1, 112), 0, 1);
  if ( (v6 & 0xF) != 0 )
    v5 |= 2u;
  v7 = CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (v7 & 4) != 0 )
  {
    if ( FIELD_F32(a1, 120) >= 0.0 )
      v2 = 2;
    FIELD_U8(a1, 8220) = v2;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF8A8);
  }
  else if ( (v7 & 1) != 0 )
  {
    FIELD_U32(a1, 120) = 0;
    v12 = (v5 & 3) == 3;
    if ( (v5 & 3) != 3 )
      v12 = (v5 & 3) == 0;
    if ( v12 )
    {
      result = a1 + 8200;
      v13 = FIELD_U32(a1, 8200);
      FIELD_U32(a1, 8200) = v13 + 1;
      if ( v13 < 2 )
      {
        if ( v13 )
        {
          FIELD_F32(a1, 124) = 0.25;
        }
        else
        {
          FIELD_U8(a1, 8184) = 0;
          FIELD_U32(a1, 8188) = FIELD_U32(a1, 164) < 1;
          FIELD_F32(a1, 124) = 0.5;
          return 8188;
        }
      }
      else
      {
        *(_DWORD *)result = 0;
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF7C8);
      }
    }
    else
    {
      FIELD_U8(a1, 8220) = v5;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF8A8);
    }
  }
  else
  {
    result = FIELD_U32(a1, 8200);
    if ( result )
    {
      v10 = (_BYTE *)(a1 + 8184);
      result = FIELD_U8(a1, 8184);
      if ( result <= 1 )
      {
        if ( ((unsigned int)dword_60CAF904 & ~(1616453344 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60CAF904) )
        {
          dword_60CAF90C = 0x1000000;
          dword_60CAF910 = 0;
          _cxa_guard_release(dword_60CAF904);
        }
        v11 = *((_DWORD *)&unk_60CAF900 + (unsigned __int8)*v10 + 3);
        target = v11;
        if ( !FIELD_U32(a1, 8188) )
          target = -v11;
        speed = 0x400000;
        result = moveValueTo((int *)(a1 + 164), &target, &speed);
        if ( result == 1 )
        {
          result = (unsigned __int8)*v10 + 1;
          *v10 = result;
        }
      }
    }
    else if ( FIELD_F32(a1, 124) <= 0.0 )
    {
      FIELD_U32(a1, 0x2000) += 0x2000000;
      v14 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      v15 = (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 0x2000) >> 20) & 0xFF0))
                  + (float)((float)((float)(FIELD_U32(a1, 0x2000) & 0xFFFFFF)
                                  * *(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 0x2000) >> 20) & 0xFF0)))
                          * 0.000000059605))
          * 0.5;
      if ( (FIELD_U8(a1, 22) & 1) == 0 )
      {
        if ( v14 == 1 )
          v16 = -0.15;
        else
          v16 = 0.15;
        v15 = v15 + v16;
      }
      FIELD_F32(a1, 120) = v15;
      result = v15 > 0.0;
      v17 = FIELD_U32(a1, 164) + dword_60AF21A8[result];
      FIELD_U32(a1, 164) = v17;
      if ( (unsigned int)(v17 + 50331647) >= 0x5FFFFFF )
      {
        result = dword_60AF21B0[result];
        FIELD_U32(a1, 164) = result;
      }
    }
  }
  return result;
}
