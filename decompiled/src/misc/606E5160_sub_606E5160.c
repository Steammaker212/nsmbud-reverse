/* sub_606E5160
 * address: 0x606E5160   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E5160(
        int result,
        float a2,
        float a3,
        float a4,
        float a5,
        float32x2_t a6,
        float a7,
        float a8,
        float a9,
        float a10,
        double a11)
{
  unsigned int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r4
  unsigned int v14; // r1
  unsigned int v15; // r3
  unsigned int v16; // r1
  unsigned int v17; // r3
  unsigned int v18; // r1
  unsigned int v19; // r3
  int i; // r1
  int v21; // r3
  int v22; // r2
  bool v23; // zf
  int v24; // r5
  int v25; // r4
  bool v26; // zf
  int v27; // r5
  bool v28; // zf
  int v29; // r5
  bool v30; // zf
  int v31; // r5
  bool v32; // zf
  int v33; // r2

  v11 = FIELD_U8(result, 1216);
  v12 = result + 2036;
  v13 = result + 1268;
  if ( v11 <= 3 && v11 != FIELD_U8(result, 1217) )
  {
    v14 = result + 1268;
    while ( FIELD_U8(v14, 44) )
    {
      v14 += 48;
      if ( v14 >= v12 )
        goto LABEL_8;
    }
    FIELD_U8(v14, 44) = 1;
    FIELD_U8(v14, 45) = v11;
    FIELD_U32(v14, 36) = 0;
    FIELD_U32(v14, 40) = 0;
  }
LABEL_8:
  v15 = FIELD_U8(result, 1232);
  if ( v15 <= 3 && v15 != FIELD_U8(result, 1233) )
  {
    v16 = result + 1268;
    while ( FIELD_U8(v16, 44) )
    {
      v16 += 48;
      if ( v16 >= v12 )
        goto LABEL_15;
    }
    FIELD_U8(v16, 44) = 1;
    FIELD_U8(v16, 45) = v15;
    FIELD_U32(v16, 36) = 0;
    FIELD_U32(v16, 40) = 0;
  }
LABEL_15:
  v17 = FIELD_U8(result, 1248);
  if ( v17 <= 3 && v17 != FIELD_U8(result, 1249) )
  {
    v18 = result + 1268;
    while ( FIELD_U8(v18, 44) )
    {
      v18 += 48;
      if ( v18 >= v12 )
        goto LABEL_22;
    }
    FIELD_U8(v18, 44) = 1;
    FIELD_U8(v18, 45) = v17;
    FIELD_U32(v18, 36) = 0;
    FIELD_U32(v18, 40) = 0;
  }
LABEL_22:
  v19 = FIELD_U8(result, 1264);
  if ( v19 <= 3 && v19 != FIELD_U8(result, 1265) )
  {
    while ( FIELD_U8(v13, 44) )
    {
      v13 += 48;
      if ( v13 >= v12 )
        goto LABEL_28;
    }
    FIELD_U8(v13, 44) = 1;
    FIELD_U8(v13, 45) = v19;
    FIELD_U32(v13, 36) = 0;
    FIELD_U32(v13, 40) = 0;
  }
LABEL_28:
  a6.n64_u32[0] = 1274019840;
  for ( i = 0; i != 64; i += 16 )
  {
    v21 = result + i;
    v22 = *(_DWORD *)(result + i + 644);
    v23 = v22 == -1;
    if ( v22 != -1 )
      v23 = FIELD_U8(v21, 648) == 0;
    if ( !v23 && !FIELD_U8(v21, 649) )
    {
      v24 = FIELD_U32(result, 644);
      v25 = 0;
      v26 = v24 == -1;
      if ( v24 != -1 )
        v26 = v24 == v22;
      if ( !v26 && FIELD_F32(v21, 652) < FIELD_F32(result, 652) )
        v25 = 1;
      v27 = FIELD_U32(result, 660);
      v28 = v27 == -1;
      if ( v27 != -1 )
        v28 = v27 == v22;
      if ( !v28 && FIELD_F32(v21, 652) < FIELD_F32(result, 668) )
        v25 = 1;
      v29 = FIELD_U32(result, 676);
      v30 = v29 == -1;
      if ( v29 != -1 )
        v30 = v29 == v22;
      if ( !v30 && FIELD_F32(v21, 652) < FIELD_F32(result, 684) )
        v25 = 1;
      v31 = FIELD_U32(result, 692);
      v32 = v31 == -1;
      if ( v31 != -1 )
        v32 = v31 == v22;
      if ( v32 )
      {
        if ( v25 )
          continue;
      }
      else if ( (FIELD_F32(v21, 652) < FIELD_F32(result, 700)) | v25 )
      {
        continue;
      }
      if ( FIELD_U8(result, 712) && !FIELD_U8(result, 713) && (int)abs32(FIELD_U32(result, 1268)) <= 640000 )
        FIELD_U32(result, 716) = 4;
      LODWORD(a11) = FIELD_U32(v21, 656);
      if ( *(float *)&a11 < 0.0 || *(float *)&a11 > 0.1 )
      {
        if ( *(float *)&a11 >= 0.0 || *(float *)&a11 < -0.1 )
        {
          *(float *)&a11 = (float)(*(float *)&a11 * (float)(FIELD_F32(v21, 652) / 100.0)) * 10486000.0;
          a11 = vmin_f32(*(float32x2_t *)&a11, a6).n64_f64[0];
          v33 = (int)*(float *)&a11 + FIELD_U32(result, 1268);
        }
        else
        {
          v33 = FIELD_U32(result, 1268) - 0x100000;
        }
      }
      else
      {
        v33 = FIELD_U32(result, 1268) + 0x100000;
      }
      FIELD_U32(result, 1268) = v33;
    }
  }
  return result;
}
