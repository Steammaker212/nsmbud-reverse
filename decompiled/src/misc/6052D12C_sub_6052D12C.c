/* sub_6052D12C
 * address: 0x6052D12C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052D12C(int a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v8[2]; // [sp+0h] [bp-B0h] BYREF
  _DWORD v9[42]; // [sp+8h] [bp-A8h] BYREF

  v2 = 0;
  v3 = 0;
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
  v9[30] = &sead__SafeStringBase__vtable;
  v9[31] = &byte_60B3BA34;
  v9[32] = &sead__SafeStringBase__vtable;
  v9[33] = &byte_60B3BA34;
  do
  {
    v4 = sub_6052E2C8(v3);
    v5 = v9[v2];
    v8[0] = (int)&sead__SafeStringBase__vtable;
    v8[1] = v4;
    (*(void (__fastcall **)(_DWORD *, int *))(v5 + 8))(&v9[v2], v8);
    v6 = v3 + 1;
    v2 += 2;
    if ( v3 > 16 )
      v6 = 17;
    v3 = v6;
  }
  while ( v2 != 34 );
  v8[0] = 17;
  return sub_60475334(a1 + 72, a1 + 3756, v9, v8);
}
