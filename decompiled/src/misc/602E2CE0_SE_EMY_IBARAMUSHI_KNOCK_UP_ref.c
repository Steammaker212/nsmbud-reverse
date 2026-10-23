/* SE_EMY_IBARAMUSHI_KNOCK_UP_ref
 * address: 0x602E2CE0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_IBARAMUSHI_KNOCK_UP_ref(Enemy *a1)
{
  int result; // r0
  char *v3; // r7
  ActiveColliderNode *next; // r0
  ActiveCollider *owner; // r1
  TileCheck *checkStructPtr; // r0
  int v7; // r1
  bool v8; // zf
  ActiveColliderNode *v9; // r0
  ActiveCollider *v10; // r1
  TileCheck *v11; // r0
  bool v12; // zf
  int y_low; // r1
  int v14; // r5
  TileCheck_Result v15; // [sp+8h] [bp-B0h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-88h] BYREF
  Vec2 a3; // [sp+38h] [bp-80h] BYREF
  TileCheck checkStruct; // [sp+40h] [bp-78h] BYREF
  TileCheck_Param checkStructPram; // [sp+8Ch] [bp-2Ch] BYREF

  v3 = &a1[2]._._.collisionMgr[2144];
  result = (unsigned __int8)a1[2]._._.collisionMgr[2144];
  if ( !result )
  {
    next = a1[1]._._._.aCollider.activeNode.next;
    owner = a1[1]._._._.aCollider.activeNode.owner;
    v15.field_C = 0;
    v15.field_10 = 0;
    *(_WORD *)&checkStructPram.field_0 = 0;
    LODWORD(a3.x) = owner;
    LODWORD(a3.y) = next;
    LODWORD(positionOffset.x) = owner;
    positionOffset.y = *(float *)&next + -1.0;
    checkStructPram.field_2 = FIELD_U32(a1, 0x0)._._.field_56;
    checkStructPram.field_3 = FIELD_U32(a1, 0x0)._._.field_57;
    checkStructPram.field_4 = 0;
    checkStructPram.field_8 = 0;
    checkStructPtr = TileCheck_ctor(&checkStruct, &checkStructPram);
    if ( TileCheck_check(checkStructPtr, &v15, &a3, &positionOffset, 15) == 1 )
    {
      if ( v15.field_20 )
      {
        v7 = *(_DWORD *)(v15.field_20 + 300);
        v8 = v7 == 17;
        if ( v7 != 17 )
          v8 = (*(_BYTE *)(v15.field_20 + 137) & 4) == 0;
        if ( !v8 )
          goto LABEL_13;
      }
    }
    v9 = a1[1]._._._.aCollider.createNode.next;
    v10 = a1[1]._._._.aCollider.createNode.owner;
    v15.field_C = 0;
    v15.field_10 = 0;
    *(_WORD *)&checkStructPram.field_0 = 0;
    LODWORD(a3.x) = v10;
    LODWORD(a3.y) = v9;
    LODWORD(positionOffset.x) = v10;
    positionOffset.y = *(float *)&v9 + -1.0;
    checkStructPram.field_2 = FIELD_U32(a1, 0x0)._._.field_56;
    checkStructPram.field_3 = FIELD_U32(a1, 0x0)._._.field_57;
    checkStructPram.field_4 = 0;
    checkStructPram.field_8 = 0;
    v11 = TileCheck_ctor(&checkStruct, &checkStructPram);
    result = TileCheck_check(v11, &v15, &a3, &positionOffset, 15);
    if ( result )
    {
      result = v15.field_20;
      v12 = v15.field_20 == 0;
      if ( v15.field_20 )
        v12 = *(_DWORD *)(v15.field_20 + 300) == 17;
      if ( !v12 )
      {
        result = *(unsigned __int8 *)(v15.field_20 + 137);
        if ( (result & 4) != 0 )
        {
LABEL_13:
          a1[2]._._.collisionMgr[2116] = 1;
          a1[2]._._.collisionMgr[2127] = 4;
          a1[2]._._.collisionMgr[2128] = 8;
          if ( *(_DWORD *)&a1[2]._._.collisionMgr[2140] )
          {
            y_low = LODWORD(FIELD_U32(a1, 0x0)._._.position.y);
            v14 = Global_BasicSoundActor1;
            *(float *)&checkStruct.field_0 = FIELD_U32(a1, 0x0)._._.position.x;
            checkStruct.field_4 = y_low;
            mapPositionToScreen((Vec2 *)&checkStructPram, (Vec3 *)&checkStruct);
            sub_60813810(v14, (int)"SE_EMY_IBARAMUSHI_KNOCK_UP", (int)&checkStructPram, 1, 0);
            sub_602E4BC8(a1);
          }
          *v3 = 1;
          *(float *)&a1[2]._._.collisionMgr[2148] = FIELD_U32(a1, 0x0)._._.position.y;
          FIELD_U32(a1, 0x0)._._.speed.y = 3.2;
          FIELD_U32(a1, 0x0)._._.field_64 = -0.33;
          return -1096223293;
        }
      }
    }
  }
  return result;
}
