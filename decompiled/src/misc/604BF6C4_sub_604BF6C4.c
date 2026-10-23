/* sub_604BF6C4
 * address: 0x604BF6C4   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BF6C4(_DWORD *a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r1
  int result; // r0
  _DWORD v8[2]; // [sp+8h] [bp-20h] BYREF
  int (**v9)(); // [sp+10h] [bp-18h] BYREF
  const char *v10; // [sp+14h] [bp-14h]

  v2 = (sead_IDisposer *)operator_new(0xE68u);
  FIELD_U32(v2, 0x0) = (int)&off_60BFD9B8;
  v3 = sub_60475900(v2, (int)&v2[220].field_8, 8);
  FIELD_U32(v3, 0x0) = (int)&off_60BFD9B8;
  v3[220].field_8 = 0;
  v3[220].field_C = (int)&sead__SafeStringBase__vtable;
  v3[221].vtable = (int)&byte_60B3BA34;
  v3[221].containingHeap = 0;
  LOBYTE(v3[221].field_8) = 0;
  v3[221].field_C = 0;
  v3[222].vtable = (int)&sead__SafeStringBase__vtable;
  v3[222].containingHeap = (int)&byte_60B3BA34;
  v3[222].field_8 = 0;
  LOBYTE(v3[222].field_C) = 0;
  v3[223].vtable = 0;
  v3[223].containingHeap = (int)&sead__SafeStringBase__vtable;
  v3[223].field_8 = (int)&byte_60B3BA34;
  v3[223].field_C = 0;
  LOBYTE(v3[224].vtable) = 0;
  v3[224].containingHeap = 0;
  v3[224].field_8 = (int)&sead__SafeStringBase__vtable;
  v3[224].field_C = (int)&byte_60B3BA34;
  v3[225].vtable = 0;
  LOBYTE(v3[225].containingHeap) = 0;
  v3[225].field_8 = 0;
  v3[225].field_C = (int)&sead__SafeStringBase__vtable;
  v3[226].vtable = (int)&byte_60B3BA34;
  v3[226].containingHeap = 0;
  LOBYTE(v3[226].field_8) = 0;
  v3[226].field_C = 0;
  v3[227].vtable = (int)&sead__SafeStringBase__vtable;
  v3[227].containingHeap = (int)&byte_60B3BA34;
  v3[227].field_8 = 0;
  LOBYTE(v3[227].field_C) = 0;
  v3[228].vtable = 0;
  v3[228].containingHeap = (int)&sead__SafeStringBase__vtable;
  v3[228].field_8 = (int)&byte_60B3BA34;
  v3[228].field_C = 0;
  LOBYTE(v3[229].vtable) = 0;
  v3[229].containingHeap = 0;
  v3[229].field_8 = (int)&sead__SafeStringBase__vtable;
  v3[229].field_C = (int)&byte_60B3BA34;
  v3[230].vtable = 0;
  LOBYTE(v3[230].containingHeap) = 0;
  a1[1] = v3;
  sub_604734E4(v3, 0);
  v4 = a1[1];
  v9 = &sead__SafeStringBase__vtable;
  v10 = "FreeMenu";
  sub_60475C8C(v4);
  v5 = (_DWORD *)a1[1];
  v9 = &sead__SafeStringBase__vtable;
  v10 = "CourseSelectFree.bflyt";
  message_ref(v5, &v9, (int)(a1 + 151), 0, 0);
  v6 = a1[1];
  v9 = &sead__SafeStringBase__vtable;
  v8[0] = &sead__SafeStringBase__vtable;
  v10 = "Pa_Return_00";
  v8[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 672, v6, &v9, v8, 1, 0);
  a1[682] = 2;
  result = a1[681] | 1;
  a1[681] = result;
  return result;
}
