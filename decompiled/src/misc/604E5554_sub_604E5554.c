/* sub_604E5554
 * address: 0x604E5554   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5554(_DWORD *a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h] BYREF

  a1[15713] = 14;
  v2 = (sead_IDisposer *)operator_new(0xEE0u);
  FIELD_U32(v2, 0x0) = (int)&off_60BFEB40;
  v3 = sub_60475900(v2, (int)&v2[220].field_8, 14);
  FIELD_U32(v3, 0x0) = (int)&off_60BFEB40;
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
  v3[230].field_8 = 0;
  v3[230].field_C = (int)&sead__SafeStringBase__vtable;
  v3[231].vtable = (int)&byte_60B3BA34;
  v3[231].containingHeap = 0;
  LOBYTE(v3[231].field_8) = 0;
  v3[231].field_C = 0;
  v3[232].vtable = (int)&sead__SafeStringBase__vtable;
  v3[232].containingHeap = (int)&byte_60B3BA34;
  v3[232].field_8 = 0;
  LOBYTE(v3[232].field_C) = 0;
  v3[233].vtable = 0;
  v3[233].containingHeap = (int)&sead__SafeStringBase__vtable;
  v3[233].field_8 = (int)&byte_60B3BA34;
  v3[233].field_C = 0;
  LOBYTE(v3[234].vtable) = 0;
  v3[234].containingHeap = 0;
  v3[234].field_8 = (int)&sead__SafeStringBase__vtable;
  v3[234].field_C = (int)&byte_60B3BA34;
  v3[235].vtable = 0;
  LOBYTE(v3[235].containingHeap) = 0;
  v3[235].field_8 = 0;
  v3[235].field_C = (int)&sead__SafeStringBase__vtable;
  v3[236].vtable = (int)&byte_60B3BA34;
  v3[236].containingHeap = 0;
  LOBYTE(v3[236].field_8) = 0;
  v3[236].field_C = 0;
  v3[237].vtable = (int)&sead__SafeStringBase__vtable;
  v3[237].containingHeap = (int)&byte_60B3BA34;
  v3[237].field_8 = 0;
  LOBYTE(v3[237].field_C) = 0;
  a1[1] = v3;
  sub_604E5788((int)a1);
  v4 = a1[1];
  v9 = 1;
  sub_604752D4(v4, (int)(a1 + 15705), &dword_60CA5B00, &v9);
  v5 = a1[1];
  v10 = 7;
  sub_604753A8(v5, (int)(a1 + 15706), dword_60CA5B90, &v10);
  sub_604819DC((int)(a1 + 210));
  v6 = sub_608DE200(0x24u);
  a1[2] = v6;
  v7 = a1[1];
  v11 = 9;
  sub_604751FC(v7, v6, dword_60CA5BD0, &v11);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  return sub_604E9590(a1);
}
