/* sub_6023E2A0
 * address: 0x6023E2A0   size: 1708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023E2A0(int a1, float a2)
{
  char v2; // r12
  int v4; // r10
  int v5; // r6
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r5
  char v10; // r12
  int v11; // r4
  int v12; // r6
  int v13; // r4
  int v14; // r4
  int v15; // r4
  int v16; // [sp+0h] [bp-68h]
  int v18; // [sp+30h] [bp-38h]

  if ( FIELD_U8(a1, 12103) )
  {
    v4 = 12720;
    v5 = 0;
    v16 = a1 + 12748;
    v18 = a1 + 12732;
    do
    {
      v6 = *(_DWORD **)(PlayerMgr_instance + 4 * v5 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1612964852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v6 )
      {
        v7 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v6)(v6, &dword_60C7B378);
        if ( v7 )
          v7 = v6;
      }
      else
      {
        v7 = 0;
      }
      if ( ((unsigned int)&dword_60C7B374 & ~(1612964948 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !v7 || (*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C7B370) != 1 )
        goto LABEL_31;
      v8 = *(_DWORD *)(v18 + 4 * v5);
      switch ( v8 )
      {
        case 2:
          sub_607A812C(v7);
          *(_WORD *)(a1 + v4) = 61;
          *(_DWORD *)(v18 + 4 * v5) = 3;
          break;
        case 1:
          if ( a2 >= 42.0 && a2 <= 44.0 )
          {
            sub_607A8098(v7);
            *(_DWORD *)(v18 + 4 * v5) = 2;
          }
          v7[22] = 0;
          v7[30] = 0;
          v7[31] = 0;
          v7[32] = 0;
          goto LABEL_28;
        case 0:
          if ( a2 >= 18.0
            && a2 <= 40.0
            && *(unsigned __int8 *)(v16 + v5 - 20) != 255
            && *(_BYTE *)(v16 + v5)
            && !(*(int (__fastcall **)(_DWORD *))(*v7 + 1204))(v7)
            && (*(int (__fastcall **)(_DWORD *, int, int))(*v7 + 1168))(v7, a1, 17) == 1 )
          {
            *(_DWORD *)(v18 + 4 * v5) = 1;
            *(_BYTE *)(v16 + v5 - 20) = -1;
            *(_BYTE *)(v16 + v5) = 0;
          }
LABEL_28:
          if ( *(_DWORD *)(v18 + 4 * v5) == 1 )
            sub_6023E194((float *)a1, (int)v7);
          break;
      }
LABEL_31:
      ++v5;
      v4 += 2;
    }
    while ( v5 != 4 );
  }
  if ( a2 >= 42.0 && a2 <= 44.0 )
    FIELD_U32(a1, 116) = 1153138688;
  if ( a2 >= 64.0 )
  {
    v9 = FIELD_U32(a1, 12732) != 0;
    if ( FIELD_U32(a1, 12736) )
      ++v9;
    if ( FIELD_U32(a1, 12740) )
      ++v9;
    if ( FIELD_U32(a1, 12744) )
      ++v9;
    if ( !v9 )
      goto LABEL_70;
    if ( sub_6078A030(PlayerMgr_instance) < 2 )
      goto LABEL_69;
    sub_6078A030(PlayerMgr_instance);
    v11 = FIELD_U32(PlayerMgr_instance, 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1612965564 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v12 = 0;
    if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C7B378) == 1 )
      v12 = ((FIELD_U32(v11, 1216) >> 27) & 1) == 0;
    v13 = FIELD_U32(PlayerMgr_instance, 52);
    if ( ((unsigned int)&dword_60C7B37C & ~(1612965712 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) == 1 )
      v12 += ((FIELD_U32(v13, 1216) >> 27) & 1) == 0;
    v14 = FIELD_U32(PlayerMgr_instance, 56);
    if ( ((unsigned int)&dword_60C7B37C & ~(1612965860 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C7B378) == 1 )
      v12 += ((FIELD_U32(v14, 1216) >> 27) & 1) == 0;
    v15 = FIELD_U32(PlayerMgr_instance, 60);
    if ( ((unsigned int)&dword_60C7B37C & ~(1612966008 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v15 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C7B378) == 1 )
        v12 += ((FIELD_U32(v15, 1216) >> 27) & 1) == 0;
    }
    if ( v9 == v12 )
    {
LABEL_69:
      FIELD_U32(a1, 12096) = FIELD_U32(a1, 80);
      FIELD_U32(a1, 12064) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DA18);
    }
    else
    {
LABEL_70:
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8DA98);
    }
  }
}
