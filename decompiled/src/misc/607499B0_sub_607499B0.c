/* sub_607499B0
 * address: 0x607499B0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607499B0(int a1, float *a2)
{
  float v3; // s2
  float v4; // s4
  float v6[3]; // [sp+0h] [bp-38h] BYREF
  float v7; // [sp+Ch] [bp-2Ch]
  float v8; // [sp+10h] [bp-28h]
  float v9; // [sp+14h] [bp-24h]
  float v10; // [sp+18h] [bp-20h]
  float v11; // [sp+1Ch] [bp-1Ch]
  float v12; // [sp+20h] [bp-18h]
  float v13; // [sp+24h] [bp-14h]
  float v14; // [sp+28h] [bp-10h]
  float v15; // [sp+2Ch] [bp-Ch]

  sub_605EAB0C(FIELD_U32(a1, 644), (int)v6, 4);
  v7 = v7 + (float)((float)((float)(v6[1] * 7.0) + (float)(v6[0] * 4.0)) + (float)(v6[2] * 0.0));
  v11 = v11 + (float)((float)((float)(v9 * 7.0) + (float)(v8 * 4.0)) + (float)(v10 * 0.0));
  v3 = v11;
  v15 = v15 + (float)((float)((float)(v13 * 7.0) + (float)(v12 * 4.0)) + (float)(v14 * 0.0));
  v4 = v15;
  *a2 = v7;
  a2[1] = v3;
  a2[2] = v4;
  return sub_6023349C(dword_60C8D904, (int)a2);
}
