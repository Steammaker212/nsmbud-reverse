/* SE_SYS_BACK_ref_4B5D90
 * address: 0x604B5D90   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4B5D90(int a1)
{
  int result; // r0
  StateMgr *v3; // r0
  int v4; // r0

  FIELD_U32(a1, 3780) = 4;
  result = FIELD_U32(a1, 3652);
  if ( !result )
    return result;
  if ( FIELD_U8(result, 1042) )
  {
    FIELD_U32(a1, 3780) = 0;
    return 0;
  }
  if ( FIELD_U8(result, 1046) )
  {
    FIELD_U32(a1, 3780) = 1;
    return 1;
  }
  if ( sub_604B6DDC() == 1 )
  {
    if ( (FIELD_U8(a1, 3764) & 2) == 0 )
      FIELD_U8(a1, 3778) = 1;
    StateMgr__changeState((StateMgr *)(a1 + 3748), (StateBase *)&dword_60CA1DB8);
    FIELD_U32(a1, 3780) = 3;
    return 3;
  }
  if ( sub_604B6400(a1) == 1 && sub_6047F384(a1 + 3792, 0x4000) )
  {
    sub_60478680((int)"SE_SYS_BACK", 9);
    v3 = (StateMgr *)(a1 + 3748);
LABEL_17:
    StateMgr__changeState(v3, (StateBase *)&dword_60CA1DB8);
    v4 = FIELD_U32(a1, 3652);
    if ( v4 )
      sub_604B74B0(v4, 0);
    FIELD_U32(a1, 3780) = 2;
    return 2;
  }
  if ( (FIELD_U8(a1, 3764) & 1) != 0 )
  {
    v3 = (StateMgr *)(a1 + 3748);
    goto LABEL_17;
  }
  if ( sub_6047F384(a1 + 3792, 0x2000) )
    return sub_604B70B8(FIELD_U32(a1, 3652));
  if ( sub_6047F384(a1 + 3792, 64) )
    return sub_604B70BC(FIELD_U32(a1, 3652));
  result = sub_6047F384(a1 + 3792, 128);
  if ( result == 1 )
    return sub_604B71E0(FIELD_U32(a1, 3652));
  return result;
}
