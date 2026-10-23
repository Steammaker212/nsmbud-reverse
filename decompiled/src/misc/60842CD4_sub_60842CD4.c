/* sub_60842CD4
 * address: 0x60842CD4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60842CD4(int a1, int a2)
{
  int v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r7
  unsigned int v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r0
  int v9; // r0
  unsigned int v10; // r6
  unsigned int v11; // r0
  int v12; // r0
  unsigned int v13; // r6
  unsigned int v14; // r0
  int v15; // r0
  unsigned int v16; // r6
  unsigned int v17; // r0
  int Size_const; // r5
  _BYTE v20[20]; // [sp+4h] [bp-14h] BYREF

  v3 = sub_6083E70C(a2);
  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v20);
  v4 = sub_608479DC(v3, 5);
  nn__mii__detail__CalculateSizeAndAlignment__AddSize((nn__mii__detail__CalculateSizeAndAlignment *)v20, v4);
  v5 = sub_608479DC(v3, 4);
  v6 = sub_608479E4(v3, 4);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
    (nn__mii__detail__CalculateSizeAndAlignment *)v20,
    v5,
    v6);
  v7 = sub_608479DC(v3, 3);
  v8 = sub_608479E4(v3, 3);
  v9 = nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
         (nn__mii__detail__CalculateSizeAndAlignment *)v20,
         v7,
         v8);
  v10 = sub_60849570(v9);
  v11 = sub_60849588(a1);
  v12 = nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
          (nn__mii__detail__CalculateSizeAndAlignment *)v20,
          v10,
          v11,
          4);
  v13 = sub_60849578(v12);
  v14 = sub_608495DC(a1);
  v15 = nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
          (nn__mii__detail__CalculateSizeAndAlignment *)v20,
          v13,
          v14,
          4);
  v16 = sub_60849580(v15);
  v17 = sub_60849630(a1);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
    (nn__mii__detail__CalculateSizeAndAlignment *)v20,
    v16,
    v17,
    4);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v20);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v20);
  return Size_const;
}
