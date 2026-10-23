/* sub_607AEE9C
 * address: 0x607AEE9C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607AEE9C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_U32(a1, 1208);
  FIELD_U32(a1, 1208) = v2 & 0xFFBFFFFF;
  if ( (v2 & 0x100000) != 0 )
    sub_6079F46C(a1);
  v3 = FIELD_U32(a1, 6900);
  if ( (v3 & 0x100000) != 0 )
    FIELD_U32(a1, 1228) &= ~0x20000u;
  if ( (v3 & 0x40000) != 0 && (FIELD_U8(a1, 6914) & 4) == 0 )
    ((void (__fastcall *)(int))loc_607BC154)(a1);
  if ( FIELD_U32(a1, 1320) != 4 && !sub_6079DB30(a1) )
    return (_DWORD *)Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  v4 = FIELD_U32(a1, 9940);
  if ( v4 == 1 )
  {
    target = 0;
    v6 = 0x2000000;
    moveValueTo((int *)(a1 + 12676), &target, &v6);
    FIELD_U32(a1, 160) += FIELD_U32(a1, 12676);
    if ( !sub_6075FC38(a1)
      && (!FIELD_U32(a1, 9944) || sub_60793CA8(FIELD_U32(a1, 11360)) || FIELD_F32(a1, 88) != 0.0) )
    {
      Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
    }
  }
  else if ( !v4 )
  {
    ((void (__fastcall *)(int))loc_607AF000)(a1);
  }
  return sub_6076FD74((_DWORD *)a1);
}
