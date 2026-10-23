/* sub_60419C88
 * address: 0x60419C88   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60419C88(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v17; // [sp+0h] [bp-28h] BYREF
  int v18; // [sp+4h] [bp-24h]
  int (**v19)(); // [sp+8h] [bp-20h] BYREF
  const char *v20; // [sp+Ch] [bp-1Ch]

  v1 = a1;
  v2 = a1 + 832;
  v17 = 0;
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_beard";
  ((void (__fastcall *)(int, int (***)(), int *))sub_6041A474)(a1 + 832, &v19, &v17);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 1;
  v20 = "mt_faceline";
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v3);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_forehead";
  v17 = 2;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v4);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_hair";
  v17 = 3;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v5);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_hat";
  v17 = 4;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v6);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_nose";
  v17 = 5;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v7);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_noseline";
  v17 = 7;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v8);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_glass";
  v17 = 8;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v9);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "mt_mask";
  v17 = 6;
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A474)(v2, &v19, &v17, v10);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 0;
  v18 = 0;
  v20 = "face";
  v1 += 1464;
  ((void (__fastcall *)(int, int (***)(), int *))sub_6041A700)(v1, &v19, &v17);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 0;
  v18 = 0;
  v20 = "glass";
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A700)(v1, &v19, &v17, v11);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 0;
  v18 = 0;
  v20 = "hair_normal";
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A700)(v1, &v19, &v17, v12);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 1;
  v18 = 0;
  v20 = "hair_hat";
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A700)(v1, &v19, &v17, v13);
  v19 = &sead__SafeStringBase__vtable;
  v17 = 0;
  v18 = 0;
  v20 = "nose_normal";
  ((void (__fastcall *)(int, int (***)(), int *, int))sub_6041A700)(v1, &v19, &v17, v14);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "nose_flatten";
  v17 = 0;
  v18 = 1;
  return ((int (__fastcall *)(int, int (***)(), int *, int))sub_6041A700)(v1, &v19, &v17, v15);
}
