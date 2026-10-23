/* sub_6083F238
 * address: 0x6083F238   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083F238(int a1)
{
  int v2; // r4
  int v3; // r5
  unsigned int v4; // r0
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r6
  unsigned int v8; // r0
  int v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r0
  int Size_const; // r5
  _BYTE v16[28]; // [sp+4h] [bp-1Ch] BYREF

  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v16);
  v2 = sub_6083E70C(a1);
  v3 = 0;
  v4 = sub_608479DC(v2, 0);
  nn__mii__detail__CalculateSizeAndAlignment__AddSize((nn__mii__detail__CalculateSizeAndAlignment *)v16, v4);
  v5 = sub_608479DC(v2, 10);
  v6 = sub_608479E4(v2, 10);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
    (nn__mii__detail__CalculateSizeAndAlignment *)v16,
    v5,
    v6);
  v7 = sub_608479DC(v2, 6);
  v8 = sub_608479E4(v2, 6);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
    (nn__mii__detail__CalculateSizeAndAlignment *)v16,
    v7,
    v8);
  do
  {
    v9 = dword_60B0E530[v3];
    v10 = sub_608479EC(v2, v9);
    v11 = sub_608479F4(v2, v9);
    nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
      (nn__mii__detail__CalculateSizeAndAlignment *)v16,
      v10,
      v11);
    ++v3;
  }
  while ( v3 < 13 );
  v12 = sub_608479EC(v2, 2);
  v13 = sub_608479F4(v2, 2);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
    (nn__mii__detail__CalculateSizeAndAlignment *)v16,
    v12,
    v13);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v16);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v16);
  return Size_const;
}
