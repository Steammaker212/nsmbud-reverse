/* sub_606E21C4
 * address: 0x606E21C4   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606E21C4(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  int v6; // r2
  _DWORD *v7; // r7
  int v8; // r5
  char v9; // r12
  int v10; // r0
  unsigned int v11; // r6
  bool v12; // r10
  bool v13; // zf
  int v14; // r0
  int v15; // r9
  int v16; // r0

  v5 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60C83FB4 & ~(1617830376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
  {
    dword_60C83FB0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C83FB4);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C83FB0) == 1 )
  {
    v6 = 3;
    v7 = (_DWORD *)(v5 + 6908);
    if ( FIELD_U32(v5, 6908) == 1 )
      v6 = 2;
    v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, v6);
    v10 = FIELD_U8(v8, 533);
    if ( (unsigned int)(v10 - 1) >= 2 )
    {
      if ( !FIELD_U8(v8, 533) && FIELD_U8(dword_60CC6D8C, 17) )
      {
        v13 = FIELD_U8(v5, 6919) == 0;
        if ( FIELD_U8(v5, 6919) )
          v13 = *v7 == 1;
        if ( !v13
          && (Actor__getProfileId((Actor *)v8) == 325
           || Actor__getProfileId((Actor *)v8) == 326
           || Actor__getProfileId((Actor *)v8) == 327) )
        {
          FIELD_U8(v5, 6958) = 0;
          FIELD_U8(v5, 6959) = 2;
          FIELD_U8(v5, 6944) = 1;
          FIELD_U8(v5, 6920) = 1;
          ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v5 + 6176));
        }
      }
    }
    else
    {
      v11 = FIELD_U8(v8, 84);
      v12 = v10 == 2;
      if ( v11 == 255 )
        v11 = 0;
      if ( *v7 == 1 )
      {
        if ( !sub_606E2CAC(v8) )
          return;
        goto LABEL_42;
      }
      if ( v10 == 2 )
        goto LABEL_42;
      v14 = (char)v11;
      if ( v11 >= 4 )
        v14 = 0;
      v15 = *(_DWORD *)(PlayerMgr_instance + 4 * v14 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617830872 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v15 || (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C7B378) != 1 )
      {
LABEL_42:
        FIELD_U8(v5, 6958) = v11;
        v16 = v5;
        if ( v11 < 4 )
          v16 = v5 + (char)v11;
        FIELD_U8(v16, 6959) = v12;
        FIELD_U8(v5, 6944) = 1;
        if ( *v7 == 1 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617831264 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( v8 )
          {
            if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1 )
              (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float, _DWORD))(*(_DWORD *)v8 + 752))(
                v8,
                1,
                0,
                0,
                -1.0,
                FIELD_F32(v8, 88),
                0);
          }
        }
        return;
      }
      if ( FIELD_U32(v15, 1320) != 3 )
        goto LABEL_38;
      if ( ((unsigned int)&dword_60C7B374 & ~(1617831000 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C7B370) != 1
        || sub_6079D894(v15)
        || (FIELD_U8(v15, 1210) & 1) != 0 )
      {
LABEL_38:
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 240))(v5) == 1 )
        {
          if ( sub_60769B8C(v15) != 1 )
            return;
          if ( !FIELD_U8(v5, 6944) )
            sub_6077A004(dword_60CBFA90, (char)v11);
        }
        goto LABEL_42;
      }
    }
  }
}
