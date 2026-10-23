/* sub_6034AA30
 * address: 0x6034AA30   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6034AA30(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  float v5; // s0
  int v6; // r0
  int v7; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v8[3]; // [sp+8h] [bp-28h] BYREF
  float v9; // [sp+14h] [bp-1Ch] BYREF

  v4 = FIELD_U32(a1, 7772);
  v2 = (_DWORD *)(a1 + 7772);
  v3 = v4;
  if ( v4 )
    *v2 = --v3;
  ((void (__fastcall *)(int, int))loc_6034DC00)(a1, v3);
  if ( (unsigned int)(FIELD_U32(a1, 6568) - 3) < 2 )
  {
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    v8[0] = FIELD_U32(a1, 108);
    *(float *)&v8[1] = v5 + -5.0;
    v8[2] = v6;
    ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
      &v7,
      &v9,
      v8,
      FIELD_U8(a1, 86));
    if ( (unsigned int)(v7 - 3) <= 1 )
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + (float)(v9 - FIELD_F32(a1, 6576));
  }
  StageActor__accelerateX((StageActor *)a1);
  JUMPOUT(0x6000100C);
}
