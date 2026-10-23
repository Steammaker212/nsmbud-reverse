/* sub_604D5588
 * address: 0x604D5588   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D5588(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v6[2]; // [sp+4h] [bp-1B4h] BYREF
  int v7; // [sp+Ch] [bp-1ACh]
  _DWORD v8[106]; // [sp+10h] [bp-1A8h] BYREF

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
  v8[38] = &sead__SafeStringBase__vtable;
  v8[39] = &byte_60B3BA34;
  v8[40] = &sead__SafeStringBase__vtable;
  v8[41] = &byte_60B3BA34;
  v8[42] = &sead__SafeStringBase__vtable;
  v8[43] = &byte_60B3BA34;
  v8[44] = &sead__SafeStringBase__vtable;
  v8[45] = &byte_60B3BA34;
  v8[46] = &sead__SafeStringBase__vtable;
  v8[47] = &byte_60B3BA34;
  v8[48] = &sead__SafeStringBase__vtable;
  v8[49] = &byte_60B3BA34;
  v8[50] = &sead__SafeStringBase__vtable;
  v8[51] = &byte_60B3BA34;
  v8[52] = &sead__SafeStringBase__vtable;
  v8[53] = &byte_60B3BA34;
  v8[54] = &sead__SafeStringBase__vtable;
  v8[55] = &byte_60B3BA34;
  v8[56] = &sead__SafeStringBase__vtable;
  v8[57] = &byte_60B3BA34;
  v8[58] = &sead__SafeStringBase__vtable;
  v8[59] = &byte_60B3BA34;
  v8[60] = &sead__SafeStringBase__vtable;
  v8[61] = &byte_60B3BA34;
  v8[62] = &sead__SafeStringBase__vtable;
  v8[63] = &byte_60B3BA34;
  v8[64] = &sead__SafeStringBase__vtable;
  v8[65] = &byte_60B3BA34;
  v8[66] = &sead__SafeStringBase__vtable;
  v8[67] = &byte_60B3BA34;
  v8[68] = &sead__SafeStringBase__vtable;
  v8[69] = &byte_60B3BA34;
  v8[70] = &sead__SafeStringBase__vtable;
  v8[71] = &byte_60B3BA34;
  v8[72] = &sead__SafeStringBase__vtable;
  v8[73] = &byte_60B3BA34;
  v8[74] = &sead__SafeStringBase__vtable;
  v8[75] = &byte_60B3BA34;
  v8[76] = &sead__SafeStringBase__vtable;
  v8[77] = &byte_60B3BA34;
  v8[78] = &sead__SafeStringBase__vtable;
  v8[79] = &byte_60B3BA34;
  v8[80] = &sead__SafeStringBase__vtable;
  v8[81] = &byte_60B3BA34;
  v8[82] = &sead__SafeStringBase__vtable;
  v8[83] = &byte_60B3BA34;
  v8[84] = &sead__SafeStringBase__vtable;
  v8[85] = &byte_60B3BA34;
  v8[86] = &sead__SafeStringBase__vtable;
  v8[87] = &byte_60B3BA34;
  v8[88] = &sead__SafeStringBase__vtable;
  v8[89] = &byte_60B3BA34;
  v8[90] = &sead__SafeStringBase__vtable;
  v8[91] = &byte_60B3BA34;
  v8[92] = &sead__SafeStringBase__vtable;
  v8[93] = &byte_60B3BA34;
  v8[94] = &sead__SafeStringBase__vtable;
  v8[95] = &byte_60B3BA34;
  v8[96] = &sead__SafeStringBase__vtable;
  v8[97] = &byte_60B3BA34;
  do
  {
    v7 = v2;
    v3 = sub_604DB348(v2);
    v6[0] = (int)&sead__SafeStringBase__vtable;
    v6[1] = v3;
    (*(void (__fastcall **)(_DWORD *, int *))(v8[2 * v7] + 8))(&v8[2 * v7], v6);
    v4 = v2 + 1;
    if ( v2 > 48 )
      v4 = 49;
    v2 = v4;
  }
  while ( v4 != 49 );
  v6[0] = 49;
  return sub_6047518C(a1 + 60, a1 + 3652, v8, v6);
}
