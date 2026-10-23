/* sub_609632B4
 * address: 0x609632B4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609632B4(
        int result,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        float a24,
        float a25,
        float a26,
        float a27,
        float a28,
        float a29)
{
  unsigned int v13; // r7
  int v14; // r12
  _DWORD *v15; // r4
  int v16; // lr
  float v18; // s2
  float v19; // s16
  unsigned int v22; // r10
  unsigned int **v23; // r2
  float v24; // s1
  float v25; // s0
  unsigned int **v26; // r3
  unsigned int *v27; // r5
  int v28; // r3
  float v29; // s18
  float *v30; // r1
  unsigned int v31; // r4
  int v32; // r6
  float *v33; // r7
  float *v34; // r5
  float v35; // s24
  float v36; // s26
  float v37; // s17
  float v38; // s22
  float v39; // s24
  float v40; // s22
  float v41; // s24
  float v42; // s26
  float v43; // s30

  v13 = FIELD_U32(result, 36);
  v14 = 0;
  if ( v13 >= 2 )
    v13 = 0;
  v15 = (_DWORD *)(result + 12 * v13);
  v16 = v15[5];
  if ( v16 >= 1 )
  {
    v18 = -3.4028e38;
    v19 = 0.0;
    v22 = v15[3];
    v23 = (unsigned int **)v15[4];
    v24 = -3.4028e38;
    v25 = -3.4028e38;
    do
    {
      v26 = v23;
      if ( v22 > v14 )
        v26 = &v23[v14];
      v27 = *v26;
      v28 = (*v26)[2];
      if ( v28 >= 1 )
      {
        v29 = FIELD_F32(result, 140);
        v30 = (float *)v27[1];
        v31 = *v27;
        v32 = 0;
        v33 = v30;
        do
        {
          v34 = v30;
          if ( v31 > v32 )
            v34 = v33;
          v35 = v34[1];
          v36 = v34[2];
          v37 = (float)((float)(*(float *)&a3 * v35) + (float)(*(float *)&a2 * *v34)) + (float)(*(float *)&a4 * v36);
          v38 = a29 + (float)((float)((float)(a27 * v35) + (float)(a26 * *v34)) + (float)(a28 * v36));
          v39 = a25 + (float)((float)((float)(a23 * v35) + (float)(a22 * *v34)) + (float)(a24 * v36));
          if ( (float)(v18 - v38) > v29 || (float)(v18 - v38) < (float)-v29 )
          {
            if ( v38 > v18 )
            {
              v25 = a21 + v37;
              v24 = v39;
              v18 = v38;
              v19 = 1.0;
            }
          }
          else
          {
            v40 = v38 + (float)(v18 * v19);
            v41 = v39 + (float)(v24 * v19);
            v42 = (float)(a21 + v37) + (float)(v25 * v19);
            v43 = 1.0 / (float)(v19 + 1.0);
            v19 = v19 + 1.0;
            v18 = v43 * v40;
            v24 = v43 * v41;
            v25 = v43 * v42;
          }
          ++v32;
          v33 += 3;
        }
        while ( v32 < v28 );
      }
      ++v14;
    }
    while ( v14 < v16 );
  }
  return result;
}
