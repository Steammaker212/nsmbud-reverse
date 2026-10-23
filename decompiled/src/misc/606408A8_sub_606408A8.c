/* sub_606408A8
 * address: 0x606408A8   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606408A8(int a1, int a2)
{
  int v2; // r4
  int v3; // r10
  int v4; // r0
  char v5; // r12
  int v6; // r6
  int v7; // r5
  int v8; // r8
  char v9; // r12
  int v10; // r7
  int v11; // r0
  int v12; // r9
  int v13; // r5
  int v14; // r0
  int v15; // r4

  v2 = a2 + 5344;
  v3 = FIELD_U32(a1, 144);
  v4 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v6 = v4;
  v7 = FIELD_S8(v4, 84);
  if ( (unsigned __int8)v7 != 255 && (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
  {
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 4);
    if ( ((unsigned int)&dword_60CB5874 & ~(1617168660 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5874) )
    {
      dword_60CB5870 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB5874);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB5870) == 1 )
    {
      v10 = 0;
      v11 = 0;
      if ( (unsigned __int8)v7 < 4u )
        v10 = v7;
      v12 = v3 + 4 * v10;
      if ( FIELD_U8(v6, 533) == 2 )
        v11 = 1;
      FIELD_U32(v12, 7000) = v11;
      if ( !FIELD_U8(dword_60CC6D8C, 17) )
        goto LABEL_26;
      if ( FIELD_U8(v6, 533) == 2 )
      {
        v13 = sub_607891A0(PlayerMgr_instance, v7);
        if ( ((unsigned int)&dword_60C7B37C & ~(1617168876 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !v13 || !(**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) )
        {
LABEL_26:
          if ( (FIELD_U8(v3, 25) & 3) == 0 || (FIELD_U8(v3, 20) & 0x10) != 0 )
          {
            FIELD_U32(v12, 6952) = 0;
          }
          else
          {
            v14 = v8 + 4 * FIELD_U32(v3, 80);
            FIELD_U32(v12, 6952) = dword_60AF4D70[v14];
            if ( ((0xC9u >> v14) & 1) == 0 )
            {
              v15 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 48);
              if ( ((unsigned int)&dword_60C7B37C & ~(1617169224 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
              {
                dword_60C7B378 = (int)&off_60BC00BC;
                _cxa_guard_release(&dword_60C7B37C);
              }
              if ( v15 )
              {
                if ( (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C7B378) == 1 )
                  FIELD_U32(v15, 1220) |= 0x80000u;
              }
            }
          }
          return;
        }
      }
      else
      {
        v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 48);
        if ( ((unsigned int)&dword_60C7B37C & ~(1617169004 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !v13 || (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) != 1 )
          goto LABEL_26;
      }
      if ( (FIELD_U8(v13, 1219) & 1) != 0 )
        return;
      goto LABEL_26;
    }
  }
}
