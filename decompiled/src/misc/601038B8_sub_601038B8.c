/* sub_601038B8
 * address: 0x601038B8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601038B8(int a1)
{
  int v1; // r4
  int v2; // r1
  StateMgr *v3; // r5
  int *v4; // r1

  v1 = 2;
  v2 = EnemyCounterMaybe_instance;
  if ( !FIELD_U32(EnemyCounterMaybe_instance, 24) )
  {
    v1 = 1;
    FIELD_U8(dword_60CC6D78, 510) = 1;
    FIELD_U32(v2, 24) = a1;
    v3 = (StateMgr *)(a1 + 6084);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
    if ( (FIELD_U8(dword_60C99DD4, 848) & 1) != 0 )
      v4 = &dword_60C860B0;
    else
      v4 = &dword_60C7F67C;
    StateMgr__changeState(v3, (StateBase *)v4);
  }
  return v1;
}
