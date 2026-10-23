/* StageActor__ctor
 * address: 0x600002A0   size: 592   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall StageActor__ctor(StageActor *this, ActorBuildInfo *buildInfo)
{
  float x; // r0
  float y; // r1
  float z; // r2
  ActorInfo *actorInfo_; // r0
  float v8; // s2
  ActorInfo *actorInfo; // r0
  float v10; // s2
  int v11; // r1
  float v12; // r1
  float v13; // r2
  float v14; // r1
  float v15; // r2
  float v16; // r1
  float v17; // r2
  ActorInfo *actorInfo_2; // r0
  unsigned int v19; // s10
  float v20; // s2
  float v21; // s4

  Actor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)&StageActor__vtable;
  FIELD_U32(this, 0x50) = 0;
  *(_WORD *)&FIELD_U8(this, 0x54) = -1;
  FIELD_U8(this, 0x56) = FIELD_U8(buildInfo, 0x20);
  FIELD_U8(this, 0x57) = 1;
  FIELD_F32(this, 0x68) = 0.0;
  FIELD_F32(this, 0x64) = 0.0;
  FIELD_U32(this, 0x60) = 0;
  FIELD_U32(this, 0x5C) = 0;
  FIELD_U32(this, 0x58) = 0;
  x = FIELD_F32(buildInfo, 0x10);
  y = FIELD_F32(buildInfo, 0x14);
  z = FIELD_F32(buildInfo, 0x18);
  FIELD_F32(this, 0x8C) = 0.0;
  FIELD_F32(this, 0x88) = 0.0;
  FIELD_F32(this, 0x84) = 0.0;
  FIELD_F32(this, 0x80) = 0.0;
  FIELD_F32(this, 0x7C) = 0.0;
  FIELD_F32(this, 0x6C) = x;
  FIELD_F32(this, 0x70) = y;
  FIELD_F32(this, 0x74) = z;
  FIELD_F32(this, 0x78) = 0.0;
  FIELD_F32(this, 0x90) = 1.0;
  FIELD_F32(this, 0x94) = 1.0;
  FIELD_U32(this, 0xB8) = 0;
  FIELD_F32(this, 0x98) = 1.0;
  FIELD_U32(this, 0x9C) = 0;
  FIELD_U32(this, 0xA0) = 0;
  FIELD_U32(this, 0xA4) = 0;
  FIELD_U32(this, 0xA8) = 0;
  FIELD_U32(this, 0xAC) = 0;
  FIELD_U32(this, 0xB0) = 0;
  FIELD_U32(this, 0xB4) = 0;
  ActiveCollider_ctor(&FIELD_U32(this, 0xBC));
  actorInfo_ = FIELD_U32(FIELD_U32(buildInfo, 0xC), 0xC);
  v8 = (float)FIELD_U32(actorInfo_, 0xC);
  FIELD_F32(this, 0x1EC) = (float)FIELD_U32(actorInfo_, 0x8);
  *(float *)&FIELD_U32(this, 0x1F0) = v8;
  actorInfo = FIELD_U32(FIELD_U32(buildInfo, 0xC), 0xC);
  v10 = (float)FIELD_U32(actorInfo, 0x14) + (float)FIELD_U32(actorInfo, 0x14);
  FIELD_F32(this, 0x1F4) = (float)FIELD_U32(actorInfo, 0x10) + (float)FIELD_U32(actorInfo, 0x10);
  FIELD_F32(this, 0x1F8) = v10;
  v11 = LODWORD(FIELD_F32(this, 0x1F8));
  FIELD_F32(this, 0x1FC) = FIELD_F32(this, 0x1F4);
  FIELD_U32(this, 0x200) = v11;
  FIELD_U8(this, 0x214) = FIELD_U8(LevelInfo_instance, 20);
  FIELD_U8(this, 0x215) = 0;
  FIELD_U8(this, 0x216) = 1;
  FIELD_U8(this, 0x217) = 1;
  FIELD_U8(this, 0x218) = 0;
  FIELD_U8(this, 0x219) = 1;
  FIELD_U8(this, 0x21A) = 0;
  FIELD_U8(this, 0x21B) = FIELD_U8(buildInfo, 0x21);
  FIELD_U8(this, 0x21C) = FIELD_U8(buildInfo, 0x22);
  FIELD_U32(this, 0x21E) = FIELD_U32(buildInfo, 0x38);
  FIELD_U32(this, 0x220) = 0;
  FIELD_U32(this, 0x224) = 0;
  FIELD_U8(this, 0x228) = 0;
  FIELD_U32(this, 0x22C) = 0;
  FIELD_U32(this, 0x230) = 0;
  FIELD_U32(this, 0x234) = 0;
  FIELD_U32(this, 0x238) = FIELD_U32(buildInfo, 0x20);
  FIELD_F32(this, 0x23C) = 0.0;
  FIELD_F32(this, 0x240) = 0.0;
  FIELD_F32(this, 0x244) = 0.0;
  v12 = FIELD_F32(buildInfo, 0x14);
  v13 = FIELD_F32(buildInfo, 0x18);
  FIELD_F32(this, 0x248) = FIELD_F32(buildInfo, 0x10);
  FIELD_F32(this, 0x24C) = v12;
  FIELD_F32(this, 0x250) = v13;
  v14 = FIELD_F32(buildInfo, 0x14);
  v15 = FIELD_F32(buildInfo, 0x18);
  FIELD_F32(this, 0x254) = FIELD_F32(buildInfo, 0x10);
  FIELD_F32(this, 0x258) = v14;
  FIELD_F32(this, 0x25C) = v15;
  v16 = FIELD_F32(buildInfo, 0x14);
  v17 = FIELD_F32(buildInfo, 0x18);
  FIELD_F32(this, 0x260) = FIELD_F32(buildInfo, 0x10);
  FIELD_F32(this, 0x264) = v16;
  FIELD_F32(this, 0x268) = v17;
  FIELD_U32(this, 0x26C) = 0;
  FIELD_U32(this, 0x270) = 0;
  FIELD_U32(this, 0x274) = 0;
  FIELD_U32(this, 0x278) = FIELD_U32(buildInfo, 0x28);
  FIELD_F32(this, 0x27C) = 0.0;
  FIELD_U32(this, 0x280) = 0;
  actorInfo_2 = FIELD_U32(FIELD_U32(buildInfo, 0xC), 0xC);
  v19 = (unsigned __int16)FIELD_U32(actorInfo_2, 0x1E);
  v20 = (float)(unsigned __int16)FIELD_U32(actorInfo_2, 0x1A) + 256.0;
  v21 = (float)(unsigned __int16)FIELD_U32(actorInfo_2, 0x1C) + 80.0;
  FIELD_F32(this, 0x204) = (float)(unsigned __int16)FIELD_U32(actorInfo_2, 0x18) + 256.0;
  FIELD_F32(this, 0x208) = v20;
  FIELD_F32(this, 0x20C) = v21;
  FIELD_F32(this, 0x210) = (float)v19 + 80.0;
  FIELD_U8(this, 0x129) = FIELD_U8(this, 0x56);
  return this;
}
