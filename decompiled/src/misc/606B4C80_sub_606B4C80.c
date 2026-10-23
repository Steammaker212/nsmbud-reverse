/* sub_606B4C80
 * address: 0x606B4C80   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B4C80(int a1)
{
  unsigned int v2; // r1
  int Area; // r0
  char v4; // r12
  int *v5; // r5
  int v6; // r7
  int v7; // r0
  bool v8; // zf
  float v9; // s10
  int result; // r0
  float v11; // [sp+Ch] [bp-34h] BYREF
  float v12; // [sp+10h] [bp-30h]
  float v13; // [sp+14h] [bp-2Ch]
  float v14; // [sp+18h] [bp-28h]

  v2 = FIELD_U8(LevelInfo_instance, 18);
  v11 = 3.4028e38;
  v12 = 3.4028e38;
  v13 = -3.4028e38;
  v14 = -3.4028e38;
  Area = Level_getArea(Level_instance, v2);
  LevelArea_getLocation(Area, &v11, FIELD_U8(a1, 27));
  v5 = *(int **)(ActorMgr__instance + 27172);
  if ( v5 == *(int **)(ActorMgr__instance + 27180) )
    return 1;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 && !FIELD_U8(v6, 19) )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617644908 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI);
      v8 = v7 == 1;
      if ( v7 == 1 )
        v8 = FIELD_U8(v6, 533) == 3;
      if ( v8 && Actor__getProfileId((Actor *)v6) != 441 && (FIELD_U8(v6, 542) & 0xA) == 0 )
      {
        v9 = FIELD_F32(v6, 112);
        result = 0;
        if ( v9 <= v14 && v11 <= FIELD_F32(v6, 108) && FIELD_F32(v6, 108) <= v13 && v12 <= v9 )
          break;
      }
    }
    if ( ++v5 == *(int **)(ActorMgr__instance + 27180) )
      return 1;
  }
  return result;
}
