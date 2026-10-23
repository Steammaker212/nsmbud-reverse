/* sub_60982868
 * address: 0x60982868   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60982868(int result, int a2)
{
  int v2; // r7
  int v3; // r6
  bool v4; // zf
  int v5; // r8
  int v6; // r0
  float v7; // s16
  float v8; // s24
  unsigned int v9; // r4
  int v10; // r0
  signed int v11; // r9
  int v12; // r10
  float v13; // s26
  float v14; // s28
  float v15; // s18
  float v16; // s20
  unsigned __int8 *v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r10
  float v22; // s30
  _BYTE *v23; // r11
  unsigned __int8 *v24; // r8
  float v25; // s26
  float v26; // s28
  float v27; // s24
  float *v28; // r6
  unsigned int v29; // r0
  float v30; // s4
  int v31; // r4
  float32x2_t *v32; // r0
  float v34; // [sp+18h] [bp-2C8h]
  float v35; // [sp+1Ch] [bp-2C4h]
  float v36[3]; // [sp+20h] [bp-2C0h] BYREF
  float v37; // [sp+2Ch] [bp-2B4h]
  int v38; // [sp+30h] [bp-2B0h]
  float v39; // [sp+34h] [bp-2ACh]
  int v40; // [sp+38h] [bp-2A8h]
  float v41; // [sp+3Ch] [bp-2A4h]
  int v42; // [sp+40h] [bp-2A0h]
  int v43; // [sp+44h] [bp-29Ch]
  int v44; // [sp+48h] [bp-298h]
  int v45; // [sp+4Ch] [bp-294h]
  float v46[2]; // [sp+54h] [bp-28Ch] BYREF
  float v47[2]; // [sp+5Ch] [bp-284h] BYREF
  float v48; // [sp+64h] [bp-27Ch]
  float v49; // [sp+68h] [bp-278h]
  _BYTE v50[172]; // [sp+6Ch] [bp-274h] BYREF
  int v51[20]; // [sp+118h] [bp-1C8h] BYREF
  int v52; // [sp+168h] [bp-178h] BYREF
  float v53[28]; // [sp+270h] [bp-70h] BYREF

  v2 = FIELD_U32(a2, 224);
  v3 = result;
  v4 = v2 == 0;
  if ( v2 )
  {
    result = FIELD_U32(result, 476);
    v4 = result == 0;
  }
  if ( !v4 )
  {
    if ( FIELD_U8(v3, 496) )
    {
      v5 = v3 + 200;
    }
    else
    {
      v6 = sub_60859760(v3);
      v5 = v3 + 200;
      sub_6098E23C(v3 + 200, *(_DWORD *)(FIELD_U32(v6, 20) + 4));
      FIELD_U8(v3, 496) = 1;
    }
    sub_6090B4B0(*(unsigned __int8 **)(v2 + 4), FIELD_U32(v2, 16));
    v7 = FIELD_F32(v3, 56);
    v8 = FIELD_F32(v3, 60);
    v9 = FIELD_U16(v3, 224);
    v10 = sub_609200A0(v5);
    v11 = FIELD_U16(v3, 226);
    v12 = v10;
    v53[0] = 0.0;
    v53[1] = 0.0;
    agl_TextureSampler_copy_ref((int)v51, v5);
    v35 = FIELD_F32(v3, 108);
    v34 = FIELD_F32(v3, 92);
    v13 = FIELD_F32(v3, 60);
    v14 = FIELD_F32(v3, 56);
    v15 = FIELD_F32(v3, 80);
    v16 = FIELD_F32(v3, 100);
    sub_6090C7F8((int)v50, FIELD_U32(v2, 8), 0.0, 300.0);
    v17 = (unsigned __int8 *)sub_60859760(v3);
    v18 = v17[8];
    v19 = v17[9];
    v20 = v17[10];
    if ( v9 <= 1 )
      v9 = 1;
    if ( v12 > v11 )
      v11 = v12;
    v47[0] = (float)v18 / 255.0;
    v47[1] = (float)v19 / 255.0;
    v48 = (float)v20 / 255.0;
    v49 = v48;
    v46[0] = v7 / (float)v9;
    v46[1] = v8 / (float)(unsigned int)v11;
    v21 = FIELD_U32(v3, 472);
    if ( v21 )
    {
      v22 = (float)FIELD_U8(v3, 66) / 255.0;
      v23 = *(_BYTE **)(v3 + 476);
      v24 = *(unsigned __int8 **)(v3 + 484);
      v25 = v16 * v13;
      v26 = v15 * v14;
      v27 = (float)(v9 / (unsigned int)v7 - 1) * 0.5;
      v28 = (float *)(FIELD_U32(v3, 492) + 4);
      do
      {
        v29 = (unsigned __int8)*v23;
        if ( *v23 )
        {
          v36[0] = v26;
          v36[1] = 0.0;
          v36[2] = 0.0;
          v37 = v34;
          v38 = 0;
          v39 = v25;
          v40 = 0;
          v41 = v35;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v30 = v35 + (float)(v16 * *v28);
          v37 = v34 + (float)(v15 * *(v28 - 1));
          v41 = v30;
          v45 = 0;
          v49 = v22 * (float)((float)v29 / 255.0);
          v53[0] = (float)*v24 - v27;
          v31 = FIELD_U32(v2, 16);
          v32 = (float32x2_t *)sub_6090BE54((int)v50);
          sub_6093D588(v31, v51, (int)v36, v32, 0.0, (int)v46, (int)v53, (int)v47);
        }
        v28 += 2;
        --v21;
        ++v24;
        ++v23;
      }
      while ( v21 );
    }
    sub_60853FF8(a2);
    nullsub_113();
    sub_609175E4((int)&v52);
    return sub_60917AE4((int)v51);
  }
  return result;
}
