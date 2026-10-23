/* sub_60431864
 * address: 0x60431864   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431864(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r5
  int v9; // r7
  int v10; // r8
  int v11; // r1
  int v12; // r2
  int v13; // r0
  _DWORD v15[12]; // [sp+0h] [bp-30h] BYREF

  v6 = a1[1];
  if ( !FIELD_U16(v6, 106) )
    return 0;
  v7 = 0;
  v8 = 94;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = a1[3];
    v12 = a1[4];
    v13 = *(unsigned __int16 *)(FIELD_U32(v6, 48) + v8);
    v15[0] = *a2;
    v15[1] = a2[1] + v9;
    v15[2] = a2[2];
    v9 += ((int (__fastcall *)(int, int, _DWORD *, int))sub_60448388)(v12 + v7, v11 + 776 * v13, v15, a3 - v9);
    v6 = a1[1];
    ++v10;
    v7 += 3016;
    v8 += 112;
  }
  while ( v10 < FIELD_U16(v6, 106) );
  return v9;
}
