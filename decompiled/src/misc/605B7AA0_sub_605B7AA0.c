/* sub_605B7AA0
 * address: 0x605B7AA0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605B7AA0(int a1, float *a2)
{
  unsigned int v4; // r10
  unsigned int v5; // r6
  float v6; // s22
  float v7; // s24
  unsigned int v8; // r5
  unsigned int v9; // r9
  unsigned int v10; // r0
  float v11; // r1
  ModelWrapper *v12; // r7
  unsigned int result; // r0
  unsigned int v14; // [sp+4h] [bp-84h]
  float v15; // [sp+8h] [bp-80h] BYREF
  float v16; // [sp+Ch] [bp-7Ch]
  float v17; // [sp+10h] [bp-78h]
  float v18; // [sp+14h] [bp-74h]
  float v19; // [sp+18h] [bp-70h]
  float v20; // [sp+1Ch] [bp-6Ch]
  float v21; // [sp+20h] [bp-68h]
  float v22; // [sp+24h] [bp-64h]
  float v23; // [sp+28h] [bp-60h]
  int v24; // [sp+2Ch] [bp-5Ch]
  float v25; // [sp+30h] [bp-58h]
  float v26; // [sp+34h] [bp-54h]

  v4 = 0;
  v5 = FIELD_U32(a1, 676);
  v6 = 0.0;
  v14 = FIELD_U32(a1, 680);
  do
  {
    v7 = 0.0;
    v8 = 0;
    v9 = 0;
    if ( v4 < 0x20 )
      v8 = v4;
    do
    {
      v15 = *a2;
      v16 = a2[1];
      v17 = a2[2];
      v18 = a2[3] + (float)((float)((float)(v6 * v16) + (float)(v7 * v15)) + (float)(v17 * 0.0));
      v19 = a2[4];
      v20 = a2[5];
      v21 = a2[6];
      v22 = a2[7] + (float)((float)((float)(v6 * v20) + (float)(v7 * v19)) + (float)(v21 * 0.0));
      v23 = a2[8];
      v10 = 0;
      v11 = a2[9];
      if ( v9 < 4 )
        v10 = v9;
      v24 = *((_DWORD *)a2 + 9);
      v25 = a2[10];
      v26 = a2[11] + (float)((float)((float)(v6 * v11) + (float)(v7 * v23)) + (float)(v25 * 0.0));
      v12 = *(ModelWrapper **)(a1 + 16 * v8 + 4 * v10 + 164);
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 60))(FIELD_U32(v12, 0x0), &v15);
      ModelWrapper_updateModel(v12);
      v7 = v7 + 16.0;
      ++v9;
    }
    while ( v9 < v5 );
    v6 = v6 + -16.0;
    result = v14;
    ++v4;
  }
  while ( v4 < v14 );
  return result;
}
