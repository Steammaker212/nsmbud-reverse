/* lemmy_bomb_ref_E53BC
 * address: 0x600E53BC   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lemmy_bomb_ref_E53BC(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r4
  int ProfileId; // r5
  char v9; // r12
  int v10; // r0
  bool v11; // zf
  _BYTE *v12; // r9
  _DWORD *v13; // r7
  int v14; // t1
  _DWORD *v15; // r8
  int ResArchiveById; // r0
  int result; // r0
  _DWORD v18[10]; // [sp+0h] [bp-28h] BYREF

  ((void (*)(void))loc_600E310C)();
  v6 = FIELD_U32(a1, 144);
  v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, a3);
  ProfileId = Actor__getProfileId((Actor *)v7);
  v10 = FIELD_U8(v7, 533);
  v11 = v10 == 1;
  if ( v10 != 1 )
    v11 = ProfileId == 476;
  if ( v11 )
  {
    v12 = (_BYTE *)(v6 + 6572);
    if ( !FIELD_U8(v6, 6572) )
    {
      v14 = FIELD_U32(v6, 6100);
      v13 = (_DWORD *)(v6 + 6100);
      v15 = **(_DWORD ***)(v14 + 28);
      ResArchiveById = Profile__getResArchiveById((Profile *)*(v13 - 1522), 0);
      v18[0] = &sead__SafeStringBase__vtable;
      v18[1] = "lemmy_bomb";
      ShuAnim_play(v15, ResArchiveById, (int)v18);
      *(_DWORD *)(**(_DWORD **)(*v13 + 28) + 24) = 1056964608;
      v13[117] = 82;
      *v12 = 1;
    }
  }
  if ( ProfileId == 476 )
  {
    if ( ((unsigned int)&dword_60C823BC & ~(1611551928 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
    {
      dword_60C823B8 = (int)&off_60BC7C24;
      _cxa_guard_release(&dword_60C823BC);
    }
    if ( !(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C823B8) )
      v7 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 240))(v7);
    return sub_601362A0(v7);
  }
  else
  {
    result = 474;
    if ( ProfileId == 474 )
    {
      if ( ((unsigned int)&dword_60C823CC & ~(1611552088 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
      {
        dword_60C823C8 = (int)&off_60BC7C30;
        _cxa_guard_release(&dword_60C823CC);
      }
      if ( v7 )
      {
        if ( !(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C823C8) )
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v7);
    }
  }
  return result;
}
