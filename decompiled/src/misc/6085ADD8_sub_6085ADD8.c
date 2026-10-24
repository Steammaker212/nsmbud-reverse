/* sub_6085ADD8
 * address: 0x6085ADD8   size: 1352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6085ADD8(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  unsigned __int8 v8; // r0
  bool v9; // zf
  _QWORD *result; // r0
  unsigned __int32 v11; // r7
  int v12; // r8
  void (__fastcall *v13)(unsigned __int32, int, int, _DWORD, int, float32x4_t *, __int8 *, int, int); // r9
  int v14; // r6
  int v15; // r0
  float *v16; // r0
  unsigned __int32 v17; // r0
  float *v18; // r6
  int v19; // r0
  int v20; // r12
  unsigned __int32 v21; // r0
  int v22; // r7
  int v23; // r1
  unsigned __int32 v24; // r2
  int v25; // lr
  int v26; // r0
  __n64 v27; // d0
  float v28; // r0
  unsigned __int32 v29; // r7
  int v30; // r8
  void (__fastcall *v31)(unsigned __int32, int, int, int, int, float32x4_t *, __int8 *, int, int); // r9
  int v32; // r6
  int v33; // r0
  int v34; // r0
  unsigned __int32 v35; // r6
  int (__fastcall *v36)(int, float32x4_t *, _DWORD); // r3
  unsigned __int32 v37; // r6
  void (__fastcall *v38)(unsigned __int32, int, int, int, int, float32x4_t *, __int8 *, int, int); // r8
  int v39; // r7
  int v40; // r0
  float v41; // [sp+18h] [bp-30h] BYREF
  float v42; // [sp+1Ch] [bp-2Ch]
  __n64 v43; // [sp+20h] [bp-28h] BYREF

  sub_60858D50(a1, a2, a3, a4, a5);
  if ( !a1[10].n128_u32[3] )
  {
    v8 = FIELD_U32(a1 + (4) * 16, 0x0)[0];
LABEL_9:
    result = (_QWORD *)(v8 & 0x7F);
    FIELD_U32(a1 + (4) * 16, 0x0)[0] = (unsigned __int8)result;
    return result;
  }
  (*(void (__fastcall **)(float32x4_t *, int))(FIELD_U32(a1, 0x0)[0] + 88))(a1, a2);
  v8 = FIELD_U32(a1 + (4) * 16, 0x0)[0];
  v9 = (v8 & 1) == 0;
  if ( (v8 & 1) != 0 )
    v9 = FIELD_U32(a1 + (4) * 16, 0x0)[2] == 0;
  if ( v9 )
  {
    if ( !FIELD_U8(a3, 23) )
    {
      result = (_QWORD *)(FIELD_U32(a1 + (4) * 16, 0x0)[4] & 0xEF);
      FIELD_U32(a1 + (4) * 16, 0x0)[4] = (unsigned __int8)result;
      return result;
    }
    goto LABEL_9;
  }
  sub_60869A60(a1[10].n128_u32[3], a2);
  sub_608672C4(a1[10].n128_u32[3], a2);
  result = (_QWORD *)sub_60867E38(a1[10].n128_u32[3], a2);
  if ( result )
  {
    result = (_QWORD *)sub_60868D58(a1[10].n128_u32[3], a2);
    if ( result )
    {
      if ( FIELD_U32(a1 + (12) * 16, 0x0)[0] > 3u )
      {
        v29 = a1[10].n128_u32[3];
        v30 = FIELD_U32(a1 + (4) * 16, 0x0)[2];
        v31 = *(void (__fastcall **)(unsigned __int32, int, int, int, int, float32x4_t *, __int8 *, int, int))(*(_DWORD *)v29 + 16);
        v32 = sub_608597F0((int)a1);
        v33 = sub_608597C0((int)a1);
        v31(v29, a2, v30, 2, 1, a1 + 5, &a1[3].n128_i8[8], v32, v33);
        sub_6085B320(a1, a2);
        v34 = sub_60867E38(a1[10].n128_u32[3], a2);
        FIELD_F32(v34, 528) = a1[3].n128_f32[2] * 0.5;
        FIELD_F32(v34, 532) = a1[3].n128_f32[3] * 0.5;
        FIELD_U32(v34, 536) = 0;
        FIELD_U32(v34, 540) = 0;
        result = sub_608540DC((_QWORD *)a2, (_QWORD *)(v34 + 64));
      }
      else
      {
        if ( FIELD_U32(a1 + (11) * 16, 0x0)[0] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[1] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[2] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[3] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[4] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[5] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[6] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[7] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[8] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[9] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[10] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[11] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[12] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[13] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[14] == 255
          && FIELD_U32(a1 + (11) * 16, 0x0)[15] == 255
          && FIELD_U32(a1 + (4) * 16, 0x0)[2] == 255 )
        {
          v37 = a1[10].n128_u32[3];
          v38 = *(void (__fastcall **)(unsigned __int32, int, int, int, int, float32x4_t *, __int8 *, int, int))(*(_DWORD *)v37 + 16);
          v39 = sub_608597F0((int)a1);
          v40 = sub_608597C0((int)a1);
          v38(v37, a2, 255, 1, 1, a1 + 5, &a1[3].n128_i8[8], v39, v40);
        }
        else
        {
          v11 = a1[10].n128_u32[3];
          v12 = FIELD_U32(a1 + (4) * 16, 0x0)[2];
          v13 = *(void (__fastcall **)(unsigned __int32, int, int, _DWORD, int, float32x4_t *, __int8 *, int, int))(*(_DWORD *)v11 + 16);
          v14 = sub_608597F0((int)a1);
          v15 = sub_608597C0((int)a1);
          v13(v11, a2, v12, 0, 1, a1 + 5, &a1[3].n128_i8[8], v14, v15);
          v16 = (float *)sub_60867E38(a1[10].n128_u32[3], a2);
          v16[116] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[0];
          v16[117] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[1];
          v16[118] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[2];
          v16[119] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[3];
          v16[120] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[4];
          v16[121] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[5];
          v16[122] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[6];
          v16[123] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[7];
          v16[124] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[8];
          v16[125] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[9];
          v16[126] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[10];
          v16[127] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[11];
          v16[128] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[12];
          v16[129] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[13];
          v16[130] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[14];
          v16[131] = (float)FIELD_U32(a1 + (11) * 16, 0x0)[15];
        }
        v17 = FIELD_U32(a1 + (4) * 16, 0x0)[2];
        if ( (v17 & 6) != 0 )
        {
          v18 = 0;
          if ( (v17 & 1) != 0 )
          {
            v19 = a1[8].n128_u32[1] + *(_DWORD *)(a1[8].n128_u32[1] + 16);
            v20 = FIELD_U16(v19, 14);
            if ( FIELD_U16(v19, 14) )
            {
              v21 = a1[8].n128_u32[1];
              v18 = 0;
              v22 = 4;
              v23 = FIELD_U32(v21, 16);
              v24 = v21 + 12;
              v25 = v21 + v23;
              do
              {
                v26 = 0;
                if ( (*(_DWORD *)(v24 + *(_DWORD *)(v25 + 4 * v22) + v23) | 1) == 1 )
                  v18 = (float *)(v24 + *(_DWORD *)(v25 + 4 * v22) + v23);
                else
                  v26 = 1;
                if ( v22 - 3 >= v20 )
                  break;
                ++v22;
              }
              while ( v26 );
            }
          }
          v27.n64_u64[0] = sub_60858B20((int)a1).n64_u64[0];
          v28 = a1[3].n128_f32[2];
          v42 = a1[3].n128_f32[3];
          v41 = v28;
          v43.n64_f32[0] = v27.n64_f32[0] + (float)(v18[3] * v28);
          v43.n64_f32[1] = v27.n64_f32[1] - (float)(v18[4] * v42);
          v41 = v18[1] * v28;
          v42 = v18[2] * v42;
          result = (_QWORD *)sub_608652A0(a2, a1[10].n128_u32[3], &v43, &v41, FIELD_U32(a1 + (12) * 16, 0x0)[1], FIELD_U32(a1 + (12) * 16, 0x0)[1]);
        }
        else
        {
          v35 = a1[10].n128_u32[3];
          v43.n64_u64[0] = sub_60858B20((int)a1).n64_u64[0];
          result = (_QWORD *)sub_608652A0(a2, v35, &v43, &a1[3].n128_i8[8], FIELD_U32(a1 + (12) * 16, 0x0)[1], FIELD_U32(a1 + (12) * 16, 0x0)[1]);
        }
      }
      v36 = *(int (__fastcall **)(int, float32x4_t *, _DWORD))(a2 + 200);
      if ( v36 )
        return (_QWORD *)v36(a2, a1, FIELD_U32(a2, 204));
    }
  }
  return result;
}
