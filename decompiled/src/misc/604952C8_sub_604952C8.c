/* sub_604952C8
 * address: 0x604952C8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604952C8(int a1)
{
  int v2; // r6
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r0
  int v7[2]; // [sp+4h] [bp-Ch] BYREF
  unsigned int v8; // [sp+Ch] [bp-4h]
  _DWORD v9[30]; // [sp+10h] [bp+0h] BYREF

  v2 = 0;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60B3BA34;
  v9[2] = &sead__SafeStringBase__vtable;
  v9[3] = &byte_60B3BA34;
  v9[4] = &sead__SafeStringBase__vtable;
  v9[5] = &byte_60B3BA34;
  v9[6] = &sead__SafeStringBase__vtable;
  v9[7] = &byte_60B3BA34;
  v9[8] = &sead__SafeStringBase__vtable;
  v9[9] = &byte_60B3BA34;
  v9[10] = &sead__SafeStringBase__vtable;
  v9[11] = &byte_60B3BA34;
  v9[12] = &sead__SafeStringBase__vtable;
  v9[13] = &byte_60B3BA34;
  v9[14] = &sead__SafeStringBase__vtable;
  v9[15] = &byte_60B3BA34;
  v9[16] = &sead__SafeStringBase__vtable;
  v9[17] = &byte_60B3BA34;
  v9[18] = &sead__SafeStringBase__vtable;
  v9[19] = &byte_60B3BA34;
  v9[20] = &sead__SafeStringBase__vtable;
  v9[21] = &byte_60B3BA34;
  v9[22] = &sead__SafeStringBase__vtable;
  v9[23] = &byte_60B3BA34;
  v9[24] = &sead__SafeStringBase__vtable;
  v9[25] = &byte_60B3BA34;
  v9[26] = &sead__SafeStringBase__vtable;
  v9[27] = &byte_60B3BA34;
  v9[28] = &sead__SafeStringBase__vtable;
  v9[29] = &byte_60B3BA34;
  do
  {
    v8 = v2;
    v3 = sub_604962DC(v2);
    v7[0] = (int)&sead__SafeStringBase__vtable;
    v7[1] = v3;
    v4 = v8;
    if ( v8 >= 0xF )
      v4 = 0;
    (*(void (__fastcall **)(_DWORD *, int *))(v9[2 * v4] + 8))(&v9[2 * v4], v7);
    v5 = v2 + 1;
    if ( v2 > 14 )
      v5 = 15;
    v2 = v5;
  }
  while ( v5 != 15 );
  v7[0] = 15;
  return sub_60476030(a1 + 36, v9, v7);
}
