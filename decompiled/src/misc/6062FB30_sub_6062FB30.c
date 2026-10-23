/* sub_6062FB30
 * address: 0x6062FB30   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6062FB30(int a1, float a2)
{
  int *v3; // r4
  int Area; // r0
  _BOOL4 result; // r0
  int v6; // r4
  char v7; // r12
  float v8[2]; // [sp+0h] [bp-20h] BYREF
  float v9; // [sp+8h] [bp-18h]
  int v10; // [sp+Ch] [bp-14h]

  v3 = (int *)(a1 + 6100);
  if ( !FIELD_U32(a1, 6100) )
    goto LABEL_5;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v8[0] = 3.4028e38;
  v8[1] = 3.4028e38;
  v9 = -3.4028e38;
  v10 = -8388609;
  LevelArea_getLocation(Area, v8, *v3);
  if ( a2 < (float)(v8[0] + 16.0) )
    return 0;
  result = 0;
  if ( a2 <= (float)(v9 + -16.0) )
  {
LABEL_5:
    v6 = sub_6000B17C();
    result = 1;
    if ( v6 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617099772 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      return (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) != 1
          || a2 <= (float)(FIELD_F32(v6, 108) + -32.0);
    }
  }
  return result;
}
