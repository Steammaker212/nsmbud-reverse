/* sub_6083F3F4
 * address: 0x6083F3F4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083F3F4(int *a1, int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r4
  unsigned int v6; // r6
  int v7; // r0
  int Size_const; // r4
  _DWORD v10[16]; // [sp+0h] [bp-60h] BYREF
  _BYTE v11[32]; // [sp+40h] [bp-20h] BYREF

  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v11);
  memset(v10, 0, sizeof(v10));
  sub_60998EF4(v10);
  HIWORD(v10[0]) = 0;
  v10[5] = FIELD_U32(a2, 16) / 2;
  v10[6] = sub_6083DA30(a2);
  v10[4] = 128;
  BYTE1(v10[0]) = 2;
  v10[3] = sub_6083DA10(a2);
  HIWORD(v10[1]) = sub_6083DA20(a2);
  v4 = sub_6083D1F4(a1, (unsigned __int8 *)v10);
  nn__mii__detail__CalculateSizeAndAlignment__AddSize((nn__mii__detail__CalculateSizeAndAlignment *)v11, v4);
  memset(v10, 0, sizeof(v10));
  sub_60998EF4(v10);
  HIWORD(v10[0]) = 0;
  v10[5] = sub_6083DA38(a2);
  v10[6] = sub_6083DA38(a2);
  v10[4] = 128;
  BYTE1(v10[0]) = 2;
  v10[3] = sub_6083DA18(a2);
  HIWORD(v10[1]) = sub_6083DA28(a2);
  v5 = sub_6083CF64(a1, (int)v10);
  v6 = sub_6083D1F4(a1, (unsigned __int8 *)v10);
  v7 = sub_6083DA40(a2);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
    (nn__mii__detail__CalculateSizeAndAlignment *)v11,
    v6,
    v5,
    v7);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v11);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v11);
  return Size_const;
}
