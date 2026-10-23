/* sub_60520E18
 * address: 0x60520E18   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60520E18(int a1)
{
  int v2; // r0
  int v3; // r6
  int v5; // [sp+4h] [bp-34h] BYREF
  int v6; // [sp+8h] [bp-30h]
  int v7; // [sp+Ch] [bp-2Ch]
  _DWORD v8[10]; // [sp+10h] [bp-28h] BYREF

  sub_60520F5C();
  v7 = 0;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v8[2] = &sead__SafeStringBase__vtable;
  v8[3] = &byte_60B3BA34;
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = N_PlayerPos_00_N_Score_00_ref(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v8, &v5);
  v7 = 1;
  v2 = N_PlayerPos_00_N_Score_00_ref(1);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[2 * v7] + 8))(&v8[2 * v7], &v5);
  v5 = 2;
  sub_6047518C(a1 + 36, a1 + 3784, v8, &v5);
  sub_60521144(a1);
  v3 = dword_60C99DEC;
  sub_603F6288((StateMgr *)(a1 + 3868));
  sub_6078E608(*(_DWORD *)(FIELD_U32(a1, 3872) + 12), 0);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 3872) + 4))(
           FIELD_U32(a1, 3872),
           FIELD_U8(v3, 64));
}
