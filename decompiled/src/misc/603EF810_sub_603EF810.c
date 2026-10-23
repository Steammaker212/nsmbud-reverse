/* sub_603EF810
 * address: 0x603EF810   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EF810(int a1)
{
  float v2; // s0
  int v3; // r1
  float v4; // s18
  int result; // r0
  int v6; // r1
  float v7; // s18
  float v8; // s18
  int v9; // r1
  float v10; // s18
  int v11; // r1
  int v12; // r1
  int v13; // [sp+4h] [bp-2Ch] BYREF
  float v14; // [sp+8h] [bp-28h]
  int v15; // [sp+Ch] [bp-24h]
  int v16; // [sp+10h] [bp-20h] BYREF
  _DWORD v17[7]; // [sp+14h] [bp-1Ch] BYREF

  v17[0] = 0;
  v2 = FIELD_F32(a1, 24);
  v3 = FIELD_U32(a1, 28);
  v13 = FIELD_U32(a1, 20);
  v4 = v2 + -8.0;
  v14 = v2 + -8.0;
  v15 = v3;
  ((void (__fastcall *)(int *, _DWORD *, int *, _DWORD))checkLiquidCollisions)(
    &v16,
    v17,
    &v13,
    FIELD_U8(a1, 92));
  result = v16;
  if ( v16
    || (v6 = FIELD_U32(a1, 28),
        v7 = v4 + 4.0,
        v13 = FIELD_U32(a1, 20),
        v14 = v7,
        v15 = v6,
        ((void (__fastcall *)(int *, _DWORD *, int *, _DWORD))checkLiquidCollisions)(
          &v16,
          v17,
          &v13,
          FIELD_U8(a1, 92)),
        (result = v16) != 0) )
  {
    if ( result == 2 )
      return result;
    goto LABEL_4;
  }
  v8 = v7 + 4.0;
  v9 = FIELD_U32(a1, 28);
  v13 = FIELD_U32(a1, 20);
  v14 = v8;
  v15 = v9;
  ((void (__fastcall *)(int *, _DWORD *, int *, _DWORD))checkLiquidCollisions)(
    &v16,
    v17,
    &v13,
    FIELD_U8(a1, 92));
  result = v16;
  if ( v16 != 2 )
  {
    if ( v16 )
      goto LABEL_4;
    v10 = v8 + 4.0;
    v11 = FIELD_U32(a1, 28);
    v13 = FIELD_U32(a1, 20);
    v14 = v10;
    v15 = v11;
    ((void (__fastcall *)(int *, _DWORD *, int *, _DWORD))checkLiquidCollisions)(
      &v16,
      v17,
      &v13,
      FIELD_U8(a1, 92));
    result = v16;
    if ( v16 != 2 )
    {
      if ( v16
        || (v12 = FIELD_U32(a1, 28),
            v13 = FIELD_U32(a1, 20),
            v14 = v10 + 4.0,
            v15 = v12,
            ((void (__fastcall *)(int *, _DWORD *, int *, _DWORD))checkLiquidCollisions)(
              &v16,
              v17,
              &v13,
              FIELD_U8(a1, 92)),
            result = v16 | 2,
            (v16 | 2) != 2) )
      {
LABEL_4:
        result = v17[0];
        FIELD_U32(a1, 24) = v17[0];
      }
    }
  }
  return result;
}
