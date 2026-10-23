/* sub_60844538
 * address: 0x60844538   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60844538(_DWORD *a1)
{
  unsigned int v2; // r7
  unsigned int v3; // r5
  int Size_const; // r5
  _DWORD v6[5]; // [sp+0h] [bp-28h] BYREF
  _BYTE v7[20]; // [sp+14h] [bp-14h] BYREF

  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v7);
  memset(v6, 0, 16);
  sub_6084396C(v6);
  v2 = v6[0];
  v3 = sub_608352A0(a1, (int)v6);
  nn__mii__detail__CalculateSizeAndAlignment__AddSize((nn__mii__detail__CalculateSizeAndAlignment *)v7, v2);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
    (nn__mii__detail__CalculateSizeAndAlignment *)v7,
    v2,
    v3,
    16);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v7);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v7);
  return Size_const;
}
