/* sub_606A1774
 * address: 0x606A1774   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606A1774(int a1, int a2)
{
  int v3; // r4
  char v4; // r12
  char v5; // r12
  int v6; // r5
  int v7; // r0
  float v8; // s0
  float v9; // s2
  unsigned int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r0
  _DWORD v14[4]; // [sp+8h] [bp-30h] BYREF
  _DWORD v15[8]; // [sp+18h] [bp-20h] BYREF

  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617565632 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 && sub_60769D94(v3, 1) == 1 )
    {
      v6 = FIELD_U32(a1, 144);
      if ( ((unsigned int)&dword_60CB9948 & ~(1617565772 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9948) )
      {
        dword_60CB9944 = (int)&off_60C0BD4C;
        _cxa_guard_release(&dword_60CB9948);
      }
      if ( v6 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60CB9944) == 1 )
        {
          v14[0] = FIELD_U32(v6, 6816);
          v7 = FIELD_U32(v6, 6820);
          v14[2] = FIELD_U32(v6, 6824);
          v14[1] = v7;
          if ( ((int (__fastcall *)(int, _DWORD *, int))loc_6076A024)(v3, v14, 1) != 2 )
          {
            v8 = FIELD_F32(v3, 108);
            v9 = FIELD_F32(v6, 108);
            if ( (float)(v8 + 2.0) <= (float)(v9 + 14.0) && (float)(v8 + -2.0) >= (float)(v9 + -14.0) )
            {
              v10 = FIELD_U8(v3, 84);
              FIELD_U8(v6, 6845) = v10;
              if ( v10 <= 3 )
              {
                v11 = FIELD_U32(v6, 6820);
                v12 = FIELD_U32(v6, 6824);
                v15[0] = FIELD_U32(v6, 6816);
                v15[1] = v11;
                v15[2] = v12;
                v13 = *(_DWORD *)(PlayerMgr_instance + 4 * (char)v10 + 32);
                if ( v13 )
                  sub_6076A68C(v13, v6 + 6144, v15, FIELD_U8(v6, 6844), 0);
              }
            }
          }
        }
      }
    }
  }
}
