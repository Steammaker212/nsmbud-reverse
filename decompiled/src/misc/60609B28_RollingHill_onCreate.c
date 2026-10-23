/* RollingHill_onCreate
 * address: 0x60609B28   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RollingHill_onCreate(RollingHill *a1)
{
  int v2; // r5
  unsigned int settings1; // r2
  int v4; // r1
  int size; // r0
  int v6; // r3
  bool v7; // zf
  float v8; // s16
  int *v9; // r3
  float v10; // s0
  float v11; // s18
  int v12; // s0
  float v13; // s0
  int v14; // r2
  float *v15; // r6
  float v16; // s0
  void *Resource; // r0
  int model; // r0
  int size_1; // r2
  bool v20; // zf
  float v21; // s0
  CircularColliderInfo info; // [sp+18h] [bp-48h] BYREF

  v2 = 2;
  settings1 = FIELD_U32(a1, 0x0)._.settings1;
  FIELD_U32(a1, 0x0).direction = settings1 & 1;
  v4 = (settings1 >> 3) & 1;
  FIELD_U8(a1, 0x418) = (settings1 & 8) != 0;
  size = (settings1 >> 20) & 0xF;
  FIELD_U8(a1, 0x419) = size;
  if ( ((settings1 >> 20) & 0xC) != 4 )
  {
    v6 = (settings1 >> 20) & 0xF;
    v7 = v6 == 9;
    if ( v6 != 9 )
      v7 = v6 == 0;
    if ( v7 )
    {
      v9 = &FIELD_U32(a1, 0x41C);
      v10 = (float)((unsigned int)(unsigned __int8)__ROR4__(settings1, 8) + 1);
      v8 = v10 / 10.0;
    }
    else
    {
      v8 = RollingHill_typeInfos[size].size;
      v9 = &FIELD_U32(a1, 0x41C);
      v10 = v8 * 10.0;
    }
    v11 = 1.0;
    *(float *)v9 = v8;
    v2 = 1;
    *(float *)&v12 = (float)(1.0 / v10) * 10.0;
    FIELD_U32(a1, 0x420) = (int)(float)(*(float *)&v12 * (float)(((32 * FIELD_U32(a1, 0x0)._.settigns2) & 0x1E00000) + 0x200000));
    FIELD_U32(a1, 0x428) = v12;
    v13 = -3490.0;
    v14 = HIWORD(settings1) & 0xF;
    v15 = (float *)&FIELD_U32(a1, 0x424);
    if ( FIELD_U32(a1, 0x0).field_56 != 1 )
      v13 = -10.0;
    v16 = v13 - (float)((float)(unsigned int)v14 * 10.0);
    if ( v14 == 15 )
      v16 = -288.0;
    FIELD_U32(a1, 0x0).position.z = v16;
    *v15 = v8 * 160.0;
    if ( !v4 )
    {
      Resource = (void *)LoadResource(ResourceMgrRelated_instance, &RollingHill_typeInfos[size].resourceName.vtable);
      model = Resource_getModel2(
                Resource,
                &RollingHill_typeInfos[(unsigned __int8)FIELD_U8(a1, 0x419)].modelName,
                0,
                0,
                0,
                0,
                0,
                0,
                0);
      FIELD_U32(a1, 0x284) = model;
      size_1 = (unsigned __int8)FIELD_U8(a1, 0x419);
      v20 = size_1 == 9;
      if ( size_1 != 9 )
        v20 = size_1 == 0;
      if ( v20 )
        v11 = v8;
      FIELD_U32(a1, 0x0).scale.z = 1.0;
      FIELD_U32(a1, 0x0).scale.x = v11;
      FIELD_U32(a1, 0x0).scale.y = v11;
      (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)model + 68))(model, &FIELD_U32(a1, 0x0).scale);
      v21 = *v15;
      info.distToCenter.x = 0.0;
      info.distToCenter.y = -v21;
      memset(&info.field_8, 0, 16);
      info.radius = v21;
      info.rotation = 0;
      CircularCollider_init(&FIELD_U32(a1, 0x288), &FIELD_U32(a1, 0x0), &info);
      FIELD_U32(a1, 0x288)._.field_88 |= 4u;
      ColliderBase_setSurfaceType(&FIELD_U32(a1, 0x288)._, RollingHill_typeInfos[(unsigned __int8)FIELD_U8(a1, 0x419)].surfaceType);
      FIELD_U32(a1, 0x288)._.field_150 = &FIELD_U32(a1, 0x438);
      ColliderMgr_add(ColliderMgr_instance, &FIELD_U32(a1, 0x288)._);
      if ( FIELD_U8(a1, 0x419) == 9 )
        *(_DWORD *)(FIELD_U32(a1, 0x284) + 36) = 1;
      RollingHill_updateModel(a1);
    }
  }
  return v2;
}
