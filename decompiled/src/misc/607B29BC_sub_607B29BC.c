/* sub_607B29BC
 * address: 0x607B29BC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B29BC(int a1)
{
  float v2; // s16
  int v3; // r5
  float v4; // s0
  int v5; // r0
  int v6; // r5
  float v7; // s16
  float v8; // s0
  int v10; // [sp+4h] [bp-2Ch] BYREF
  int v11; // [sp+8h] [bp-28h] BYREF
  float v12; // [sp+Ch] [bp-24h]
  int v13; // [sp+10h] [bp-20h]
  float v14; // [sp+14h] [bp-1Ch] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 108);
  v4 = sub_6079B208((_DWORD *)a1);
  v5 = FIELD_U32(a1, 116);
  v11 = v3;
  v12 = v2 - v4;
  v13 = v5;
  ((void (__fastcall *)(int *, float *, int *, _DWORD))checkLiquidCollisions)(
    &v10,
    &v14,
    &v11,
    FIELD_U8(a1, 86));
  v6 = 0;
  if ( v10 == 1 )
  {
    v7 = sub_60763540(a1);
    v8 = sub_6079B208((_DWORD *)a1);
    if ( (float)(v7 - v8) <= v14 )
    {
      FIELD_U32(a1, 6900) |= 0x40000u;
      FIELD_F32(a1, 112) = v12;
      FIELD_U32(a1, 11480) = 10;
      Player_changeState(a1, (StateBase *)&dword_60CC4D24, 3);
      return 1;
    }
  }
  return v6;
}
