/* SE_SYS_MID_POINT_ref
 * address: 0x605D1F54   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_MID_POINT_ref(int a1, unsigned int a2, int a3)
{
  int v5; // r5
  char *v7; // r7
  unsigned int v8; // r0
  int *v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r10
  float v14; // s0
  int v15; // r1
  float v16; // s0
  int v17; // r0
  float v18; // s2
  int v19; // r1
  int v21; // [sp+1Ch] [bp-2Ch] BYREF
  float v22; // [sp+20h] [bp-28h]
  int v23; // [sp+24h] [bp-24h]

  v5 = 0;
  sub_604005D0(AreaRumbleMgr_instance, a2, 6, 2, 0, 0);
  FIELD_U8(a1, 6976) = a2;
  v7 = (char *)(a1 + 6976);
  EffectData_create(103, (Vec3 *)(a1 + 108), 0, 0);
  v21 = 68;
  v8 = a2;
  if ( a3 )
    v8 = -1;
  v9 = sub_60002B90(v8, unk_60C26484);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_MID_POINT", v9, 1);
  v10 = (unsigned __int8)*v7;
  if ( v10 < 6 )
    v5 = (char)v10;
  v11 = dword_60C99DD4;
  v12 = dword_60C99DD4 + 72 * v5;
  v13 = FIELD_U32(v12, 308);
  if ( FIELD_U32(v12, 304) == 6 )
  {
    FIELD_U8(a1, 6519) = 1;
    v14 = (float)(char)v13 + 5.0;
  }
  else if ( (unsigned __int8)v13 > 5u )
  {
    v14 = 0.0;
  }
  else
  {
    v14 = flt_60B058F0[(char)v13];
  }
  v15 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  FIELD_F32(v15, 20) = v14;
  FIELD_U32(v15, 28) |= 2u;
  if ( FIELD_U32(v11, 764) == 2 )
  {
    v16 = FIELD_F32(a1, 112);
    v17 = FIELD_U32(a1, 116);
    v21 = FIELD_U32(a1, 108);
    v22 = v16 + 24.0;
    v23 = v17;
    sub_603F7A98(dword_60C99DC0, (int)&v21, 0, a2);
  }
  else if ( (unsigned __int8)a2 <= 3u )
  {
    v18 = FIELD_F32(a1, 112);
    v19 = FIELD_U32(a1, 116);
    v21 = FIELD_U32(a1, 108);
    v22 = v18 + 32.0;
    v23 = v19;
    sub_60022540(dword_60C7F52C, (int)&v21, 5u, a2, 1);
  }
  sub_603F6984(
    dword_60C99DD4 + 272,
    FIELD_U32(a1, 20) & 1,
    *v7,
    v13,
    (FIELD_U32(a1, 20) >> 4) & 1,
    FIELD_U8(LevelInfo_instance, 16),
    FIELD_U8(LevelInfo_instance, 17),
    FIELD_U8(LevelInfo_instance, 18),
    BYTE2(FIELD_U32(a1, 20)),
    (_BYTE *)(dword_60C99DD4 + 733));
  FIELD_U8(a1, 6516) = 1;
  return 6516;
}
