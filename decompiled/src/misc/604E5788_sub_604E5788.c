/* sub_604E5788
 * address: 0x604E5788   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5788(int a1)
{
  const char *v2; // r7
  int v3; // r1
  int v4; // r1
  int v5; // r0
  int (__fastcall *v6)(int, int *, int *); // r3
  int (**v8)(); // [sp+4h] [bp-74h] BYREF
  int *v9; // [sp+8h] [bp-70h]
  int v10; // [sp+Ch] [bp-6Ch]
  int v11; // [sp+10h] [bp-68h] BYREF
  int v12; // [sp+58h] [bp-20h] BYREF
  const char *v13; // [sp+5Ch] [bp-1Ch]

  sub_604734E4(*(_DWORD **)(a1 + 4), 0);
  sub_60475C8C(FIELD_U32(a1, 4));
  v9 = &v11;
  v8 = &BufferedSafeStringBase_char_vtable_probably;
  v10 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v8);
  *(_BYTE *)v9 = 0;
  v8 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA5AF0 + 12))(&dword_60CA5AF0);
  v2 = (const char *)dword_60CA5AF4;
  (*(void (__fastcall **)(int *))(dword_60CA5AF8 + 12))(&dword_60CA5AF8);
  sub_608FDDF4((int)&v8, "%s.%s", v2, (const char *)dword_60CA5AFC);
  message_ref(*(_DWORD **)(a1 + 4), &v8, 0, 0, 0);
  Pa_IconB_ref(a1);
  Pa_IconA_ref(a1);
  Pa_VSIcon_ref(a1);
  v3 = FIELD_U32(a1, 4);
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = "Pa_ModelPlayIndex_00";
  sub_6050ACE4(a1 + 40776, v3, &v12);
  sub_604E67B8(a1);
  v4 = FIELD_U32(a1, 4);
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = "Pa_FreeZanki_00";
  sub_6050F0B0(a1 + 59032, v4, &v12);
  v5 = FIELD_U32(a1, 4);
  v6 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v5 + 8);
  v12 = 17;
  return v6(v5, &dword_60CA5A4C, &v12);
}
