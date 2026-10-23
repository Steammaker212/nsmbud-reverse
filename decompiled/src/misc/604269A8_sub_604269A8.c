/* sub_604269A8
 * address: 0x604269A8   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604269A8(int a1)
{
  int v2; // r0
  int v3; // r2
  int i; // r5
  int *v5; // r10
  const char *v6; // r11
  int v7; // r1
  int j; // r2
  int v9; // r7
  int v10; // r2
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int result; // r0
  int (**v17)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v18; // [sp+18h] [bp-28h]

  v17 = &sead__SafeStringBase__vtable;
  v18 = "system";
  v2 = s_baglenv_ref(dword_60C9BAFC, (int *)&v17);
  sub_60426C24(a1, v2, v3);
  for ( i = 0; i != 13; ++i )
  {
    v17 = &sead__SafeStringBase__vtable;
    v18 = "CS_W8a";
    v5 = &dword_60C9BFA0[2 * i];
    (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
    (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
    v6 = (const char *)v5[1];
    ((void (__fastcall *)(int (***)()))v17[3])(&v17);
    if ( v6 == v18 )
    {
LABEL_10:
      v9 = s_baglenv_ref(dword_60C9BAFC, &dword_60C9BFA0[2 * i]);
      sub_60426C24(a1, v9, v10);
      FIELD_U32(a1, 18056) = v9;
    }
    else
    {
      v7 = v5[1];
      for ( j = 1; *(unsigned __int8 *)(v7 + j - 1) == (unsigned __int8)v18[j - 1]; j += 2 )
      {
        if ( !*(_BYTE *)(v7 + j - 1) )
          goto LABEL_10;
        if ( j > 0x80000 || *(unsigned __int8 *)(v7 + j) != (unsigned __int8)v18[j] )
          break;
        if ( !*(_BYTE *)(v7 + j) )
          goto LABEL_10;
      }
      v11 = s_baglenv_ref(dword_60C9BAFC, &dword_60C9BFA0[2 * i]);
      sub_60426C24(a1, v11, v12);
    }
  }
  v17 = &sead__SafeStringBase__vtable;
  v18 = "CS_W8a_DarkCloud";
  v13 = s_baglenv_ref(dword_60C9BAFC, (int *)&v17);
  sub_60426C24(a1, v13, v14);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "CS_All";
  v15 = s_bagllmap_ref(dword_60C9BAFC, (int *)&v17);
  sub_60426E38(a1, v15);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "CS_W8a_demo";
  result = s_baglenv_ref(dword_60C9BAFC, (int *)&v17);
  FIELD_U32(a1, 18060) = result;
  return result;
}
