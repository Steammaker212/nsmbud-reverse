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
  v3 = sub_60475900(v2, (int)&FIELD_U32(v2 + (220) * 16, 0x8), 8);
  FIELD_U32(v3, 0x0) = (int)&off_60BFD9B8;
  FIELD_U32(v3 + (220) * 16, 0x8) = 0;
  FIELD_U32(v3 + (220) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (221) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (221) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (221) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (221) * 16, 0xC) = 0;
  FIELD_U32(v3 + (222) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (222) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (222) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (222) * 16, 0xC)) = 0;
  FIELD_U32(v3 + (223) * 16, 0x0) = 0;
  FIELD_U32(v3 + (223) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (223) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (223) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(v3 + (224) * 16, 0x0)) = 0;
  FIELD_U32(v3 + (224) * 16, 0x4) = 0;
  FIELD_U32(v3 + (224) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (224) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (225) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(v3 + (225) * 16, 0x4)) = 0;
  FIELD_U32(v3 + (225) * 16, 0x8) = 0;
  FIELD_U32(v3 + (225) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (226) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (226) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (226) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (226) * 16, 0xC) = 0;
  FIELD_U32(v3 + (227) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (227) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (227) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (227) * 16, 0xC)) = 0;
  FIELD_U32(v3 + (228) * 16, 0x0) = 0;
  FIELD_U32(v3 + (228) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (228) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (228) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(v3 + (229) * 16, 0x0)) = 0;
  FIELD_U32(v3 + (229) * 16, 0x4) = 0;
  FIELD_U32(v3 + (229) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (229) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (230) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(v3 + (230) * 16, 0x4)) = 0;
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
