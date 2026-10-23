/* sub_607BFE30
 * address: 0x607BFE30   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BFE30(int a1)
{
  int v3; // r0
  float v4; // r6
  int v5; // r0
  int v6; // r2

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) || FIELD_U32(a1, 12840) )
    return 0;
  v3 = FIELD_U32(a1, 1224);
  if ( (v3 & 0x80) == 0 )
  {
LABEL_9:
    if ( (v3 & 0x1000) == 0 )
      return 0;
    if ( sub_60786744(a1 + 688) != 1 )
      return 0;
    v4 = FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v4 - sub_6079B2CC((_DWORD *)a1);
    v5 = sub_60154550(a1 + 1328);
    FIELD_F32(a1, 112) = v4;
    if ( v5 != 1 || (FIELD_U32(a1, 6784) & 0xFF0000) != 0x20000 )
      return 0;
    v6 = 2;
    goto LABEL_15;
  }
  if ( !sub_60154550(a1 + 1328) )
  {
    v3 = FIELD_U32(a1, 1224);
    goto LABEL_9;
  }
  if ( (FIELD_U32(a1, 6784) & 0xFF0000) == 0x20000 )
  {
    Player_changeState(a1, (StateBase *)&dword_60CC502C, 1);
    return 1;
  }
  v6 = 0;
LABEL_15:
  Player_changeState(a1, (StateBase *)&dword_60CC502C, v6);
  return 1;
}
