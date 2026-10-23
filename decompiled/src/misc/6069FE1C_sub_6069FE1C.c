/* sub_6069FE1C
 * address: 0x6069FE1C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6069FE1C(int a1, int a2, int a3)
{
  int v4; // r4
  char v5; // r12
  char v6; // r12
  int v7; // r5
  float v8; // s16
  float v9; // s4
  float v10; // s2
  float v11; // s4
  unsigned int v12; // r0
  int v13; // r0
  float v14; // [sp+8h] [bp-28h] BYREF
  float v15; // [sp+Ch] [bp-24h]
  int v16; // [sp+10h] [bp-20h]

  if ( !a3 )
  {
    v4 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a2 + 32))(a2, a1, 0);
    if ( (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1617559156 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 && sub_60769D94(v4, 3) == 1 )
      {
        v7 = FIELD_U32(a1, 144);
        if ( ((unsigned int)&dword_60CB9878 & ~(1617559296 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9878) )
        {
          dword_60CB9874 = (int)&off_60C0BD4C;
          _cxa_guard_release(&dword_60CB9878);
        }
        if ( v7 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB9874) == 1 )
          {
            v8 = FIELD_F32(v7, 112);
            sub_6076A170(v4, &v14);
            v9 = FIELD_F32(v4, 112);
            v10 = v9 + v15;
            if ( (float)(v9 + v15) <= (float)(v8 + 16.0) )
            {
              v11 = v9 + v14;
              if ( v11 >= (float)(v8 + -16.0) && v11 <= v8 && v10 >= (float)(v8 + -16.0) )
              {
                v12 = FIELD_U8(v4, 84);
                FIELD_U8(v7, 6845) = v12;
                if ( v12 <= 3 )
                {
                  v16 = FIELD_U32(v7, 6824);
                  v15 = FIELD_F32(v7, 6820);
                  v14 = FIELD_F32(v7, 6816);
                  v14 = v14 + 16.0;
                  v13 = *(_DWORD *)(PlayerMgr_instance + 4 * (char)v12 + 32);
                  if ( v13 )
                    sub_6076A68C(v13, v7 + 6144, &v14, FIELD_U8(v7, 6844), 2);
                }
              }
            }
          }
        }
      }
    }
  }
}
