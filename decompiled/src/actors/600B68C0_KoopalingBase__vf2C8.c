/* KoopalingBase__vf2C8
 * address: 0x600B68C0   size: 440   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600266E0
// 
// Overridden by: None
signed int __fastcall KoopalingBase__vf2C8(Enemy *a1)
{
  int *v2; // r0
  char *v3; // r6
  int v4; // r0
  int (__fastcall *v5)(int, sead__SafeString *); // r2
  int v6; // r5
  float v7; // s0
  float v8; // s2
  float v9; // r0
  float v10; // r1
  float y; // s0
  float z; // r0
  float v13; // s2
  sead__SafeString v15; // [sp+0h] [bp-40h] BYREF
  float v16; // [sp+Ch] [bp-34h]
  float v17; // [sp+1Ch] [bp-24h]
  float v18; // [sp+2Ch] [bp-14h]

  if ( (a1[1]._._.collisionMgr[228] & 2) != 0
    || (v3 = &a1[1]._._.collisionMgr[148], (v2 = *(int **)&a1[1]._._.collisionMgr[148]) == 0) )
  {
    y = FIELD_U32(a1, 0x0)._._.position.y;
    z = FIELD_U32(a1, 0x0)._._.position.z;
    *(float *)&a1[1]._._.collisionMgr[80] = FIELD_U32(a1, 0x0)._._.position.x;
    *(float *)&a1[1]._._.collisionMgr[84] = y + -2.5;
    *(float *)&a1[1]._._.collisionMgr[88] = z;
    v13 = (float)(FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.y + FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.y) + 8.0;
    *(float *)&a1[1]._._.collisionMgr[92] = (float)(FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.x
                                                  + FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.x)
                                          + 8.0;
    *(float *)&a1[1]._._.collisionMgr[96] = v13;
  }
  else
  {
    v4 = *v2;
    v5 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v4 + 0x54);
    v15.vtable = &sead__SafeStringBase__vtable;
    v15.cstr = "spine";
    v6 = v5(v4, &v15);
    if ( v6 < 0 || v6 >= (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)v3 + 92))(**(_DWORD **)v3) )
    {
      v7 = FIELD_U32(a1, 0x0)._._.position.y;
      v8 = v7 + FIELD_U32(a1, 0x0)._._.effectOffset.y;
      v9 = FIELD_U32(a1, 0x0)._._.position.z + FIELD_U32(a1, 0x0)._._.effectOffset.z;
      v10 = FIELD_U32(a1, 0x0)._._.position.x + FIELD_U32(a1, 0x0)._._.effectOffset.x;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD, int, sead__SafeString *))(***(_DWORD ***)v3 + 108))(**(_DWORD **)v3, v6, &v15);
      v7 = FIELD_U32(a1, 0x0)._._.position.y;
      v8 = v17;
      v9 = v18;
      v10 = v16;
    }
    *(float *)&a1[1]._._.collisionMgr[80] = v10;
    *(float *)&a1[1]._._.collisionMgr[84] = v7 + -2.5;
    *(float *)&a1[1]._._.collisionMgr[88] = v9;
    *(float *)&a1[1]._._.collisionMgr[92] = (float)(FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.x
                                                  + FIELD_U32(a1, 0x0)._._.aCollider.info.distToEdge.x)
                                          + 12.0;
    *(float *)&a1[1]._._.collisionMgr[96] = (float)((float)(v8 - v7) + (float)(v8 - v7)) + 26.0;
  }
  *(_DWORD *)&a1[1]._._.collisionMgr[100] = 0x42800000;
  return 7048;
}
