/* sub_602F32F8
 * address: 0x602F32F8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F32F8(_BYTE *a1, int *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r12
  int v5; // lr
  int v6; // r1
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF

  v4 = 0;
  a1[120] = 0;
  a1[248] = 0;
  a1[561] = 0;
  if ( a3 < 0xD )
    v4 = a3;
  v5 = *a2;
  v6 = a2[1];
  v8[0] = v5;
  v8[1] = v6;
  v8[2] = 1166843904;
  return sub_602F2BF8(*(_DWORD *)&a1[4 * v4], (int)v8, (int)(a1 + 548), (unsigned __int8)a1[560], a4);
}
