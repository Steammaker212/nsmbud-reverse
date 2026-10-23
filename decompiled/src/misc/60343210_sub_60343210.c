/* sub_60343210
 * address: 0x60343210   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60343210(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  float v4; // s0
  int v5; // r0
  _DWORD *v6; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v7[4]; // [sp+8h] [bp-18h] BYREF
  _DWORD v8[5]; // [sp+Ch] [bp-14h] BYREF

  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
  result = (_DWORD *)(a1 + 7088);
  v3 = FIELD_U32(a1, 7088);
  FIELD_U32(a1, 7088) = v3 - 1;
  if ( v3 <= 1 )
  {
    *result = 0;
    result = (_DWORD *)sub_603467A4(a1);
    if ( !result )
    {
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_U32(a1, 116);
      v8[0] = FIELD_U32(a1, 108);
      *(float *)&v8[1] = v4 + 18.0;
      v8[2] = v5;
      ((void (__fastcall *)(_DWORD **, _BYTE *, _DWORD *, _DWORD))checkLiquidCollisions)(
        &v6,
        v7,
        v8,
        FIELD_U8(a1, 86));
      result = v6;
      if ( v6 != (_DWORD *)1 )
        return (_DWORD *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9476C);
    }
  }
  return result;
}
