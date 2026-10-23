/* CircularCollider_initImpl
 * address: 0x60157200   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CircularCollider_initImpl(
        CircularCollider *this,
        ColliderOwnerInfo *ownerInfo,
        CircularColliderInfo *info)
{
  float v6; // r1
  float v7; // s0
  float v8; // r2
  unsigned int rotation; // r0
  float v10; // r3
  float v11; // s6
  float v12; // s8
  float v13; // s4
  float *v14; // r1
  float v15; // s3
  int v16; // s14
  int v17; // s12
  float v18; // s8
  float v19; // s10
  float v20; // s0

  sub_601603E8(&FIELD_U32(this, 0x0));
  *(ColliderOwnerInfo *)&FIELD_U32(this, 0x0).ownerPositionPtr = *ownerInfo;
  FIELD_U32(this, 0x0).distToCenter = FIELD_U32(info, 0x0);
  v6 = FIELD_F32(info, 0x8);
  FIELD_U32(this, 0x0).field_BC = v6;
  v7 = v6;
  v8 = FIELD_F32(info, 0xC);
  FIELD_U32(this, 0x0).field_C0 = v8;
  rotation = FIELD_U32(info, 0x1C);
  FIELD_U32(this, 0x0).rotation = rotation;
  FIELD_U32(this, 0x16C) = LODWORD(FIELD_F32(info, 0x18));
  v10 = FIELD_F32(info, 0x10);
  FIELD_F32(this, 0x154) = v10;
  v11 = v10 - v6;
  v12 = FIELD_F32(info, 0x14);
  FIELD_F32(this, 0x158) = v12;
  FIELD_U32(this, 0x0).owner = 0;
  v13 = v12 - v8;
  if ( rotation )
  {
    v14 = (float *)((char *)sinLutTable + ((rotation >> 20) & 0xFF0));
    v15 = (float)(rotation & 0xFFFFFF);
    *(float *)&v16 = v14[2] + (float)((float)(v15 * 0.000000059605) * v14[3]);
    *(float *)&v17 = *v14 + (float)((float)(v15 * 0.000000059605) * v14[1]);
    v18 = (float)(v13 * *(float *)&v16) + (float)(v11 * *(float *)&v17);
    v19 = (float)(v11 * *(float *)&v16) - (float)(v13 * *(float *)&v17);
    FIELD_U32(this, 0x0).field_E4 = v16;
    LOBYTE(FIELD_U32(this, 0x0).field_E8) = v17;
    HIBYTE(FIELD_U32(this, 0x0).field_E8) = (v17 ^ 0x80000000) >> 24;
    BYTE2(FIELD_U32(this, 0x0).field_E8) = (v17 ^ 0x80000000) >> 16;
    BYTE1(FIELD_U32(this, 0x0).field_E8) = BYTE1(v17);
    FIELD_U32(this, 0x0).field_EC = v17;
    FIELD_U32(this, 0x0).field_F0 = v16;
  }
  else
  {
    v19 = v10 - v6;
    v18 = v12 - v8;
  }
  v20 = v7 + v19;
  FIELD_F32(this, 0x15C) = v20;
  FIELD_F32(this, 0x160) = v8 + v18;
  FIELD_U32(this, 0x0).field_CC = v20;
  FIELD_U32(this, 0x0).field_D0 = v8 + v18;
  FIELD_U32(this, 0x17C) = FIELD_U32(this, 0x174) + rotation;
  FIELD_U32(this, 0x180) = FIELD_U32(this, 0x178) + rotation;
  (*(void (__fastcall **)(CircularCollider *))(FIELD_U32(this, 0x0)._.vtable + 0x30))(this);
  return (*(int (__fastcall **)(CircularCollider *))(FIELD_U32(this, 0x0)._.vtable + 0x34))(this);
}
