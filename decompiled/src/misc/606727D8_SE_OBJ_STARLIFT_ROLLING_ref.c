/* SE_OBJ_STARLIFT_ROLLING_ref
 * address: 0x606727D8   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall SE_OBJ_STARLIFT_ROLLING_ref(int a1)
{
  int v2; // r8
  int v3; // r5
  unsigned int v4; // r11
  int v5; // r9
  int v6; // r10
  int v7; // r7
  int v8; // r0
  char *v9; // r2
  int v10; // r1
  int v11; // r0
  char *v12; // r3
  int v13; // r2
  int *v14; // r2
  float v15; // s0
  int v16; // r1
  int v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r7
  float v23; // r1
  int v24; // r5
  int v25; // r6
  float v26; // s0
  int v27; // r2
  unsigned int v28; // r3
  int *result; // r0
  int v30; // r7
  char v32; // r6
  int v33; // [sp+8h] [bp-50h]
  int *v34; // [sp+Ch] [bp-4Ch]
  _DWORD v35[5]; // [sp+10h] [bp-48h] BYREF
  Vec2 out; // [sp+24h] [bp-34h] BYREF
  Vec3 position; // [sp+2Ch] [bp-2Ch] BYREF

  v2 = FIELD_U32(a1, 7604);
  v34 = (int *)(a1 + 7604);
  v3 = FIELD_U8(a1, 7619);
  v4 = v2;
  v5 = word_60AFD9A8[v3] << 16;
  v6 = word_60AFD9A4[v3] << 16;
  v33 = word_60AFD9A4[v3];
  v7 = ((v6 - v5) >> 1) + v5;
  if ( v7 <= 0 )
    v7 = 0;
  if ( v2 < 0 )
  {
    v4 = FIELD_U32(a1, 7604);
    if ( v2 != 0x80000000 )
      v4 = -v2;
  }
  v8 = sub_606734DC(a1);
  v35[0] = 0;
  v9 = (char *)&unk_60B07BAC;
  if ( v4 < v7 )
    v9 = (char *)&unk_60B07BA8;
  v10 = v9[v3];
  v35[1] = -(v5 + (v10 << 16));
  v35[2] = 0;
  v35[3] = v5 + (v10 << 16);
  v35[4] = 0;
  v11 = v35[v8 + 2];
  v12 = (char *)&unk_60B07BAE;
  if ( v4 < v7 )
    v12 = (char *)&unk_60B07BAA;
  v13 = (v12[v3] << 16) + (v10 << 16);
  if ( FIELD_S8(a1, 7621) < 0 )
  {
    v11 += v13;
  }
  else if ( FIELD_U8(a1, 7621) )
  {
    v11 -= v13;
  }
  if ( FIELD_U8(a1, 7618) )
  {
    v14 = dword_60672A98;
    v15 = FIELD_F32(a1, 6120) * 131070.0;
    if ( v15 < 0.0 )
      v14 = &dword_60672A98[1];
    v11 += (int)(float)(v15 + *(float *)v14);
  }
  v16 = v10 << 16;
  v17 = FIELD_S8(a1, 7625);
  v18 = -262144 * v17;
  if ( v17 < 1 )
  {
    if ( FIELD_U8(a1, 7625) )
      v18 += v16;
  }
  else
  {
    v18 -= v16;
  }
  v19 = v11 + v2 + v18;
  if ( v19 < 0 )
  {
    v20 = (v19 + v16) & ((v19 + v16) >> 31);
  }
  else
  {
    v20 = v19 - v16;
    if ( v20 <= 0 )
      v20 = 0;
  }
  v21 = v20;
  if ( v20 > v6 )
    v21 = v6;
  if ( v20 < -v6 )
    v21 = -v6;
  *v34 = v21;
  FIELD_U32(a1, 164) += v21;
  v22 = v21 / (v33 << 9);
  if ( v22 < 0 )
    v22 = -v22;
  if ( v22 >= 127 )
    v22 = 127;
  if ( v22 )
  {
    v23 = FIELD_F32(a1, 112);
    v24 = FIELD_U32(a1, 8);
    v25 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v23;
    mapPositionToScreen(&out, &position);
    sub_60813CA0(v25, "SE_OBJ_STARLIFT_ROLLING", v24, &out, v26, (__int16)v22, 0);
  }
  v27 = 0;
  v28 = 0;
  result = (int *)(a1 + 6488);
  do
  {
    v30 = *result;
    if ( FIELD_U32(a1, 6484) > v28++ )
      v30 += v27;
    v27 += 32;
    v32 = 0;
    if ( (unsigned int)(FIELD_U32(v30, 20) + 1006632960) < 0x78000001 )
      v32 = 8;
    FIELD_U8(v30, 1) = v32;
  }
  while ( v28 != 15 );
  return result;
}
