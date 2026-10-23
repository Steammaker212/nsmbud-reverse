/* sub_604F79C0
 * address: 0x604F79C0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F79C0(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int result; // r0

  v1 = *(_DWORD *)(*a1 + 3588);
  if ( v1 )
    FIELD_U8(v1, 64) &= ~1u;
  v2 = *(_DWORD *)(a1[1] + 3588);
  if ( v2 )
    FIELD_U8(v2, 64) &= ~1u;
  v3 = *(_DWORD *)(a1[2] + 3588);
  if ( v3 )
    FIELD_U8(v3, 64) &= ~1u;
  v4 = *(_DWORD *)(a1[3] + 3588);
  if ( v4 )
    FIELD_U8(v4, 64) &= ~1u;
  v5 = *(_DWORD *)(a1[4] + 3588);
  if ( v5 )
    FIELD_U8(v5, 64) &= ~1u;
  v6 = *(_DWORD *)(a1[5] + 3588);
  if ( v6 )
    FIELD_U8(v6, 64) &= ~1u;
  v7 = *(_DWORD *)(a1[6] + 3588);
  if ( v7 )
    FIELD_U8(v7, 64) &= ~1u;
  v8 = *(_DWORD *)(a1[7] + 3588);
  if ( v8 )
    FIELD_U8(v8, 64) &= ~1u;
  v9 = *(_DWORD *)(a1[8] + 3588);
  if ( v9 )
    FIELD_U8(v9, 64) &= ~1u;
  result = *(_DWORD *)(a1[9] + 3588);
  if ( result )
    FIELD_U8(result, 64) &= ~1u;
  return result;
}
