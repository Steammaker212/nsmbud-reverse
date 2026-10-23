/* SE_PLY_CRASH_S_ref
 * address: 0x607307A8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CRASH_S_ref(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r4
  int v7; // r6
  char v8; // r12
  int v9; // r7
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r0
  _DWORD v14[2]; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v15[3]; // [sp+Ch] [bp-24h] BYREF

  v5 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CBDBDC & ~(1618151372 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
  {
    dword_60CBDBD8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBDBDC);
  }
  v7 = 0;
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CBDBD8) == 1 )
    {
      v9 = FIELD_U32(a3, 64);
      if ( FIELD_U8(v9, 533) == 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1618151508 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        v7 = 1;
        if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B378) == 1 )
        {
          v10 = FIELD_U8(v9, 84);
          v11 = 0;
          if ( v10 < 4 )
            v11 = (char)v10;
          if ( !*(_WORD *)(a1 + 2 * v11 + 6140) )
          {
            v7 = 1;
            (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v9 + 748))(
              v9,
              1,
              0,
              0,
              4.0 + 0.2815,
              FIELD_F32(v9, 88));
            ((void (__fastcall *)(int, int, _DWORD))loc_60814A1C)(a1 + 6344, 52, 0);
            sub_60814010(a1 + 6344, "SE_PLY_CRASH_S", 0);
            v12 = FIELD_U32(a1, 6300);
            v14[0] = &sead__SafeStringBase__vtable;
            v14[1] = "face_1";
            sub_60793F04(FIELD_U32(v12, 4), v15, v14);
            sub_60236E40(0xFFFFFFFF, 376, v15, 0, 0);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60CBDB60);
          }
        }
      }
    }
  }
  return v7;
}
