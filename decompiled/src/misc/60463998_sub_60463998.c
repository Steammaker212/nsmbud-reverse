/* sub_60463998
 * address: 0x60463998   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4)
{
  char v4; // r12
  int v7; // r5
  unsigned int v10; // r0
  int *v11; // r4
  int v12; // r7
  int v13; // r0
  char v14; // r12
  bool v15; // zf
  int v17; // r10
  char v18; // r12
  int ProfileId; // r0

  v7 = 0;
  *a2 = 0;
  v11 = &a1[77].field_30;
  v10 = a1[77].field_30;
  if ( v10 != -1 )
  {
    if ( v10 >= 4 )
      v10 = 0;
    v12 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1615215092 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v12 || !(**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B378) )
      goto LABEL_12;
    v13 = sub_60766708(v12);
    v15 = v13 == 0;
    if ( !v13 )
      v15 = (FIELD_U8(v12, 1219) & 8) == 0;
    if ( !v15 )
      goto LABEL_12;
    v7 = 1;
    if ( a4 == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1615215264 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v17 = (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B370);
      if ( v17 )
        v17 = v12;
      if ( sub_607A2820(v17, a3) == 1 )
      {
LABEL_12:
        *v11 = -1;
        return 0;
      }
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v17 + 1376))(v17, a3) == 1 )
      {
        if ( sub_607A27A8(v17, a3) == 1 )
        {
          *a2 = 1;
          return 1;
        }
      }
      else
      {
        *a2 = 2;
        if ( ((unsigned int)&dword_60C9D3D4 & ~(1615215468 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
        {
          dword_60C9D3D0 = (int)&off_60BFB878;
          _cxa_guard_release(&dword_60C9D3D4);
        }
        if ( (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60C9D3D0) == 1 )
        {
          ProfileId = Actor__getProfileId(a1);
          sub_607C9370(v17, ProfileId);
        }
      }
    }
  }
  return v7;
}
