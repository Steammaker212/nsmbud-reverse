/* skl_root_ref_7C7450
 * address: 0x607C7450   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall skl_root_ref_7C7450(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  float *v5; // r0
  char *v6; // r1
  float *v7; // r1
  float v8; // s18
  int v9; // r0
  float v10; // s20
  float v11; // [sp+0h] [bp-78h] BYREF
  float v12; // [sp+4h] [bp-74h]
  float v13; // [sp+8h] [bp-70h]
  float v14; // [sp+Ch] [bp-6Ch] BYREF
  float v15; // [sp+10h] [bp-68h]
  float v16; // [sp+14h] [bp-64h]
  float32x2_t v17; // [sp+18h] [bp-60h] BYREF
  float v18; // [sp+20h] [bp-58h]
  float v19; // [sp+24h] [bp-54h]
  float v20; // [sp+28h] [bp-50h]
  float v21; // [sp+2Ch] [bp-4Ch]
  float v22; // [sp+30h] [bp-48h]
  float v23; // [sp+34h] [bp-44h]
  float v24; // [sp+38h] [bp-40h]
  float v25; // [sp+3Ch] [bp-3Ch]
  float v26; // [sp+40h] [bp-38h]
  float v27; // [sp+44h] [bp-34h]

  if ( (FIELD_U8(a1, 1218) & 8) != 0 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B408 & ~(1618769056 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) == 1 )
    {
      switch ( *(_DWORD *)(FIELD_U32(a1, 11360) + 164) )
      {
        case 0:
          v4 = FIELD_U32(a1, 1320);
          v6 = (char *)&unk_60B0CF28;
          goto LABEL_14;
        case 1:
          v4 = FIELD_U32(a1, 1320);
          v6 = (char *)&unk_60B0CF78;
          goto LABEL_14;
        case 2:
        case 3:
        case 4:
        case 6:
          v4 = FIELD_U32(a1, 1320);
          if ( v4 == 9 )
          {
            v5 = (float *)&unk_60B0B07C;
          }
          else
          {
            v6 = (char *)&unk_60B0CFC8;
LABEL_14:
            v5 = (float *)&v6[8 * v4];
          }
          v7 = v5 + 1;
          v8 = *v5;
          v9 = FIELD_U32(v2, 648);
          v10 = *v7;
          v14 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
          v15 = COERCE_FLOAT("skl_root");
          (*(void (__fastcall **)(_DWORD, float32x2_t *, float *))(**(_DWORD **)(v9 + 4) + 144))(
            FIELD_U32(v9, 4),
            &v17,
            &v14);
          v19 = v19
              + (float)((float)((float)(v10 * v17.n64_f32[1]) + (float)(v8 * v17.n64_f32[0])) + (float)(v18 * 0.0));
          v23 = v23 + (float)((float)((float)(v10 * v21) + (float)(v8 * v20)) + (float)(v22 * 0.0));
          v27 = v27 + (float)((float)((float)(v10 * v25) + (float)(v8 * v24)) + (float)(v26 * 0.0));
          Mtx34_rotateZ(&v17, &dword_60C253C4);
          Mtx34_rotateY(&v17, &dword_60C253C8);
          v19 = v19
              + (float)((float)((float)(v17.n64_f32[1] * 0.0) + (float)(v17.n64_f32[0] * 0.0)) + (float)(v18 * 15.0));
          v23 = v23 + (float)((float)((float)(v21 * 0.0) + (float)(v20 * 0.0)) + (float)(v22 * 15.0));
          v27 = v27 + (float)((float)((float)(v25 * 0.0) + (float)(v24 * 0.0)) + (float)(v26 * 15.0));
          sub_6076628C(a1, &v14);
          v17.n64_f32[0] = v17.n64_f32[0] * v14;
          v20 = v14 * v20;
          v24 = v24 * v14;
          v17.n64_f32[1] = v17.n64_f32[1] * v15;
          v21 = v15 * v21;
          v25 = v25 * v15;
          v18 = v18 * v16;
          v22 = v16 * v22;
          v26 = v26 * v16;
          v19 = v19
              + (float)((float)((float)(v17.n64_f32[1] * 0.0) + (float)(v17.n64_f32[0] * 0.0)) - (float)(v18 * 15.0));
          v23 = v23 + (float)((float)((float)(v21 * 0.0) + (float)(v20 * 0.0)) - (float)(v22 * 15.0));
          v27 = v27 + (float)((float)((float)(v25 * 0.0) + (float)(v24 * 0.0)) - (float)(v26 * 15.0));
          sub_60796A74((float *)a1, (int)&v11);
          v17.n64_f32[0] = v17.n64_f32[0] * v11;
          v20 = v11 * v20;
          v24 = v24 * v11;
          v17.n64_f32[1] = v17.n64_f32[1] * v12;
          v21 = v12 * v21;
          v25 = v25 * v12;
          v18 = v18 * v13;
          v22 = v13 * v22;
          v26 = v26 * v13;
          ((void (__fastcall *)(_DWORD, float32x2_t *))loc_60793FF0)(FIELD_U32(a1, 11360), &v17);
          break;
        default:
          v4 = FIELD_U32(a1, 1320);
          v6 = (char *)&unk_60B0D018;
          goto LABEL_14;
      }
    }
  }
}
