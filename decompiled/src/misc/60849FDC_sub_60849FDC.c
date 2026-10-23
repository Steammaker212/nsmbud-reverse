/* sub_60849FDC
 * address: 0x60849FDC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60849FDC(int a1, int a2)
{
  float v3; // s0
  float v4; // s16
  float v5; // s2
  _BYTE v7[4]; // [sp+4h] [bp-34h] BYREF
  __int16 v8; // [sp+8h] [bp-30h]
  unsigned __int16 v9; // [sp+Ch] [bp-2Ch]

  (*(void (__fastcall **)(_DWORD, _BYTE *, int))(**(_DWORD **)(a1 + 40) + 72))(FIELD_U32(a1, 40), v7, a2);
  v3 = FIELD_F32(a1, 12);
  if ( FIELD_U8(a1, 48) )
  {
    v4 = FIELD_F32(a1, 32);
    v5 = (float)((float)(v4 - (float)((float)v9 * v3)) * 0.5) + (float)(v3 * (float)v8);
  }
  else
  {
    v4 = (float)v9 * v3;
    v5 = v3 * (float)v8;
  }
  ((void (__fastcall *)(int, _BYTE *, float))loc_60849D30)(a1, v7, v5 + FIELD_F32(a1, 20));
  FIELD_F32(a1, 20) = v4 + FIELD_F32(a1, 20);
  return v4;
}
