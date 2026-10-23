/* sub_603E827C
 * address: 0x603E827C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603E827C(_DWORD *a1)
{
  char v1; // r12
  int *v2; // r6
  int *i; // r5
  int v4; // r0
  bool v5; // zf
  int ProfileId; // r0
  bool v7; // zf
  int v8; // r4
  int v9; // r0
  bool v10; // zf

  v2 = *(int **)(ActorMgr__instance + 27180);
  for ( i = *(int **)(ActorMgr__instance + 27172); v2 != i; ++i )
  {
    v8 = *i;
    if ( ((unsigned int)&dword_60C7B364 & ~(1614709620 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v8 )
    {
      v9 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
      v10 = v9 == 1;
      if ( v9 == 1 )
        v10 = FIELD_U8(v8, 19) == 0;
      if ( v10 && a1[31] != v8 && a1[29] != v8 && a1[30] != v8 )
      {
        v4 = FIELD_U8(v8, 533);
        v5 = v4 == 4;
        if ( v4 != 4 )
          v5 = v4 == 1;
        if ( !v5 )
        {
          if ( FIELD_U8(v8, 533) )
            goto LABEL_13;
          ProfileId = Actor__getProfileId((Actor *)v8);
          v7 = ProfileId == 392;
          if ( ProfileId != 392 )
            v7 = (FIELD_U8(v8, 569) & 8) == 0;
          if ( !v7 )
LABEL_13:
            FIELD_U8(v8, 19) = 1;
        }
      }
    }
  }
}
