/* sub_608424F8
 * address: 0x608424F8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608424F8(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r6
  unsigned int v4; // r5
  int Size_const; // r5
  unsigned int v7[5]; // [sp+0h] [bp-28h] BYREF
  _BYTE v8[20]; // [sp+14h] [bp-14h] BYREF

  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v8);
  memset(v7, 0, 16);
  sub_6084396C(v7);
  v2 = sub_608352A0(a1, (int)v7);
  v3 = v7[0];
  v4 = v2;
  nn__mii__detail__CalculateSizeAndAlignment__AddSize((nn__mii__detail__CalculateSizeAndAlignment *)v8, v7[0]);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
    (nn__mii__detail__CalculateSizeAndAlignment *)v8,
    v3,
    v4,
    3);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v8);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v8);
  return Size_const;
}
