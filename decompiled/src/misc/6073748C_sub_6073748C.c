/* sub_6073748C
 * address: 0x6073748C   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6073748C(ColliderBase *a1)
{
  ShapedCollider *v2; // r8
  signed int v3; // r1
  signed int result; // r0
  int v5; // s4
  int v6; // r6
  ColliderListNode *prev; // r7
  float v8; // r5
  float v9; // r10
  int v10; // r7
  _BYTE *v11; // r6
  char v12; // r12
  ShapedColliderInfo v13; // [sp+0h] [bp-70h] BYREF
  ActorBuildInfo v14; // [sp+24h] [bp-4Ch] BYREF

  a1[21].field_E4 = 0;
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
  v2 = (ShapedCollider *)&a1[18];
  ColliderBase_setType(a1 + 18, 7);
  v3 = sub_605635AC((int)a1, 1, 1);
  result = 2;
  if ( v3 == 1 )
  {
    FIELD_U32(a1 + (1) * 340, 0xA0) = (char *)1132462080;
    a1[1].owner57Ptr = (char *)1140850688;
    a1[1].ownerPlayerIdPtr = (char *)1107296256;
    FIELD_F32(a1 + (1) * 340, 0xAC) = 32.0;
    FIELD_F32(a1 + (1) * 340, 0xB0) = 512.0;
    FIELD_U32(a1 + (1) * 340, 0xB4) = 1140850688;
    FIELD_U32(a1 + (1) * 340, 0xB8) = 1149239296;
    FIELD_F32(a1 + (1) * 340, 0xBC) = 1024.0;
    a1[21].field_8C = 1115684864;
    a1[21].owner = (StageActor *)1115684864;
    v5 = (int)FIELD_U32(a1, 0x10)[0].next & 0xF;
    LOBYTE(a1[21].field_FC) = v5;
    LOBYTE(a1[21].field_110) = v5;
    FIELD_F32(a1, 0x74) = FIELD_F32(a1, 0x74) + (float)((float)(unsigned int)v5 * -32.0);
    v6 = (*(int (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 432))(a1);
    a1[21].field_10C = v6;
    if ( v6 == 24 )
      BYTE1(a1[21].field_104) = 1;
    prev = FIELD_U32(a1, 0x10)[7].prev;
    v8 = FIELD_F32(a1, 0x70);
    v9 = FIELD_F32(a1, 0x74);
    memset(&v14.settings2, 0, 40);
    v14.settings1 = v6;
    v14.parentId = FIELD_U32(a1, 0x8);
    v14.profile = Profile__get(0x33Bu);
    LODWORD(v14.position.x) = prev;
    v14.position.y = v8;
    v14.position.z = v9;
    v10 = 0;
    v11 = ActorMgr__create((void *)ActorMgr__instance, &v14, 0);
    if ( ((unsigned int)&dword_60CBDE5C & ~(1618179588 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDE5C) )
    {
      dword_60CBDE58 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDE5C);
    }
    if ( v11 )
    {
      v10 = (**(int (__fastcall ***)(_BYTE *, int *))v11)(v11, &dword_60CBDE58);
      if ( v10 )
        v10 = (int)v11;
    }
    a1[21].field_100 = v10;
    a1[20]._.vtable = 1065353216;
    a1[20]._.field_8 = 1071225242;
    FIELD_U32(a1, 0x90) = (StageActor *)1065353216;
    FIELD_U32(a1, 0x94) = 1065353216;
    FIELD_U32(a1, 0x98) = (Vec3 *)1065353216;
    memset(&v13, 0, 16);
    v13.topLeft.x = -8.0;
    v13.topLeft.y = 8.0;
    v13.bottomRight.x = 8.0;
    v13.bottomRight.y = -8.0;
    v13.rotation = 0;
    ShapedCollider_init(v2, (StageActor *)a1, &v13);
    (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 428))(a1);
    (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 436))(a1);
    (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 440))(a1);
    return 1;
  }
  return result;
}
