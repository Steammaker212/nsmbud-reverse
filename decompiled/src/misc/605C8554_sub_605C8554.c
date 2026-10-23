/* sub_605C8554
 * address: 0x605C8554   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605C8554(int a1, int a2)
{
  int v3; // r4
  char v4; // r12
  char v5; // r12
  unsigned __int8 v6; // r0
  unsigned __int8 v7; // r6
  int v8; // r5
  float v9; // s0
  float v10; // s2
  int v11; // r2
  float v12[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( FIELD_U8(v3, 533) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1616676248 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
      {
        v6 = FIELD_U8(v3, 84);
        v7 = v6;
        if ( v6 <= 4u && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v6)) != 0 )
        {
          v8 = FIELD_U32(a1, 144);
          if ( ((unsigned int)&dword_60CB0C74 & ~(1616676420 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0C74) )
          {
            dword_60CB0C70 = (int)&off_60C0A4E8;
            _cxa_guard_release(&dword_60CB0C74);
          }
          if ( v8
            && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60CB0C70) == 1
            && sub_60786744(v3 + 688) == 1
            && ((int (__fastcall *)(int, int))loc_605C7768)(v8, v3) == 1 )
          {
            v9 = FIELD_F32(v8, 112) + FIELD_F32(v8, 648);
            v10 = FIELD_F32(v8, 116) + FIELD_F32(v8, 652);
            v12[0] = FIELD_F32(v8, 108) + FIELD_F32(v8, 644);
            v12[1] = v9;
            v12[2] = v10;
            v11 = FIELD_U8(v8, 2932);
            if ( FIELD_U8(v8, 2932) )
              v11 = 1;
            if ( sub_607A5470(v3, v12, v11) == 1 && FIELD_U8(v8, 2940) == 255 )
              FIELD_U8(v8, 2940) = v7;
          }
        }
      }
    }
  }
}
