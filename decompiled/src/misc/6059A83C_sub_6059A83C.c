/* sub_6059A83C
 * address: 0x6059A83C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059A83C(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0
  int v5; // r0
  int v6; // r0
  float v7; // s8
  int v9; // [sp+0h] [bp-50h] BYREF
  float v10; // [sp+4h] [bp-4Ch]
  int v11; // [sp+8h] [bp-48h]
  float v12; // [sp+Ch] [bp-44h]
  int v13; // [sp+10h] [bp-40h]
  int v14; // [sp+14h] [bp-3Ch]
  float v15; // [sp+18h] [bp-38h]
  float v16; // [sp+1Ch] [bp-34h]
  int v17; // [sp+20h] [bp-30h]
  _DWORD v18[11]; // [sp+24h] [bp-2Ch] BYREF

  if ( (FIELD_U8(a1, 6262) & 8) == 0 )
    JUMPOUT(0x605DD6FC);
  v2 = FIELD_F32(a1, 144);
  v3 = FIELD_F32(a1, 148);
  v4 = sub_6059BB74(a1 + 8036);
  FIELD_F32(a1, 308) = v3 * (float)((float)(v4 * 20.0) + 8.0);
  FIELD_F32(a1, 312) = v2 * (float)((float)(v4 * 12.0) + 8.0);
  FIELD_F32(a1, 316) = v3 * (float)((float)(v4 * 16.0) + 8.0);
  v5 = FIELD_U32(a1, 312);
  FIELD_U32(a1, 7276) = FIELD_U32(a1, 316);
  FIELD_U32(a1, 7272) = v5;
  v6 = FIELD_U32(a1, 304);
  v7 = (float)(v4 * 24.0) + 18.0;
  FIELD_U32(a1, 7268) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 7264) = v6;
  FIELD_U32(a1, 7584) = 1;
  FIELD_F32(a1, 7576) = v7;
  FIELD_F32(a1, 7580) = v7;
  FIELD_U32(a1, 7568) = 0;
  FIELD_F32(a1, 7572) = (float)((float)(v4 * 24.0) * 0.5) + 18.0;
  v9 = 0;
  v18[0] = a1 + 108;
  v18[1] = a1 + 584;
  v18[2] = a1 + 86;
  v18[3] = a1 + 87;
  v18[4] = a1 + 84;
  v10 = (float)(v3 * v7) - (float)(v3 * (float)(v4 * 8.0));
  v11 = 0;
  v12 = v10;
  v14 = 0;
  v13 = 0;
  v15 = v2 * v7;
  v16 = v3 * v7;
  v17 = 0;
  return sub_6015BE08(a1 + 13488, v18, (int)&v9);
}
