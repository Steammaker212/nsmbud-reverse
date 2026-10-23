/* sub_6077907C
 * address: 0x6077907C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6077907C(int a1)
{
  int v1; // r1
  int v2; // r1
  int ActorSlotChecked; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  unsigned __int8 *v7; // r0
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r0
  unsigned __int8 *v10; // r0
  char v11; // r12
  int (__fastcall ***v12)(_DWORD, int *); // r4

  v1 = FIELD_U32(a1, 224);
  if ( v1 )
  {
    v2 = v1 - 1;
    FIELD_U32(a1, 224) = v2;
    if ( !v2 )
    {
      *(_BYTE *)(FIELD_U32(a1, 472) + 24) = 1;
      ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
      if ( ActorSlotChecked )
        (*(void (__fastcall **)(int))(*(_DWORD *)ActorSlotChecked + 664))(ActorSlotChecked);
      v4 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 664))(v4);
      v5 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 664))(v5);
      v6 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
      if ( v6 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 664))(v6);
      v7 = (unsigned __int8 *)sub_607891F8(PlayerMgr_instance, 0);
      if ( v7 && v7[84] == 255 )
        (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 664))(v7);
      v8 = (unsigned __int8 *)sub_607891F8(PlayerMgr_instance, 1);
      if ( v8 && v8[84] == 255 )
        (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v8 + 664))(v8);
      v9 = (unsigned __int8 *)sub_607891F8(PlayerMgr_instance, 2);
      if ( v9 && v9[84] == 255 )
        (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v9 + 664))(v9);
      v10 = (unsigned __int8 *)sub_607891F8(PlayerMgr_instance, 3);
      if ( v10 && v10[84] == 255 )
        (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v10 + 664))(v10);
      sub_605E9904((StateMethodExecuter *)dword_60CB1BE4);
      if ( FIELD_U8(dword_60CC6D78, 109032) )
      {
        v12 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
        if ( ((unsigned int)&dword_60C965B4 & ~(1618449000 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
        {
          dword_60C965B0 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C965B4);
        }
        if ( v12 )
        {
          if ( (**v12)(v12, &dword_60C965B0) == 1 )
            sub_6039E530((int)v12);
        }
      }
    }
  }
}
