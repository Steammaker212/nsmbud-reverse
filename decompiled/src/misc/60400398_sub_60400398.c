/* sub_60400398
 * address: 0x60400398   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60400398(int a1)
{
  float v2; // s16
  unsigned int U32; // r0
  float v4; // s2
  float *v5; // r0
  float v6; // s18
  float v7; // r12
  float v8; // r1
  unsigned int v9; // r0
  float v10; // s2
  float *v11; // r0
  float v12; // s2
  int v13; // r3
  int v14; // r2
  int v15; // r5
  int v16; // r3
  int v17; // r3
  int v18; // r2

  v2 = 0.0;
  if ( FIELD_F32(a1, 40) == 0.0 )
  {
    v7 = 0.0;
LABEL_9:
    v6 = 0.0;
    v8 = 0.0;
    goto LABEL_10;
  }
  if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 40,
         FIELD_F32(a1, 36),
         FIELD_F32(a1, 44),
         FIELD_F32(a1, 48),
         FIELD_F32(a1, 52)) == 0.0
    && FIELD_F32(a1, 36) == 0.0 )
  {
    v7 = 0.0;
    FIELD_U32(a1, 56) = 0;
    FIELD_U8(a1, 64) = 0;
    goto LABEL_9;
  }
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v4 = FIELD_F32(a1, 40);
  v5 = (float *)((char *)&unk_60B0168C + 8 * ((5 * (unsigned __int64)U32) >> 32));
  v2 = v4 * v5[1];
  v6 = (float)(v4 * *v5) * 0.5;
  v7 = v2;
  if ( (FIELD_U8(a1, 60) & 4) != 0 )
    v6 = v6 * 0.5;
  v8 = v6;
LABEL_10:
  if ( FIELD_F32(a1, 20) != 0.0 )
  {
    if ( ((float (__fastcall *)(int, _DWORD, float, float, float, float))loc_60832560)(
           a1 + 20,
           LODWORD(v8),
           FIELD_F32(a1, 16),
           FIELD_F32(a1, 24),
           FIELD_F32(a1, 28),
           FIELD_F32(a1, 32)) == 0.0
      && FIELD_F32(a1, 16) == 0.0 )
    {
      v7 = 0.0;
      v8 = 0.0;
      FIELD_U32(a1, 56) = 0;
      FIELD_U8(a1, 64) = 0;
    }
    else
    {
      v9 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v10 = FIELD_F32(a1, 20);
      v11 = (float *)((char *)&unk_60B0168C + 8 * ((5 * (unsigned __int64)v9) >> 32));
      v7 = v2 + (float)(v10 * v11[1]);
      v12 = (float)(v6 + (float)(v10 * *v11)) * 0.5;
      if ( (FIELD_U8(a1, 60) & 4) != 0 )
        v8 = v12 * 0.5;
      else
        v8 = v12;
    }
  }
  v13 = FIELD_U32(a1, 84);
  v14 = 0;
  if ( v13 )
  {
    v14 = v13 - 1;
    FIELD_U32(a1, 84) = v13 - 1;
    if ( v13 == 1 )
    {
      v14 = 0;
      if ( FIELD_F32(a1, 20) == 0.0 )
      {
        v14 = 0;
        FIELD_U32(a1, 56) = 0;
      }
    }
  }
  v15 = FIELD_U32(a1, 68);
  if ( v15 >= 1 )
  {
    v16 = FIELD_U32(a1, 56);
    FIELD_U32(a1, 56) = v16 | 2;
    FIELD_U32(a1, 68) = v15 - 1;
    if ( !((v15 - 1) | v14) )
      FIELD_U32(a1, 56) = v16 & 0xFFFFFFFD;
  }
  v17 = FIELD_U32(a1, 72);
  if ( v17 >= 1 )
  {
    v18 = FIELD_U32(a1, 56);
    FIELD_U32(a1, 56) = v18 | 4;
    if ( v17 == 1 )
      v18 &= ~4u;
    FIELD_U32(a1, 72) = v17 - 1;
    if ( v17 == 1 )
      FIELD_U32(a1, 56) = v18;
  }
  FIELD_F32(a1, 76) = v8;
  FIELD_F32(a1, 80) = v7;
}
