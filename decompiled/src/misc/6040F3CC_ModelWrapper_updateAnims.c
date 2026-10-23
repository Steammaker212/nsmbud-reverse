/* ModelWrapper_updateAnims
 * address: 0x6040F3CC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall ModelWrapper_updateAnims(ModelWrapper *this)
{
  int count; // r6
  ModelWrapper *v2; // r4
  void **animations; // r5
  bool v4; // zf
  int v5; // t1
  int *v6; // r5
  bool v7; // zf
  int v8; // t1
  int *v9; // r5
  bool v10; // zf
  int v11; // t1
  int *v12; // r5
  bool v13; // zf
  int v14; // t1
  int *v15; // r5
  bool v16; // zf
  int v17; // t1

  v2 = this;
  animations = FIELD_U32(this, 0x8).animations;
  v4 = animations == 0;
  if ( animations )
  {
    count = FIELD_U32(this, 0x8).count;
    v4 = count == 0;
  }
  if ( !v4 )
  {
    do
    {
      v5 = (int)*animations++;
      this = (ModelWrapper *)Animation_update(v5);
      --count;
    }
    while ( count );
  }
  v6 = (int *)FIELD_U32(v2, 0x10).animations;
  v7 = v6 == 0;
  if ( v6 )
  {
    count = FIELD_U32(v2, 0x10).count;
    v7 = count == 0;
  }
  if ( !v7 )
  {
    do
    {
      v8 = *v6++;
      this = (ModelWrapper *)Animation_update(v8);
      --count;
    }
    while ( count );
  }
  v9 = (int *)FIELD_U32(v2, 0x18).animations;
  v10 = v9 == 0;
  if ( v9 )
  {
    count = FIELD_U32(v2, 0x18).count;
    v10 = count == 0;
  }
  if ( !v10 )
  {
    do
    {
      v11 = *v9++;
      this = (ModelWrapper *)Animation_update(v11);
      --count;
    }
    while ( count );
  }
  v12 = (int *)FIELD_U32(v2, 0x20).animations;
  v13 = v12 == 0;
  if ( v12 )
  {
    count = FIELD_U32(v2, 0x20).count;
    v13 = count == 0;
  }
  if ( !v13 )
  {
    do
    {
      v14 = *v12++;
      this = (ModelWrapper *)Animation_update(v14);
      --count;
    }
    while ( count );
  }
  v15 = (int *)FIELD_U32(v2, 0x28).animations;
  v16 = v15 == 0;
  if ( v15 )
  {
    v2 = (ModelWrapper *)FIELD_U32(v2, 0x28).count;
    v16 = v2 == 0;
  }
  if ( !v16 )
  {
    do
    {
      v17 = *v15++;
      this = (ModelWrapper *)Animation_update(v17);
      v2 = (ModelWrapper *)((char *)v2 - 1);
    }
    while ( v2 );
  }
  return this;
}
