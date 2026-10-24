/* SolidOnTopCollider_initImpl
 * address: 0x6015E3F0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SolidOnTopCollider_initImpl(
        SolidOnTopCollider *this,
        ColliderOwnerInfo *ownerInfo,
        SolidOnTopColliderInfo *info)
{
  int numPoints; // r2
  int v7; // r0
  int v8; // r1
  bool v9; // cc
  Vec2 *points; // r2
  float *v11; // r3
  Vec2 *v12; // r2
  float v13; // r6
  float x; // t1

  sub_601603E8(&FIELD_U32(this, 0x0));
  *(ColliderOwnerInfo *)&FIELD_U32(this, 0x98) = *ownerInfo;
  FIELD_F32(this, 0xAC) = FIELD_F32(info, 0x0);
  LODWORD(FIELD_F32(this, 0xB0)) = FIELD_U32(info, 0x4);
  LODWORD(FIELD_F32(this, 0xBC)) = FIELD_U32(info, 0x8);
  FIELD_F32(this, 0xC0) = FIELD_F32(info, 0xC);
  FIELD_U32(this, 0xF4) = FIELD_U32(info, 0x14);
  FIELD_F32(this, 0x16C) = 4.0;
  ColliderBase_setSolidity(&FIELD_U32(this, 0x0), 2);
  numPoints = FIELD_U32(this, 0x154);
  if ( numPoints >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = numPoints > (unsigned int)v8;
      points = FIELD_U32(info, 0x10);
      v11 = (float *)FIELD_U32(this, 0x158);
      ++v8;
      x = FIELD_F32(points + (v7) * 8, 0x0);
      v12 = &points[v7];
      v13 = x;
      if ( v9 )
        v11 = (float *)((char *)v11 + v7 * 8);
      ++v7;
      *v11 = v13;
      v11[1] = FIELD_F32(v12, 0x4);
      numPoints = FIELD_U32(this, 0x154);
    }
    while ( v8 < numPoints );
  }
  FIELD_U32(this, 0x90) = 0;
  sub_6015E4F0((int)this);
  (*(void (__fastcall **)(SolidOnTopCollider *))(FIELD_U32(this, 0x0) + 48))(this);
  return (*(int (__fastcall **)(SolidOnTopCollider *))(FIELD_U32(this, 0x0) + 52))(this);
}
