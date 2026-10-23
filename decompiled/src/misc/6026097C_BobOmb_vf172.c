/* BobOmb_vf172
 * address: 0x6026097C   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf172(CollisionActor *a1)
{
  float v2; // s0
  char *collisionMgr; // r5
  int v4; // r1
  bool v5; // zf
  char v6; // r0
  int direction; // r0
  int v8; // r0
  int result; // r0
  float x; // s0
  int v11; // r6
  bool v12; // zf
  int v13; // r1
  int v14; // r7
  int v15; // r1
  bool v16; // zf
  float y; // r9
  Vec3 v18; // [sp+4h] [bp-2Ch] BYREF

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  collisionMgr = FIELD_U8(a1, 0x288);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  if ( (*(_DWORD *)&FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
  {
    v4 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2552];
    v5 = (v4 & 0x20000) == 0;
    if ( (v4 & 0x20000) != 0 )
      v5 = (*(_DWORD *)&FIELD_U8(a1, 0x288)[2224] & 8) == 0;
    if ( v5 )
      ((void (__fastcall *)(CollisionActor *, float, float, float))loc_602A25F8)(a1, 0.1875, 1.0, 0.5);
    else
      FIELD_F32(a1, 0x7C) = 5.5;
    if ( !LOBYTE(a1[1]._.aCollider.field_D8) )
    {
      v6 = 0;
      if ( !BYTE1(a1[1]._.aCollider.field_D8) )
      {
        v12 = (FIELD_U8(a1, 0x288)[2554] & 2) == 0;
        if ( (FIELD_U8(a1, 0x288)[2554] & 2) != 0 )
          v12 = (FIELD_U8(a1, 0x288)[2224] & 8) == 0;
        if ( v12 && (FIELD_U8(a1, 0x288)[2232] & 1) == 0 && (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
        {
          v13 = *(_DWORD *)&FIELD_U8(a1, 0x288)[5308];
          v6 = 0;
          v14 = BYTE1(v13);
          if ( BYTE1(v13) <= 0xBu )
          {
            v15 = BYTE1(v13);
            v16 = v15 == 6;
            if ( v15 != 6 )
              v16 = v15 == 8;
            if ( !v16 )
            {
              y = FIELD_F32(a1, 0x70);
              v18.x = FIELD_F32(a1, 0x6C);
              v18.y = y;
              v18.z = sub_600024C4((int)a1);
              EffectData_create(dword_60AFD900[v14], &v18, 0, 0);
              v6 = 1;
            }
          }
        }
      }
      LOBYTE(a1[1]._.aCollider.field_D8) = v6;
    }
  }
  direction = FIELD_U32(a1, 0x50);
  if ( ((*(_DWORD *)&collisionMgr[4 * ((direction + 18) >> 5) + 2224] & (1 << ((direction + 18) & 0x1F))) != 0
     || (*(_DWORD *)&collisionMgr[4 * ((direction + 22) >> 5) + 2224] & (1 << ((direction + 22) & 0x1F))) != 0)
    && (*(_DWORD *)&collisionMgr[4 * ((direction + 28) >> 5) + 2224] & (1 << ((direction + 28) & 0x1F))) == 0 )
  {
    v8 = direction ^ 1;
    FIELD_U32(a1, 0x50) = v8;
    FIELD_U32(a1, 0xA0) = Enemy_CommonRotations[v8];
    FIELD_F32(a1, 0x78) = FIELD_F32(a1, 0x78) * -0.5;
  }
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    x = FIELD_F32(a1, 0x78);
    if ( x <= 0.00000011921 && x >= -0.00000011921 )
    {
      v11 = LOBYTE(a1[1]._.aCollider.field_D8);
      FIELD_F32(a1, 0x78) = 0.0;
      result = (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C8E274);
      if ( v11 )
        LOBYTE(a1[1]._.aCollider.field_D8) = v11;
    }
  }
  return result;
}
