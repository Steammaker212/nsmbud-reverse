/* CourseSelVSWin_ref
 * address: 0x604D57C0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelVSWin_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-8Ch] BYREF
  const char *v7; // [sp+8h] [bp-88h]
  int v8; // [sp+Ch] [bp-84h]
  _DWORD v9[32]; // [sp+10h] [bp-80h] BYREF

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
  do
  {
    v8 = v2;
    v3 = sub_604DB6FC(v2);
    v6 = (int)&sead__SafeStringBase__vtable;
    v7 = (const char *)v3;
    (*(void (__fastcall **)(_DWORD *, int *))(v9[2 * v8] + 8))(&v9[2 * v8], &v6);
    v4 = v2 + 1;
    if ( v2 > 12 )
      v4 = 13;
    v2 = v4;
  }
  while ( v4 != 13 );
  v6 = 13;
  sub_604756E0(a1 + 60, a1 + 3848, v9, &v6);
  v6 = 0;
  sub_60502210(a1 + 3900, &v6, 12);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "CourseSelVSWin";
  sead__SafeStringBase__operator_assign(a1 + 4912, (int)&v6);
  FIELD_U8(a1, 4945) = 1;
  return 4945;
}
