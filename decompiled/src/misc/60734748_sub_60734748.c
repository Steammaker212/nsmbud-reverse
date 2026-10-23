/* sub_60734748
 * address: 0x60734748   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60734748(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  _DWORD *v5; // r0
  unsigned int v6; // r3
  int v7; // r1
  int v8; // r4
  _DWORD *v9; // t1
  int v10; // r0
  int v11; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  const char *v13; // [sp+4h] [bp-14h]
  int v14; // [sp+8h] [bp-10h]
  int v15; // [sp+Ch] [bp-Ch]

  v4 = FIELD_U8(a1, 6780);
  v2 = (_BYTE *)(a1 + 6780);
  v3 = v4;
  if ( v4 == 2 )
  {
    v5 = *(_DWORD **)(a1 + 6100);
    v6 = v5[17];
    v7 = v5[3];
    if ( v5[2] > v6 )
      v7 += 4 * v6;
    if ( (*(_BYTE *)(*(_DWORD *)v7 + 28) & 0x20) != 0 )
    {
      a5 = (int)&sead__SafeStringBase__vtable;
      v13 = "shufflePanel_wait_checked";
      sub_60421AE4(v5, (int)&a5, 1, 1.0, 0.0);
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDD60);
    }
  }
  else if ( v3 == 1 )
  {
    *v2 = 2;
    v9 = *(_DWORD **)(a1 + 6100);
    v8 = a1 + 6100;
    v10 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v9 + 132))(*v9, 1);
    a5 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 1065353216;
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 20))(v10, 0, &a5);
    if ( FIELD_U8(v8, 701) )
      sub_60807EF0(SoundSystem_instance, "SE_MG_SH_ITEM_OK", 0, 1);
    v11 = *(_DWORD *)v8;
    a5 = (int)&sead__SafeStringBase__vtable;
    v13 = "shufflePanel_win";
    sub_60421AD4(v11);
  }
  else if ( !v3 )
  {
    *v2 = 1;
    if ( FIELD_U8(a1, 6801) )
      EffectData_create(262, (Vec3 *)(a1 + 108), 0, 0);
  }
}
