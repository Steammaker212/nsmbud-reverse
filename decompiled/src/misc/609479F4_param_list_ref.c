/* param_list_ref
 * address: 0x609479F4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall param_list_ref(int a1, int a2, int a3)
{
  int v4; // r5
  const char *v5; // r0
  int (**v7)(); // [sp+0h] [bp-20h] BYREF
  char *v8; // [sp+4h] [bp-1Ch]
  int (**v9)(); // [sp+8h] [bp-18h] BYREF
  const char *v10; // [sp+Ch] [bp-14h]

  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "param_list";
  v8 = &byte_60ABC94D;
  v4 = sub_609A66E8(a2, &v9, &v7, a3);
  sub_609A5D84(v4, 1, a3);
  v5 = sub_60942348();
  v9 = &sead__SafeStringBase__vtable;
  v10 = v5;
  v7 = &sead__SafeStringBase__vtable;
  v8 = off_60C5CB34;
  sub_609A6388(v4, &v9, &v7, a3);
  return v4;
}
