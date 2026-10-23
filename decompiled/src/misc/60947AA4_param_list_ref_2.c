/* param_list_ref_2
 * address: 0x60947AA4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall param_list_ref_2(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v7; // r6
  const char *v8; // r0
  int i; // r7
  int j; // r7
  int (**v11)(); // [sp+0h] [bp-28h] BYREF
  char *v12; // [sp+4h] [bp-24h]
  int (**v13)(); // [sp+8h] [bp-20h] BYREF
  const char *v14; // [sp+Ch] [bp-1Ch]

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  if ( result == 1 )
  {
    v13 = &sead__SafeStringBase__vtable;
    v11 = &sead__SafeStringBase__vtable;
    v14 = "param_list";
    v12 = &byte_60ABC94D;
    v7 = sub_609A66E8(a2, &v13, &v11, a3);
    sub_609A5D84(v7, 1, a3);
    v8 = sub_60942348();
    v13 = &sead__SafeStringBase__vtable;
    v14 = v8;
    v11 = &sead__SafeStringBase__vtable;
    v12 = off_60C5CB34;
    sub_609A6388(v7, &v13, &v11, a3);
    for ( i = a1[1]; i; i = FIELD_U32(i, 20) )
      param_array_ref(i, v7, a3);
    for ( j = a1[3]; j; j = FIELD_U32(j, 24) )
      param_list_ref_2(j, v7, a3);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  }
  return result;
}
