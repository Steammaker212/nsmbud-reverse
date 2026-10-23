/* SE_SYS_DIALOGUE_IN_ref_54BEE8
 * address: 0x6054BEE8   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_54BEE8(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int v6; // r0
  int v7; // r3
  int v8; // r5
  int v9; // r3
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r5
  int v13; // r0
  int (**v15)(); // [sp+0h] [bp-18h] BYREF
  int v16; // [sp+4h] [bp-14h]

  v2 = FIELD_U32(a1, 3684);
  v3 = v2;
  if ( v2 != 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 0;
  sub_6050A660(*(_DWORD *)(a1 + 4 * v3 + 3672));
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CACA14, 0);
  if ( FIELD_U8(a1, 4104) )
  {
    v5 = *(_DWORD **)(a1 + 4096);
    v4 = (_DWORD *)(a1 + 4096);
    (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
    v6 = v5[1];
    v15 = &sead__SafeStringBase__vtable;
    v16 = v6;
    sub_6047E0EC(&v15, *(v4 - 108), 0, v7);
    v8 = *v4;
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 12))(*v4);
    v10 = FIELD_U32(v8, 4);
    v15 = &sead__SafeStringBase__vtable;
    v16 = v10;
    v11 = *(v4 - 107);
  }
  else
  {
    v12 = *(_DWORD **)(a1 + 4096);
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v13 = v12[1];
    v15 = &sead__SafeStringBase__vtable;
    v16 = v13;
    v11 = FIELD_U32(a1, 3660);
  }
  sub_6047E0EC(&v15, v11, 0, v9);
  SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 10);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_DIALOGUE_IN", 0, 1);
}
