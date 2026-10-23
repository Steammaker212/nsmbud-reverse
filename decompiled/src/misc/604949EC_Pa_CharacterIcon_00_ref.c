/* Pa_CharacterIcon_00_ref
 * address: 0x604949EC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_CharacterIcon_00_ref(int *a1)
{
  int *v1; // r5
  _DWORD *v2; // r4
  int v3; // t1
  int v4; // r0
  _DWORD v6[2]; // [sp+8h] [bp-28h] BYREF
  int (**v7)(); // [sp+10h] [bp-20h] BYREF
  const char *v8; // [sp+14h] [bp-1Ch]

  v1 = a1;
  v2 = a1 + 9;
  sub_604734E4(a1 + 9, 0);
  sub_60475C8C((int)v2);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "ChallengeSelectWindow.bflyt";
  message_ref(v2, &v7, (int)(v1 + 974), 0, 0);
  v7 = &sead__SafeStringBase__vtable;
  v6[0] = &sead__SafeStringBase__vtable;
  v8 = "Pa_Return_00";
  v6[1] = "Pa_Icon_00";
  ((void (__fastcall *)(int *, _DWORD *, int (***)(), _DWORD *, int, _DWORD))sub_6050A704)(v1 + 1493, v2, &v7, v6, 1, 0);
  v1[1503] = 2;
  v3 = v1[1502];
  v1 += 1502;
  *v1 = v3 | 1;
  v4 = operator_new(0xE24u);
  *(v1 - 12) = sub_60506DB0(v4);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "Pa_CharacterIcon_00";
  return sub_60506F20();
}
