/* sub_605BB524
 * address: 0x605BB524   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605BB524(
        unsigned int result,
        void *r1_0,
        sead__SafeString *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r11
  unsigned int v6; // r9
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r10
  int v10; // r5
  unsigned int v11; // r0
  void *v12; // r5
  void *Model2; // r7
  ModelWrapper *v14; // r6
  ModelWrapper *v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // [sp+18h] [bp-40h]
  unsigned int v18; // [sp+1Ch] [bp-3Ch]
  unsigned int v22; // [sp+2Ch] [bp-2Ch]
  int v23; // [sp+30h] [bp-28h]

  v5 = result;
  FIELD_U32(result, 320) = r1_0;
  if ( r1_0 )
  {
    v6 = 0;
    FIELD_U8(result, 1348) = a4;
    FIELD_U8(result, 1349) = a5;
    v7 = 0;
    v18 = 0;
    v23 = 0;
    do
    {
      v8 = 0;
      v9 = 0;
      v17 = v7;
      if ( v7 < 0x10 )
        v8 = v7;
      v22 = v8;
      do
      {
        if ( v6 )
        {
          v10 = v23;
        }
        else
        {
          v11 = 0;
          if ( v18 < 0x10 )
            v11 = v18;
          v10 = v5 + 20 * v11;
          sub_60002B50(v10);
          ++v18;
        }
        v23 = v10;
        v12 = *(void **)(v10 + 16);
        Model2 = (void *)Resource_getModel2(r1_0, a3, 1, 0, 0, 0, 0, 0, (int)v12);
        v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, v12, 4);
        v15 = ModelWrapper_ctor(v14, Model2, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v15, r1_0, 0, v12);
        v16 = 0;
        ++v6;
        if ( v9 < 0x10 )
          v16 = v9;
        ++v9;
        if ( v6 > 0xF )
          v6 = 0;
        *(_DWORD *)(v5 + (v22 << 6) + 4 * v16 + 324) = v14;
      }
      while ( v9 < a4 );
      result = a5;
      v7 = v17 + 1;
    }
    while ( v17 + 1 < a5 );
  }
  return result;
}
