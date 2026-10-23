/* sub_607229E8
 * address: 0x607229E8   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607229E8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
  unsigned int v9; // r0
  unsigned int v10; // r8
  int v11; // r5
  unsigned __int16 *v12; // r5
  unsigned int v13; // r9
  unsigned int v14; // t1
  int v15; // r0
  signed int v16; // r10
  int v17; // r6
  unsigned int v18; // r0
  int v19; // r6
  float v20; // s0
  float v21; // s22
  int v22; // r10
  float v23; // s30
  float v24; // s17
  int v25; // r0
  float v26; // s2
  int v28; // [sp+10h] [bp-2B8h]
  _DWORD v30[2]; // [sp+18h] [bp-2B0h] BYREF
  _DWORD v31[2]; // [sp+20h] [bp-2A8h] BYREF
  float v32[12]; // [sp+28h] [bp-2A0h] BYREF
  _BYTE v33[80]; // [sp+58h] [bp-270h] BYREF
  int v34; // [sp+A8h] [bp-220h] BYREF
  _BYTE v35[276]; // [sp+1B4h] [bp-114h] BYREF

  sub_6090C77C(v35, 0.0, 1.0, 512.0, 0.0, 0.0, 2048.0);
  v9 = a5;
  v10 = 0;
  v28 = a1;
  if ( a5 >= 6 )
    v9 = 0;
  v11 = a1 + 272 * v9;
  v14 = FIELD_U16(v11, 3664);
  v12 = (unsigned __int16 *)(v11 + 3664);
  v13 = v14;
  v15 = sub_609200A0(v12 - 12);
  v16 = v12[1];
  v17 = v15;
  agl_TextureSampler_copy_ref(v33, v12 - 12);
  v18 = 1;
  if ( v17 > v16 )
    v16 = v17;
  v19 = a6;
  if ( v13 <= 1 )
    v13 = 1;
  if ( a4 < 9 )
    v10 = a4;
  v20 = (float)(unsigned int)v16;
  if ( a6 < 0 )
  {
    if ( *v12 > 1u )
      v18 = *v12;
    v19 = v18 >> 6;
  }
  v21 = (float)v19;
  if ( v19 >= 1 )
  {
    v22 = 0;
    v23 = 64.0 / v20;
    v24 = v21 * (float)((float)(v20 / (float)(v21 * 64.0)) * 0.5);
    do
    {
      v32[0] = (float)v13;
      v32[4] = 0.0;
      v32[8] = 0.0;
      v32[1] = 0.0;
      v32[5] = 64.0;
      v32[9] = 0.0;
      v32[2] = 0.0;
      v32[6] = 0.0;
      v32[10] = 1.0;
      v32[3] = (float)((float)v13 * 0.5) + (float)((float)(a3 & 0x1F) * 64.0);
      v32[7] = (float)(512.0 - (float)((float)(int)((a3 >> 5) + 1) * 64.0)) + 32.0;
      v32[11] = 0.0;
      v25 = sub_6090BE54(v35);
      v31[0] = 1065353216;
      *(float *)&v31[1] = v23;
      v26 = (float)*(int *)(v28 + 20 * v10 + 5284);
      v30[0] = 0;
      *(float *)&v30[1] = (float)((float)((float)v22 + (float)(v21 * v26)) - v24) + 0.5;
      sub_6093D464(a2, v33, v32, v25, 0.0, v31, v30);
      ++v22;
      a3 += 16;
    }
    while ( v19 != v22 );
  }
  sub_609175E4(&v34);
  sub_60917AE4(v33);
  return nullsub_113(v35);
}
