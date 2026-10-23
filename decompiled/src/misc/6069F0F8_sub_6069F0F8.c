/* sub_6069F0F8
 * address: 0x6069F0F8   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6069F0F8(int a1, int a2)
{
  int v3; // r4
  char v4; // r12
  char v5; // r12
  int v6; // r5
  int v7; // r0
  int v8; // r0
  float v9; // s16
  float v10; // s20
  float v11; // s22
  float v12; // s18
  int v13; // r0
  float v14; // s0
  unsigned int v15; // r0
  int v16; // r2
  int v17; // r3
  int v18; // r0
  _DWORD v19[4]; // [sp+8h] [bp-50h] BYREF
  _DWORD v20[16]; // [sp+18h] [bp-40h] BYREF

  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617555784 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 && sub_60769D94(v3, 0) == 1 )
    {
      v6 = FIELD_U32(a1, 144);
      if ( ((unsigned int)&dword_60CB9810 & ~(1617555924 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9810) )
      {
        dword_60CB980C = (int)&off_60C0BD4C;
        _cxa_guard_release(&dword_60CB9810);
      }
      if ( v6 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60CB980C) == 1 )
        {
          v19[0] = FIELD_U32(v6, 6816);
          v7 = FIELD_U32(v6, 6820);
          v19[2] = FIELD_U32(v6, 6824);
          v19[1] = v7;
          if ( ((int (__fastcall *)(int, _DWORD *, _DWORD))loc_6076A024)(v3, v19, 0) != 2 )
          {
            v8 = sub_6075F914(v3);
            v9 = FIELD_F32(v6, 108);
            if ( v8 )
            {
              v10 = FIELD_F32(v3, 108);
              v11 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 172))(v3) + 12);
              v12 = FIELD_F32(v3, 108);
              v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 172))(v3);
              if ( (float)(v9 + -16.0) > (float)(v10 + v11) || (float)(v12 + FIELD_F32(v13, 16)) > (float)(v9 + 16.0) )
                return;
            }
            else
            {
              v14 = FIELD_F32(v3, 108);
              if ( (float)(v14 + 2.0) > (float)(v9 + 14.0) || (float)(v14 + -2.0) < (float)(v9 + -14.0) )
                return;
            }
            v15 = FIELD_U8(v3, 84);
            FIELD_U8(v6, 6845) = v15;
            if ( v15 <= 3 )
            {
              v16 = FIELD_U32(v6, 6820);
              v17 = FIELD_U32(v6, 6824);
              v20[0] = FIELD_U32(v6, 6816);
              v20[1] = v16;
              v20[2] = v17;
              v18 = *(_DWORD *)(PlayerMgr_instance + 4 * (char)v15 + 32);
              if ( v18 )
                sub_6076A68C(v18, v6 + 6144, v20, FIELD_U8(v6, 6844), 1);
            }
          }
        }
      }
    }
  }
}
