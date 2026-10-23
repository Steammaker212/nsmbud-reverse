/* obj_block_ref_2
 * address: 0x60574730   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall obj_block_ref_2(Enemy *a1)
{
  float z; // r0
  int v3; // r1
  signed int result; // r0
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  _DWORD v9[2]; // [sp+18h] [bp-30h] BYREF
  sead__SafeString a2; // [sp+20h] [bp-28h] BYREF
  _DWORD v11[8]; // [sp+28h] [bp-20h] BYREF

  if ( Actor__getProfileId(&FIELD_U32(a1, 0x0)) == 247 )
  {
    LODWORD(a1[1]._._._.field_20C) = 1;
    z = 500.0;
    FIELD_F32(a1, 0x74) = 500.0;
  }
  else
  {
    z = FIELD_F32(a1, 0x74);
  }
  a1[1]._._._.field_1FC = FIELD_F32(a1, 0x6C);
  a1[1]._._._.field_200 = LODWORD(FIELD_F32(a1, 0x70));
  a1[1]._._._.field_204 = z;
  v3 = sub_605B9FEC(dword_60CB061C, &a1[1]._._._.field_1FC, FIELD_U8(LevelInfo_instance, 18));
  result = 2;
  if ( v3 != 2 )
  {
    FIELD_F32(a1, 0x1F4) = 512.0;
    FIELD_F32(a1, 0x1F8) = 512.0;
    FIELD_F32(a1, 0x1FC) = 32.0;
    FIELD_U32(a1, 0x200) = 1107296256;
    FIELD_F32(a1, 0x90) = 1.0;
    FIELD_F32(a1, 0x94) = 1.0;
    FIELD_F32(a1, 0x98) = 1.0;
    if ( LODWORD(a1[1]._._._.field_20C) == 1 )
    {
      ShapedCollider_init((ShapedCollider *)&FIELD_F32(a1, 0x17E0), &FIELD_U32(a1, 0x0), (ShapedColliderInfo *)&dword_60CAEB34);
      FIELD_U32(a1, 0x1868) |= 0x18u;
    }
    else
    {
      ShapedCollider_init((ShapedCollider *)&FIELD_F32(a1, 0x17E0), &FIELD_U32(a1, 0x0), (ShapedColliderInfo *)&dword_60CAEB10);
    }
    LODWORD(a1[1]._._._.speed.y) = sub_605749C4;
    LODWORD(a1[1]._._._.speed.z) = sub_60574B80;
    LODWORD(a1[1]._._._.maxSpeed.x) = sub_60574D3C;
    ColliderBase_setType((ColliderBase *)&FIELD_F32(a1, 0x17E0), 14);
    v9[0] = 1115684864;
    v9[1] = 1115684864;
    sub_6069AFA0(&a1[1]._._._.aCollider.field_118, &FIELD_U32(a1, 0x6C), &FIELD_F32(a1, 0x1EC), v9, &FIELD_F32(a1, 0x17E0));
    if ( LODWORD(a1[1]._._._.field_20C) == 1 )
    {
      v11[0] = &sead__SafeStringBase__vtable;
      v11[1] = "obj_block";
      Resource = (void *)LoadResource(ResourceMgrRelated_instance, v11);
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "obj_block_ki";
      Model2 = (void *)Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
      v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v8, Resource, 0, 0);
      LODWORD(FIELD_F32(a1, 0x17D8)) = v7;
      sub_60574F00(a1);
    }
    return 1;
  }
  return result;
}
