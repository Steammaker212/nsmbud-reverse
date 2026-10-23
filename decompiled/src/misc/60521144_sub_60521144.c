/* sub_60521144
 * address: 0x60521144   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60521144(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v6[2]; // [sp+4h] [bp-BCh] BYREF
  int v7; // [sp+Ch] [bp-B4h]
  _DWORD v8[44]; // [sp+10h] [bp-B0h] BYREF

  v2 = 0;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v8[2] = &sead__SafeStringBase__vtable;
  v8[3] = &byte_60B3BA34;
  v8[4] = &sead__SafeStringBase__vtable;
  v8[5] = &byte_60B3BA34;
  v8[6] = &sead__SafeStringBase__vtable;
  v8[7] = &byte_60B3BA34;
  v8[8] = &sead__SafeStringBase__vtable;
  v8[9] = &byte_60B3BA34;
  v8[10] = &sead__SafeStringBase__vtable;
  v8[11] = &byte_60B3BA34;
  v8[12] = &sead__SafeStringBase__vtable;
  v8[13] = &byte_60B3BA34;
  v8[14] = &sead__SafeStringBase__vtable;
  v8[15] = &byte_60B3BA34;
  v8[16] = &sead__SafeStringBase__vtable;
  v8[17] = &byte_60B3BA34;
  v8[18] = &sead__SafeStringBase__vtable;
  v8[19] = &byte_60B3BA34;
  v8[20] = &sead__SafeStringBase__vtable;
  v8[21] = &byte_60B3BA34;
  v8[22] = &sead__SafeStringBase__vtable;
  v8[23] = &byte_60B3BA34;
  v8[24] = &sead__SafeStringBase__vtable;
  v8[25] = &byte_60B3BA34;
  v8[26] = &sead__SafeStringBase__vtable;
  v8[27] = &byte_60B3BA34;
  v8[28] = &sead__SafeStringBase__vtable;
  v8[29] = &byte_60B3BA34;
  v8[30] = &sead__SafeStringBase__vtable;
  v8[31] = &byte_60B3BA34;
  v8[32] = &sead__SafeStringBase__vtable;
  v8[33] = &byte_60B3BA34;
  v8[34] = &sead__SafeStringBase__vtable;
  v8[35] = &byte_60B3BA34;
  v8[36] = &sead__SafeStringBase__vtable;
  v8[37] = &byte_60B3BA34;
  do
  {
    v7 = v2;
    v3 = sub_60522E04(v2);
    v6[0] = (int)&sead__SafeStringBase__vtable;
    v6[1] = v3;
    (*(void (__fastcall **)(_DWORD *, int *))(v8[2 * v7] + 8))(&v8[2 * v7], v6);
    v4 = v2 + 1;
    if ( v2 > 18 )
      v4 = 19;
    v2 = v4;
  }
  while ( v4 != 19 );
  v6[0] = 19;
  return sub_60475334(a1 + 36, a1 + 3792, v8, v6);
}
