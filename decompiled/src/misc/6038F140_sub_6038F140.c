/* sub_6038F140
 * address: 0x6038F140   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6038F140(int a1)
{
  int v2; // r1
  int v3; // r2
  unsigned int v4; // r0
  float v5; // s0
  int v7; // [sp+4h] [bp-1Ch] BYREF
  float v8; // [sp+8h] [bp-18h] BYREF
  _DWORD v9[5]; // [sp+Ch] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v9[0] = FIELD_U32(a1, 108);
  v9[1] = v2;
  v9[2] = v3;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v7,
    &v8,
    v9,
    FIELD_U8(a1, 86));
  if ( v7 )
  {
    v4 = FIELD_U32(a1, 6372);
    v5 = (float)(v8
               + (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                               + (float)((float)((float)(v4 & 0xFFFFFF)
                                               * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                                       * 0.000000059605))
                       * 8.0))
       + -24.0;
    FIELD_F32(a1, 112) = v5;
    FIELD_U32(a1, 6372) = v4 + 35791394;
  }
  else
  {
    v5 = (*(float (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96E14);
  }
  return CollisionMgr_process((_BYTE *)(a1 + 648), v5);
}
