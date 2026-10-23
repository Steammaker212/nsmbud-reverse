/* param_array_ref
 * address: 0x60947C28   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall param_array_ref(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v7; // r6
  const char *v8; // r0
  _DWORD *i; // r7
  int (**v10)(); // [sp+0h] [bp-28h] BYREF
  char *v11; // [sp+4h] [bp-24h]
  int (**v12)(); // [sp+8h] [bp-20h] BYREF
  const char *v13; // [sp+Ch] [bp-1Ch]

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  if ( result == 1 )
  {
    v12 = &sead__SafeStringBase__vtable;
    v10 = &sead__SafeStringBase__vtable;
    v13 = "param_array";
    v11 = &byte_60ABC94D;
    v7 = sub_609A66E8(a2, &v12, &v10, a3);
    sub_609A5D84(v7, 1, a3);
    v8 = sub_60942348();
    v12 = &sead__SafeStringBase__vtable;
    v13 = v8;
    v10 = &sead__SafeStringBase__vtable;
    v11 = off_60C5CB34;
    sub_609A6388(v7, &v12, &v10, a3);
    for ( i = (_DWORD *)a1[1]; i; i = (_DWORD *)i[2] )
      (*(void (__fastcall **)(_DWORD *, int, int))(*i + 20))(i, v7, a3);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  }
  return result;
}
