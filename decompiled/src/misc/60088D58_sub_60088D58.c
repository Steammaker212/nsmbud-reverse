/* sub_60088D58
 * address: 0x60088D58   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60088D58(_BYTE *a1)
{
  unsigned int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  void *v5; // r1
  char v6; // r12
  int v7; // r4
  unsigned int v8; // r0
  int v9; // r0
  Actor **v10; // r5
  Actor **v11; // r4
  Actor *v12; // r7
  Actor *v13; // r0
  _BYTE **v14; // r5
  _BYTE **i; // r4
  _BYTE *v16; // r7

  v3 = a1 + 7692;
  v2 = *((_DWORD *)a1 + 1923);
  if ( v2 <= 3 )
  {
    v4 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v4 )
      Player_ReleaseCarryableEnemy(v4, (int)a1);
  }
  *v3 = -1;
  if ( a1[6220] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 216))(a1);
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 220))(a1);
    sub_602F3750(a1 + 6152);
  }
  if ( a1[7248] )
  {
    a1[7248] = 0;
    (*(void (__fastcall **)(_BYTE *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81DEC);
  }
  else if ( (a1[7616] & 2) != 0 )
  {
    (*(void (__fastcall **)(_BYTE *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81E4C);
  }
  else
  {
    CollisionMgr_process(a1 + 648);
    if ( (a1[2872] & 1) != 0 )
      v5 = &unk_60C81E6C;
    else
      v5 = &unk_60C81DEC;
    (*(void (__fastcall **)(_BYTE *, void *))(*(_DWORD *)a1 + 192))(a1, v5);
  }
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1);
  v7 = *((_DWORD *)a1 + 1811);
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611173540 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81100) == 1 )
    {
      v8 = FIELD_U32(v7, 15240);
      if ( v8 <= 3 )
      {
        v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32);
        if ( v9 )
          (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v9 + 748))(v9, 1, 0, 0, 0.0, 0.0);
      }
      sub_60090990(v7);
    }
  }
  v10 = *(Actor ***)(ActorMgr__instance + 27172);
  v11 = *(Actor ***)(ActorMgr__instance + 27180);
  if ( v10 != v11 )
  {
    do
    {
      v12 = *v10;
      if ( ((unsigned int)&dword_60C7B36C & ~(1611173836 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      if ( v12
        && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v12, 0x0))(v12, &Actor_RTTI) == 1
        && Actor__getProfileId(v12) == 728 )
      {
        v13 = *v10;
        FIELD_U8(v13, 0x13) = 1;
        (*(void (__fastcall **)(Actor *))(FIELD_U32(v13, 0x0) + 104))(v13);
      }
      ++v10;
    }
    while ( v11 != v10 );
    v14 = *(_BYTE ***)(ActorMgr__instance + 27172);
    for ( i = *(_BYTE ***)(ActorMgr__instance + 27180); i != v14; ++v14 )
    {
      v16 = *v14;
      if ( ((unsigned int)&dword_60C81F10 & ~(1611174068 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81F10) )
      {
        dword_60C81F0C = (int)&off_60BC763C;
        _cxa_guard_release(&dword_60C81F10);
      }
      if ( v16 )
      {
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v16)(v16, &dword_60C81F0C) == 1 )
        {
          v16[19] = 1;
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v16 + 104))(v16);
        }
      }
    }
  }
}
