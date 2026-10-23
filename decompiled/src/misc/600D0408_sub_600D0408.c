/* sub_600D0408
 * address: 0x600D0408   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0408(int a1)
{
  int v3; // r1

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 888))(a1);
    return 1;
  }
  else
  {
    FIELD_U8(a1, 6958) = 1;
    StateMgr__execute((StateMgr *)(a1 + 6084));
    ActorScaler_execute((ActorScaler *)(a1 + 7316));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 684))(a1);
    v3 = FIELD_U32(a1, 6788);
    if ( v3 >= 1 )
      FIELD_U32(a1, 6788) = v3 - 1;
    FIELD_U8(a1, 6980) = 0;
    return 1;
  }
}
