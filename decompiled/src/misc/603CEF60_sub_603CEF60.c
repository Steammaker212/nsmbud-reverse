/* sub_603CEF60
 * address: 0x603CEF60   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CEF60(int a1, int a2)
{
  char v2; // r12
  _BOOL4 result; // r0
  unsigned int v6; // r1
  int Area; // r0
  float v8; // [sp+0h] [bp-20h] BYREF
  float v9; // [sp+4h] [bp-1Ch]
  float v10; // [sp+8h] [bp-18h]
  float v11; // [sp+Ch] [bp-14h]

  if ( ((unsigned int)&dword_60C7B37C & ~(1614606208 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !a2
    || (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) != 1
    || (result = 0, (FIELD_U8(a2, 1219) & 8) == 0) )
  {
    v6 = FIELD_U8(LevelInfo_instance, 18);
    v8 = 3.4028e38;
    v9 = 3.4028e38;
    v10 = -3.4028e38;
    v11 = -3.4028e38;
    Area = Level_getArea(Level_instance, v6);
    LevelArea_getLocation(Area, &v8, BYTE1(FIELD_U32(a1, 20)));
    return FIELD_F32(a2, 112) <= v11
        && v8 <= FIELD_F32(a2, 108)
        && FIELD_F32(a2, 108) <= v10
        && v9 <= FIELD_F32(a2, 112);
  }
  return result;
}
