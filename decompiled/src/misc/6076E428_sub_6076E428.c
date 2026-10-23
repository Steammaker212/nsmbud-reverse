/* sub_6076E428
 * address: 0x6076E428   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E428(int a1)
{
  int v2; // r5
  StateBase *v3; // r1

  FIELD_U32(a1, 1224) |= 0x10000000u;
  if ( !FIELD_U8(a1, 11352) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1352))(a1);
  v2 = FIELD_U32(a1, 1212);
  Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
  sub_603FBAB8(dword_60C99DD4);
  sub_6078A9F8(PlayerMgr_instance);
  if ( (v2 & 0x200000) != 0 )
  {
    FIELD_U32(a1, 1216) |= 0x200u;
    FIELD_U32(a1, 1228) |= 1u;
    FIELD_U32(a1, 9812) = 120;
    return 9812;
  }
  else
  {
    if ( (FIELD_U8(a1, 6900) & 1) != 0 )
      v3 = (StateBase *)&unk_60CBF670;
    else
      v3 = (StateBase *)&unk_60CBF694;
    return (int)sub_60766314(a1, v3, 0);
  }
}
