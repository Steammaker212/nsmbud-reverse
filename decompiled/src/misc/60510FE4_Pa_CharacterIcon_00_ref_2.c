/* Pa_CharacterIcon_00_ref_2
 * address: 0x60510FE4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_CharacterIcon_00_ref_2(int a1)
{
  _DWORD *v2; // r4
  const char *v3; // r6
  int (**v5)(); // [sp+4h] [bp-7Ch] BYREF
  int *v6; // [sp+8h] [bp-78h]
  int v7; // [sp+Ch] [bp-74h]
  int v8; // [sp+10h] [bp-70h] BYREF
  int v9[10]; // [sp+58h] [bp-28h] BYREF

  v2 = (_DWORD *)(a1 + 56);
  sub_604734E4((_DWORD *)(a1 + 56), 0);
  sub_60475C8C((int)v2);
  v6 = &v8;
  v5 = &BufferedSafeStringBase_char_vtable_probably;
  v7 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5);
  *(_BYTE *)v6 = 0;
  v5 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA83F4 + 12))(&dword_60CA83F4);
  v3 = (const char *)dword_60CA83F8;
  (*(void (__fastcall **)(int *))(dword_60CA83FC + 12))(&dword_60CA83FC);
  sub_608FDDF4((int)&v5, "%s.%s", v3, (const char *)dword_60CA8400);
  message_ref(v2, &v5, a1 + 3744, 0, 0);
  v9[0] = (int)&sead__SafeStringBase__vtable;
  v9[1] = (int)"Pa_CharacterIcon_00";
  sub_60506F20((_DWORD *)(a1 + 5924), (int)v2, v9);
  v9[0] = 9;
  return sub_60476030((int)v2, &dword_60CA84A0, v9);
}
