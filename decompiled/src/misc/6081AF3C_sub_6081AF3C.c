/* sub_6081AF3C
 * address: 0x6081AF3C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081AF3C(int a1, int a2, int a3)
{
  void *v6; // r0
  int v7; // r5
  _DWORD *v8; // r6
  int v9; // r7
  int v10; // r0
  int (**v12)(); // [sp+18h] [bp-20h] BYREF
  const char *v13; // [sp+1Ch] [bp-1Ch]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "CourseCacheMgr";
  v6 = (void *)sead__ExpHeap__create(73400320, (int)&v12, *(_DWORD **)(a1 + 36), 4, -1, 0);
  FIELD_U32(a1, 32) = v6;
  FIELD_U32(a1, 16) = 2;
  FIELD_U32(a1, 20) = a2;
  FIELD_U32(a1, 24) = a3;
  v7 = operator_new_8DE25C(0x94u, v6, 4);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "loadThread";
  v8 = (_DWORD *)operator_new_8DE25C(0x10u, *(void **)(a1 + 32), 4);
  v8[1] = a1;
  v8[2] = sub_6081B070;
  v8[3] = 0;
  *v8 = off_60C2A420;
  v9 = FIELD_U32(a1, 32);
  v10 = sead__ThreadUtil__ConvertPrioritySeadToPlatform(21);
  sub_6090891C(v7, &v12, v8, v9, v10, 1, 0x7FFFFFFF, 0x4000, 32);
  FIELD_U32(a1, 28) = v7;
  FIELD_U32(a1, 16) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7);
}
