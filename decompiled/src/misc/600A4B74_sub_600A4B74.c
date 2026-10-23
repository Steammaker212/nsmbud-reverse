/* sub_600A4B74
 * address: 0x600A4B74   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A4B74(int a1)
{
  int **v2; // r5
  float v3; // s0
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *, float); // r2
  int v6; // r0
  float v7; // s16
  float v8; // s18
  int v9; // r0
  int v10; // r0
  int v11; // r1
  int *v12; // r7
  float *v13; // r2
  int v14; // r5
  int v15; // r0
  int *v16; // r6
  int v17; // r9
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r9
  int v22; // r0
  int v23; // r2
  int result; // r0
  float v25[3]; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v26[24]; // [sp+10h] [bp-60h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  FIELD_F32(a1, 124) = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = **v2;
  v5 = *(int (__fastcall **)(int, _DWORD *, float))(*(_DWORD *)v4 + 84);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "ef_wand";
  v6 = v5(v4, v26, v3);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v6, v26);
  sub_602372C0(a1 + 8424, 801, v26, 1);
  v7 = FIELD_F32(dword_60CC6484, 112);
  v8 = FIELD_F32(dword_60CC6484, 120);
  if ( !FIELD_U8(a1, 6313) )
  {
    v10 = FIELD_U32(a1, 80);
    if ( v10 == 1 )
    {
      if ( FIELD_F32(a1, 108) > v8 || FIELD_F32(a1, 584) <= v8 )
        goto LABEL_2;
    }
    else if ( v10 || FIELD_F32(a1, 108) < v7 || FIELD_F32(a1, 584) >= v7 )
    {
      goto LABEL_2;
    }
    sub_608134CC(a1 + 6332, "SE_VOC_KMC_BLOCK_MAKE", FIELD_S16(a1, 6640), 0);
  }
LABEL_2:
  v9 = FIELD_U32(a1, 80);
  if ( v9 == 1 )
  {
    if ( FIELD_F32(a1, 108) > v8 )
      goto LABEL_13;
LABEL_12:
    sub_6081356C(a1 + 6332, "SE_BOSS_KAMECK_MAGIC", FIELD_S16(a1, 6640), 0);
    sub_6081356C(a1 + 6332, "SE_BOSS_KAMECK_FLYING", FIELD_S16(a1, 6640), 0);
    goto LABEL_13;
  }
  if ( !v9 && FIELD_F32(a1, 108) >= v7 )
    goto LABEL_12;
LABEL_13:
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_600A8F84(a1, v25);
  v12 = (int *)(a1 + 19456);
  v11 = FIELD_U32(a1, 19456);
  if ( v11 )
  {
    v14 = a1 + 19460;
    v13 = *(float **)(a1 + 19460);
    if ( v13 )
    {
      v16 = (int *)(a1 + 19592);
      v15 = FIELD_U32(a1, 19592);
      if ( v15 < FIELD_U32(v11, 8) )
      {
        if ( FIELD_U32(a1, 80) )
        {
          if ( v25[0] >= *v13 )
            goto LABEL_31;
          v17 = 0;
          v18 = sub_600A9F20(a1, v25);
          if ( (unsigned int)*v16 < 0x20 )
            v17 = *v16;
          *(_DWORD *)(a1 + 4 * v17 + 8120) = v18;
          --*v16;
          v19 = *v12;
          v20 = *(_DWORD *)(*(_DWORD *)v14 + 12);
        }
        else
        {
          if ( v25[0] <= *v13 )
            goto LABEL_31;
          v21 = 0;
          v22 = sub_600A9F20(a1, v25);
          if ( (unsigned int)*v16 < 0x20 )
            v21 = *v16;
          *(_DWORD *)(a1 + 4 * v21 + 8120) = v22;
          ++*v16;
          v19 = *v12;
          v20 = *(_DWORD *)(*(_DWORD *)v14 + 16);
        }
        v23 = v20 - 12;
        if ( v20 == v19 )
          v23 = 0;
        *(_DWORD *)v14 = v23;
      }
    }
  }
LABEL_31:
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    if ( FIELD_U8(a1, 6313) )
    {
      result = FIELD_U32(EnemyCounterMaybe_instance, 24);
      if ( result )
        FIELD_U8(result, 6136) = 1;
    }
    else
    {
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82BC8);
    }
  }
  return result;
}
