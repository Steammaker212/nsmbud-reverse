/* lemmy_bomb_ref
 * address: 0x600E4F14   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lemmy_bomb_ref(int a1, int a2)
{
  int v4; // r7
  int v5; // r4
  int ProfileId; // r5
  char v7; // r12
  int v8; // r0
  bool v9; // zf
  _BYTE *v10; // r9
  _DWORD *v11; // r7
  int v12; // t1
  _DWORD *v13; // r8
  int ResArchiveById; // r0
  int result; // r0
  _DWORD v16[10]; // [sp+0h] [bp-28h] BYREF

  sub_600E2D20(a1, a2);
  v4 = FIELD_U32(a1, 144);
  v5 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  ProfileId = Actor__getProfileId((Actor *)v5);
  v8 = FIELD_U8(v5, 533);
  v9 = v8 == 1;
  if ( v8 != 1 )
    v9 = ProfileId == 476;
  if ( v9 )
  {
    v10 = (_BYTE *)(v4 + 6572);
    if ( !FIELD_U8(v4, 6572) )
    {
      v12 = FIELD_U32(v4, 6100);
      v11 = (_DWORD *)(v4 + 6100);
      v13 = **(_DWORD ***)(v12 + 28);
      ResArchiveById = Profile__getResArchiveById((Profile *)*(v11 - 1522), 0);
      v16[0] = &sead__SafeStringBase__vtable;
      v16[1] = "lemmy_bomb";
      ShuAnim_play(v13, ResArchiveById, (int)v16);
      *(_DWORD *)(**(_DWORD **)(*v11 + 28) + 24) = 1056964608;
      v11[117] = 82;
      *v10 = 1;
    }
  }
  if ( ProfileId == 476 )
  {
    if ( ((unsigned int)&dword_60C823BC & ~(1611550732 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
    {
      dword_60C823B8 = (int)&off_60BC7C24;
      _cxa_guard_release(&dword_60C823BC);
    }
    if ( !(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C823B8) )
      v5 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 240))(v5);
    return sub_601362A0(v5);
  }
  else
  {
    result = 474;
    if ( ProfileId == 474 )
    {
      if ( ((unsigned int)&dword_60C823CC & ~(1611550892 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
      {
        dword_60C823C8 = (int)&off_60BC7C30;
        _cxa_guard_release(&dword_60C823CC);
      }
      if ( v5 )
      {
        if ( !(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C823C8) )
          v5 = 0;
      }
      else
      {
        v5 = 0;
      }
      return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v5);
    }
  }
  return result;
}
