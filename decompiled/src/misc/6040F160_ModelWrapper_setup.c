/* ModelWrapper_setup
 * address: 0x6040F160   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall ModelWrapper_setup(ModelWrapper *this, void *archive, int *unkPtr, void *heap)
{
  int count; // r11
  int *this_; // r7
  void **animations; // r10
  bool hasSklAnims; // zf
  int v11; // r5
  int v12; // r6
  int v13; // r0
  int v14; // r10
  bool v15; // zf
  int v16; // r5
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  int v19; // r10
  bool v20; // zf
  int v21; // r5
  _DWORD *v22; // r6
  _DWORD *v23; // r0
  int v24; // r10
  bool v25; // zf
  int v26; // r5
  _DWORD *v27; // r6
  _DWORD *v28; // r0
  int v29; // r10
  bool v30; // zf
  int v31; // r5
  int v32; // r6
  int v33; // r0

  this_ = (int *)this;
  FIELD_U32(this, 0x4) = archive;
  animations = FIELD_U32(this, 0xC);
  hasSklAnims = animations == 0;
  if ( animations )
  {
    count = FIELD_U32(this, 0x8);
    hasSklAnims = count == 0;
  }
  if ( !hasSklAnims )
  {
    v11 = 0;
    do
    {
      v12 = operator_new_8DE25C(0x8Cu, heap, 4);
      v13 = SkeletalAnim_ctor(v12);
      SkeletalAnim_init(v13, *this_, (int)archive, unkPtr, (int)heap);
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)*this_ + 0xAC))(*this_, v11, v12);
      this = (ModelWrapper *)(*(int (__fastcall **)(int, int, float))(*(_DWORD *)*this_ + 0xA4))(*this_, v11, 1.0);
      animations[v11++] = (void *)v12;
    }
    while ( count != v11 );
  }
  v14 = this_[5];
  v15 = v14 == 0;
  if ( v14 )
  {
    count = this_[4];
    v15 = count == 0;
  }
  if ( !v15 )
  {
    v16 = 0;
    do
    {
      v17 = (_DWORD *)operator_new_8DE25C(0x94u, heap, 4);
      v18 = ModelWrapper_setup_helper_450DB4(v17);
      ModelWrapper_setup_helper_450E5C((int)v18, *this_, (int)archive, unkPtr, (int)heap);
      this = (ModelWrapper *)(*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)*this_ + 0xB0))(*this_, v16, v17);
      *(_DWORD *)(v14 + 4 * v16++) = v17;
    }
    while ( count != v16 );
  }
  v19 = this_[7];
  v20 = v19 == 0;
  if ( v19 )
  {
    count = this_[6];
    v20 = count == 0;
  }
  if ( !v20 )
  {
    v21 = 0;
    do
    {
      v22 = (_DWORD *)operator_new_8DE25C(0x98u, heap, 4);
      v23 = ModelWrapper_setup_helper(v22);
      ModelWrapper_setup_helper_445CD0((int)v23, *this_, (int)archive, unkPtr, (int)heap);
      this = (ModelWrapper *)(*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)*this_ + 180))(*this_, v21, v22);
      *(_DWORD *)(v19 + 4 * v21++) = v22;
    }
    while ( count != v21 );
  }
  v24 = this_[9];
  v25 = v24 == 0;
  if ( v24 )
  {
    count = this_[8];
    v25 = count == 0;
  }
  if ( !v25 )
  {
    v26 = 0;
    do
    {
      v27 = (_DWORD *)operator_new_8DE25C(0xF0u, heap, 4);
      v28 = ModelWrapper_setup_helper_451438(v27);
      ModelWrapper_setup_helper_45154C(v28, *this_, archive, unkPtr, heap);
      this = (ModelWrapper *)(*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)*this_ + 184))(*this_, v26, v27);
      *(_DWORD *)(v24 + 4 * v26++) = v27;
    }
    while ( count != v26 );
  }
  v29 = this_[11];
  v30 = v29 == 0;
  if ( v29 )
  {
    count = this_[10];
    v30 = count == 0;
  }
  if ( !v30 )
  {
    v31 = 0;
    do
    {
      v32 = operator_new_8DE25C(0x88u, heap, 4);
      v33 = ModelWrapper_setup_helper_446E58(v32);
      ModelWrapper_setup_helper_446F0C(v33, *this_, archive, unkPtr, heap);
      this = (ModelWrapper *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)*this_ + 188))(*this_, v31, v32);
      *(_DWORD *)(v29 + 4 * v31++) = v32;
    }
    while ( count != v31 );
  }
  return this;
}
