/* CourseSelectScene_Zanki1P_00_ref_2
 * address: 0x6050E048   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectScene_Zanki1P_00_ref_2(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r5
  _DWORD *v5; // r6
  float v6; // s0
  int v7; // r1
  int result; // r0
  int (**v9)(); // [sp+8h] [bp-18h] BYREF
  const char *v10; // [sp+Ch] [bp-14h]

  v2 = a1[1];
  if ( (v2 & 1) != 0 )
  {
    v3 = sub_6050DF0C((int)a1);
    sub_6050E6F8(a1, v3);
    v2 = a1[1];
  }
  if ( (v2 & 2) != 0 )
  {
    v4 = sub_6050DF34((int)a1, a1[5]);
    if ( v4 )
    {
      if ( sub_6050DF34((int)a1, a1[4]) )
      {
        v5 = a1 + 15;
        goto LABEL_10;
      }
      v6 = -1.0;
      v9 = &sead__SafeStringBase__vtable;
      v10 = (const char *)dword_60CA80F0;
    }
    else
    {
      v6 = 1.0;
      v9 = &sead__SafeStringBase__vtable;
      v10 = (const char *)dword_60CA80F0;
    }
    v5 = a1 + 15;
    sub_6047467C(a1 + 15, 2u, &v9, (int)&dword_60CA8104, v6, 0);
LABEL_10:
    v9 = &sead__SafeStringBase__vtable;
    v10 = (const char *)dword_60CA80E8;
    sub_6047467C(v5, 1u, &v9, (int)&dword_60CA80FC, 1.0, 0);
    v7 = a1[913];
    if ( v7 )
    {
      v9 = &sead__SafeStringBase__vtable;
      v10 = "CourseSelectScene_Zanki1P_00";
      sub_6047E0EC(&v9, v7, 1, v4);
    }
  }
  result = a1[916];
  if ( result == 653 )
    return CourseSelectScene_Zanki1P_00_ref_2_helper(a1);
  return result;
}
