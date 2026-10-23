/* sub_602109CC
 * address: 0x602109CC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602109CC(int a1)
{
  float v2; // s2
  float v3; // s1
  float v4; // s3
  _BYTE v6[4]; // [sp+4h] [bp-1Ch] BYREF
  float v7; // [sp+8h] [bp-18h]

  (*(void (__fastcall **)(int, _BYTE *, float))(*(_DWORD *)a1 + 96))(a1, v6, 120.0);
  v2 = v7;
  v7 = v7 + 50.0;
  return sub_60186930(a1, (int)v6, (int)&unk_60AFD348, 3.0, v3, v2, v4);
}
