/* sub_604CD374
 * address: 0x604CD374   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CD374(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // [sp+Ch] [bp-3Ch] BYREF
  const char *v11; // [sp+10h] [bp-38h]
  int (**v12)(); // [sp+14h] [bp-34h] BYREF
  char *v13; // [sp+18h] [bp-30h]
  int (**v14)(); // [sp+1Ch] [bp-2Ch] BYREF
  char *v15; // [sp+20h] [bp-28h]

  v2 = a1 + 5720;
  sub_6045BF58(a1 + 5720, 0);
  sub_609094C4(v2, 240, 40, 5);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C(a1 + 40);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "CourseSelectVSConfirm.bflyt";
  message_ref((_DWORD *)(a1 + 40), &v12, a1 + 3680, 0, 0);
  v12 = &sead__SafeStringBase__vtable;
  v10 = (int)&sead__SafeStringBase__vtable;
  v13 = "Pa_Return_00";
  v11 = "Pa_Icon_00";
  sub_6050A704(a1 + 6148, a1 + 40, &v12, &v10, 1, 0);
  FIELD_U32(a1, 6188) = 2;
  FIELD_U32(a1, 6184) |= 1u;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60B3BA34;
  v14 = &sead__SafeStringBase__vtable;
  v15 = &byte_60B3BA34;
  v3 = T_Text_00_T_World_00_ref(0);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v3;
  ((void (__fastcall *)(int (***)(), int *))v12[2])(&v12, &v10);
  v4 = T_Text_00_T_World_00_ref(1);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v4;
  ((void (__fastcall *)(int (***)(), int *))v14[2])(&v14, &v10);
  v10 = 2;
  sub_60475334(a1 + 40, a1 + 3608, &v12, &v10);
  sub_604D7640(a1);
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60B3BA34;
  v14 = &sead__SafeStringBase__vtable;
  v15 = &byte_60B3BA34;
  v5 = InOut_Pos_ref(0);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v5;
  sead__SafeStringBase__operator_assign((int)&v12, (int)&v10);
  v6 = InOut_Pos_ref(1);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v6;
  ((void (__fastcall *)(int (***)(), int *))v14[2])(&v14, &v10);
  v10 = 2;
  sub_60476030(a1 + 40, &v12, &v10);
  v7 = InOut_Pos_ref(1);
  v12 = &sead__SafeStringBase__vtable;
  v13 = (char *)v7;
  sub_60473DE4((_DWORD *)(a1 + 40), 1u, &v12, 0);
  sub_6047459C(a1 + 40, 1u);
  v8 = InOut_Pos_ref(0);
  v12 = &sead__SafeStringBase__vtable;
  v13 = (char *)v8;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &v12, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  FIELD_U8(a1, 6144) = FIELD_U32(dword_60C99DEC, 508) == 3;
  return 6144;
}
