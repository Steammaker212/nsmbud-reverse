/* sub_603668B4
 * address: 0x603668B4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603668B4(int a1)
{
  float result; // s0
  float v3; // [sp+0h] [bp-38h]
  float v4; // [sp+4h] [bp-34h]
  float v5; // [sp+8h] [bp-30h]
  float v6; // [sp+Ch] [bp-2Ch]
  float v7; // [sp+10h] [bp-28h]
  float v8; // [sp+14h] [bp-24h]
  float v9; // [sp+18h] [bp-20h]
  float v10; // [sp+1Ch] [bp-1Ch]
  float v11; // [sp+20h] [bp-18h]
  float v12; // [sp+24h] [bp-14h]
  float v13; // [sp+28h] [bp-10h]
  float v14; // [sp+2Ch] [bp-Ch]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  sub_60233544(dword_60C8D904);
  FIELD_F32(a1, 108) = v6 + (float)((float)((float)(v3 * 660.0) - (float)(v4 * 80.0)) - (float)(v5 * 1750.0));
  FIELD_F32(a1, 112) = v10 + (float)((float)((float)(v7 * 660.0) - (float)(v8 * 80.0)) - (float)(v9 * 1750.0));
  result = v14 + (float)((float)((float)(v11 * 660.0) - (float)(v12 * 80.0)) - (float)(v13 * 1750.0));
  FIELD_F32(a1, 116) = result;
  return result;
}
