/* sub_6070DA84
 * address: 0x6070DA84   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070DA84(int a1)
{
  int v2; // r5
  ModelWrapper *v3; // r6
  ModelWrapper *v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  ColliderBase *v8; // r6
  int result; // r0
  float *v10; // r9
  float v11; // s4
  float v12; // s2
  float *v13; // r6
  float v14; // s0
  int i; // r7
  float v16; // s2
  float v17; // s0
  float v18; // r1
  float v19; // s0
  float v20; // r1
  float v21; // [sp+0h] [bp-78h] BYREF
  float v22; // [sp+4h] [bp-74h]
  int v23; // [sp+8h] [bp-70h]
  int v24; // [sp+Ch] [bp-6Ch]
  int v25; // [sp+10h] [bp-68h]
  int v26; // [sp+14h] [bp-64h]
  int v27; // [sp+18h] [bp-60h]
  int v28; // [sp+1Ch] [bp-5Ch]
  int v29; // [sp+20h] [bp-58h]
  int v30; // [sp+24h] [bp-54h]
  int v31; // [sp+28h] [bp-50h]
  int v32; // [sp+2Ch] [bp-4Ch]

  v21 = 1.0;
  v22 = 0.0;
  v23 = 0;
  v25 = 0;
  v26 = 1065353216;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 1065353216;
  v2 = a1 + 108;
  v24 = FIELD_U32(a1, 108);
  v28 = FIELD_U32(a1, 112);
  v32 = FIELD_U32(a1, 116);
  v3 = *(ModelWrapper **)(a1 + 6120);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v3, 0x0) + 60))(FIELD_U32(v3, 0x0), &v21);
  ModelWrapper_updateModel(v3);
  v4 = *(ModelWrapper **)(v2 + 6016);
  if ( v4 )
  {
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v4, 0x0) + 60))(FIELD_U32(v4, 0x0), &v21);
    ModelWrapper_updateAnims(v4);
    ModelWrapper_updateModel(v4);
  }
  if ( ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6496, v2) )
  {
    v5 = FIELD_U32(a1, 108);
    v6 = FIELD_U32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v5;
    FIELD_U32(a1, 588) = v6;
    FIELD_U32(a1, 592) = v7;
    FIELD_U32(a1, 608) = v5;
    FIELD_U32(a1, 612) = v6;
    FIELD_U32(a1, 616) = v7;
    v8 = (ColliderBase *)(a1 + 6128);
    sub_60160948((_DWORD *)(a1 + 6128));
  }
  else
  {
    v8 = (ColliderBase *)(a1 + 6128);
  }
  ShapedCollider_execute(v8);
  result = TileMgr_instance;
  if ( FIELD_U8(TileMgr_instance, 10273) )
  {
    v10 = (float *)(a1 + 6544);
    if ( (FIELD_U8(dword_60C99DD4, 1052) & 0x3F) == 0 )
    {
      if ( *v10 != *(float *)v2 )
      {
        v11 = FIELD_F32(a1, 112);
        goto LABEL_11;
      }
      v11 = FIELD_F32(a1, 112);
      if ( FIELD_F32(a1, 6548) != v11 )
      {
LABEL_11:
        v12 = FIELD_F32(TileMgr_instance, 24);
        if ( v11 < (float)(v12 + 36.0) )
        {
          v13 = (float *)(a1 + 6552);
          v14 = *(float *)v2 + FIELD_F32(a1, 6552);
          if ( (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) < v14
            && v14 < (float)(FIELD_F32(dword_60CC6484, 120) + 64.0) )
          {
            v21 = *(float *)v2 + FIELD_F32(a1, 6552);
            v22 = v12;
            TileMgr_splashRelated(TileMgr_instance, &v21, 15);
          }
          for ( i = 1; i != 7; ++i )
          {
            v16 = (float)i * 256.0;
            if ( (float)(*v13 * -2.0) > v16 )
            {
              v17 = v16 + (float)(*v13 + *(float *)v2);
              if ( (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) < v17
                && v17 < (float)(FIELD_F32(dword_60CC6484, 120) + 64.0) )
              {
                v18 = FIELD_F32(TileMgr_instance, 24);
                v21 = v16 + (float)(*v13 + *(float *)v2);
                v22 = v18;
                TileMgr_splashRelated(TileMgr_instance, &v21, 15);
              }
            }
          }
          v19 = *(float *)v2 - *v13;
          if ( (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) < v19
            && v19 < (float)(FIELD_F32(dword_60CC6484, 120) + 64.0) )
          {
            v20 = FIELD_F32(TileMgr_instance, 24);
            v21 = *(float *)v2 - *v13;
            v22 = v20;
            TileMgr_splashRelated(TileMgr_instance, &v21, 15);
          }
        }
      }
    }
    *v10 = FIELD_F32(a1, 108);
    result = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6548) = result;
  }
  return result;
}
