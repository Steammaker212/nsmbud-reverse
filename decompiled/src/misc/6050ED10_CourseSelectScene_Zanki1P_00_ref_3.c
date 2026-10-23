/* CourseSelectScene_Zanki1P_00_ref_3
 * address: 0x6050ED10   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectScene_Zanki1P_00_ref_3(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r6
  float v5; // s0
  int v6; // r1
  int result; // r0
  int (**v8)(); // [sp+8h] [bp-18h] BYREF
  const char *v9; // [sp+Ch] [bp-14h]

  v2 = a1[1];
  if ( (v2 & 1) != 0 )
  {
    sub_6050F518(a1);
    sub_6050F728(a1);
    v2 = a1[1];
  }
  if ( (v2 & 2) != 0 )
  {
    v3 = sub_6050DF34((int)a1, a1[5]);
    if ( v3 )
    {
      if ( sub_6050DF34((int)a1, a1[4]) )
      {
        v4 = a1 + 15;
        goto LABEL_10;
      }
      v5 = -1.0;
      v8 = &sead__SafeStringBase__vtable;
      v9 = (const char *)dword_60CA8178;
    }
    else
    {
      v5 = 1.0;
      v8 = &sead__SafeStringBase__vtable;
      v9 = (const char *)dword_60CA8178;
    }
    v4 = a1 + 15;
    sub_6047467C(a1 + 15, 6u, &v8, (int)&dword_60CA81AC, v5, 0);
LABEL_10:
    v8 = &sead__SafeStringBase__vtable;
    v9 = (const char *)dword_60CA8170;
    sub_6047467C(v4, 5u, &v8, (int)&dword_60CA81A4, 1.0, 0);
    v6 = a1[939];
    if ( v6 )
    {
      v8 = &sead__SafeStringBase__vtable;
      v9 = "CourseSelectScene_Zanki1P_00";
      sub_6047E0EC(&v8, v6, 1, v3);
    }
  }
  result = a1[946];
  if ( result == 653 )
    return CourseSelectScene_Zanki1P_00_ref_3_helper(a1);
  return result;
}
