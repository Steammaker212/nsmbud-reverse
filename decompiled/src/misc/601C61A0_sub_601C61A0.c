/* sub_601C61A0
 * address: 0x601C61A0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C61A0(int a1, int a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r3
  signed int v8; // [sp+4h] [bp-24h] BYREF
  signed int v9; // [sp+8h] [bp-20h] BYREF
  int v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  v3 = (_DWORD *)(a1 + 416);
  v4 = (_DWORD *)(a1 + 408);
  if ( (FIELD_U8(a1, 440) & 1) != 0 )
  {
    v10[0] = 0x10000000;
    v9 = 0x100000;
    sub_608322C0((int *)(a1 + 416), (int *)(a1 + 428), v10, &v9);
    *(_DWORD *)(FIELD_U32(a2, 4) + 232) |= 4u;
  }
  else
  {
    v9 = 0x10000000;
    v10[0] = 0;
    v8 = 0x100000;
    sub_608322C0((int *)(a1 + 416), v10, &v9, &v8);
    if ( !*v3 )
      *(_DWORD *)(FIELD_U32(a2, 4) + 232) = 0;
  }
  result = *(_DWORD **)(a2 + 4);
  v6 = v4[1];
  v7 = v4[2];
  result[55] = *v4;
  result[56] = v6;
  result[57] = v7;
  return result;
}
