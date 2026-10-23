/* Seaweed_onCreate
 * address: 0x606D4CA8   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Seaweed_onCreate(Seaweed *this)
{
  unsigned int settins1; // r0
  unsigned int numLeafs; // r0
  void *resource; // r5
  int numLeafs_; // r0
  unsigned int leafId; // r8
  void *model; // r7
  ModelWrapper *modelWrapper_; // r6
  ModelWrapper *modelWrapper_2; // r0
  unsigned int leafId_; // r0
  int *v11; // r7
  int v12; // r6
  int resource_; // r0
  int v14; // r0
  unsigned int scaleIdx; // r1
  float v16; // s2
  float v17; // s0
  int v18; // r0
  int v19; // r1
  int *v20; // r1
  sead__SafeString identifier; // [sp+24h] [bp-2Ch] BYREF

  settins1 = FIELD_U32(this, 0x14);
  FIELD_U32(this, 0x290) = settins1 & 0xF;
  numLeafs = ((settins1 >> 4) & 3) + 1;
  if ( numLeafs >= 3 )
    numLeafs = 3;
  FIELD_U32(this, 0x294) = numLeafs;
  resource = (void *)Profile__getResArchiveById(FIELD_U32(this, 0xC), 0);
  numLeafs_ = FIELD_U32(this, 0x294);
  if ( numLeafs_ >= 1 )
  {
    for ( leafId = 0; (int)leafId < numLeafs_; ++leafId )
    {
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "obj_sea_wakame";
      model = (void *)Resource_getModel2(resource, &identifier, 1, 0, 1, 0, 0, 0, 0);
      modelWrapper_ = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      modelWrapper_2 = ModelWrapper_ctor(modelWrapper_, model, 1, 0, 1, 0, 0);
      ModelWrapper_setup(modelWrapper_2, resource, 0, 0);
      leafId_ = 0;
      if ( leafId < 3 )
        leafId_ = leafId;
      v11 = &FIELD_U32(this, 0x0) + leafId_;
      v11[161] = (int)modelWrapper_;
      v12 = (int)*FIELD_U32(modelWrapper_, 0xC);
      resource_ = Profile__getResArchiveById(FIELD_U32(this, 0xC), 0);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "wait";
      SkeletalAnim_play(v12, resource_, (const char **)&identifier);
      v14 = **(_DWORD **)(v11[161] + 28);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "wait";
      sub_60446088(v14, (int)resource, &identifier);
      numLeafs_ = FIELD_U32(this, 0x294);
    }
  }
  FIELD_F32(this, 0x6C) = FIELD_F32(this, 0x6C) + 8.0;
  FIELD_F32(this, 0x70) = FIELD_F32(this, 0x70) + -16.0;
  scaleIdx = FIELD_U32(this, 0x290);
  if ( scaleIdx > 4 )
  {
    v17 = 1.0;
    v16 = 1.0;
  }
  else
  {
    v16 = flt_60B08E20[scaleIdx];
    v17 = flt_60B08E00[scaleIdx];
  }
  FIELD_F32(this, 0x90) = v16;
  FIELD_F32(this, 0x94) = v16;
  FIELD_F32(this, 0x98) = v16;
  if ( numLeafs_ >= 1 )
  {
    v18 = 0;
    do
    {
      v19 = 0;
      if ( (unsigned int)v18 < 3 )
        v19 = v18;
      ++v18;
      v20 = &FIELD_U32(this, 0x0) + v19;
      *(float *)(**(_DWORD **)(v20[161] + 12) + 24) = v17;
      *(float *)(**(_DWORD **)(v20[161] + 28) + 24) = v17;
    }
    while ( v18 < FIELD_U32(this, 0x294) );
  }
  Seaweed_setupModels(this);
  return 1;
}
