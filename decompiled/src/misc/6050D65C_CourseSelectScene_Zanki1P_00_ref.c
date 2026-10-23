/* CourseSelectScene_Zanki1P_00_ref
 * address: 0x6050D65C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectScene_Zanki1P_00_ref(_DWORD *a1)
{
  int v1; // r5
  int result; // r0
  unsigned int v4; // r8
  int v5; // r0
  int v6; // r6
  int i; // r2
  bool v8; // zf
  int v9; // r0
  int (**v10)(); // [sp+8h] [bp-20h] BYREF
  const char *v11; // [sp+Ch] [bp-1Ch]

  result = a1[1];
  if ( (result & 1) != 0 )
  {
    v4 = sub_6050DF0C(a1);
    v10 = &sead__SafeStringBase__vtable;
    v11 = (const char *)dword_60CA8074;
    if ( sub_6047467C(a1 + 15, 0, &v10, (int)&dword_60CA8078, 1.0, 0) == 1 )
    {
      v5 = sub_6047482C((int)(a1 + 15), 0);
      v6 = v5;
      if ( v5 )
      {
        v1 = FIELD_U32(v5, 56);
        ((void (__fastcall *)(int (***)()))v10[3])(&v10);
        ((void (__fastcall *)(int (***)()))v10[3])(&v10);
        if ( v11 == (const char *)v1 )
        {
LABEL_12:
          (*(void (__fastcall **)(int, float))(*(_DWORD *)v6 + 96))(v6, (float)v4);
        }
        else
        {
          for ( i = 1; (unsigned __int8)v11[i - 1] == *(unsigned __int8 *)(v1 + i - 1); i += 2 )
          {
            if ( !v11[i - 1] )
              goto LABEL_12;
            if ( i > 0x80000 || (unsigned __int8)v11[i] != *(unsigned __int8 *)(v1 + i) )
              break;
            if ( !v11[i] )
              goto LABEL_12;
          }
        }
      }
    }
    result = a1[1];
  }
  v8 = (result & 2) == 0;
  if ( (result & 2) != 0 )
  {
    v1 = a1[900];
    v8 = v1 == 0;
  }
  if ( !v8 )
  {
    v10 = &sead__SafeStringBase__vtable;
    v11 = "CourseSelectScene_Zanki1P_00";
    v9 = sub_6050DF34(a1, a1[5], 0);
    return sub_6047E0EC(&v10, v1, 1, v9);
  }
  return result;
}
