/* sub_6083E954
 * address: 0x6083E954   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E954(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  nn__mii__detail__CalculateSizeAndAlignment *v8; // r0
  int v9; // r0
  unsigned int v10; // r7
  unsigned int v11; // r0
  int Size_const; // r4
  char v14[4]; // [sp+4h] [bp-24h] BYREF
  int v15; // [sp+8h] [bp-20h] BYREF
  int v16; // [sp+Ch] [bp-1Ch]
  int v17; // [sp+10h] [bp-18h]

  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v16 = v6;
  v17 = v7;
  v15 = sub_6083DC5C(v5);
  v16 = sub_6083DC5C(v16);
  v8 = (nn__mii__detail__CalculateSizeAndAlignment *)nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v14);
  v9 = nn__mii__detail__CalculateSizeAndAlignment__AddSize(v8, 0x2Cu);
  v10 = sub_6084828C(v9);
  v11 = sub_60848294(a1, a2, &v15);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
    (nn__mii__detail__CalculateSizeAndAlignment *)v14,
    v11,
    v10);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v14);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v14);
  return Size_const;
}
