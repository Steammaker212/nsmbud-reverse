/* CouseSelectVSRandom_World_00_ref
 * address: 0x604C9CD0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CouseSelectVSRandom_World_00_ref(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r2
  unsigned __int8 v5; // r0
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  const char *v11; // [sp+4h] [bp-14h]

  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  v3 = a1 + 52644 * v2;
  v4 = FIELD_U32(v3, 141868);
  if ( v4 == 12 )
    v4 = 0;
  v5 = sub_6040135C(dword_60C99E44, FIELD_U32(v3, 89288), v4);
  a5 = (int)&sead__SafeStringBase__vtable;
  v11 = "CouseSelectVSRandom_World_00";
  sub_6047E0EC(&a5, FIELD_U32(a1, 38900), 1, v5);
  StateMgr__changeState((StateMgr *)(a1 + 35252), &stru_60CA4098);
  v6 = sub_604DABE0(3);
  v7 = (_DWORD *)(a1 + 40);
  a5 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v6;
  sub_604741D8(v7, 4u, &a5, 0);
  v8 = sub_604DABE0(10);
  a5 = (int)&sead__SafeStringBase__vtable;
  v11 = (const char *)v8;
  return sub_60473DE4(v7, 6u, &a5, 0);
}
