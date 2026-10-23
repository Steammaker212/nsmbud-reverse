/* SE_SYS_PAGE_ref_4D95CC
 * address: 0x604D95CC   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4D95CC(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r3
  StateBase *v6; // r1
  int v7; // r0
  StateBase *v8; // r1
  int v9; // r3
  bool v10; // zf
  int v11; // r0

  v2 = 0;
  if ( FIELD_U8(a1, 4734) )
    return v2;
  FIELD_U8(a1, 4735) = 0;
  v3 = a1 + 3692;
  v4 = FIELD_U32(a1, 12876);
  if ( (v4 & 0x2000) != 0 )
  {
    v5 = FIELD_U32(a1, 4720);
    switch ( v5 )
    {
      case 2:
        FIELD_U32(a1, 4720) = 1;
        break;
      case 1:
        sub_60502694(v3);
        v6 = (StateBase *)&unk_60CA4158;
        goto LABEL_25;
      case 0:
        sub_60502694(v3);
        v6 = (StateBase *)&unk_60CA4198;
LABEL_25:
        StateMgr__changeState((StateMgr *)(a1 + 20), v6);
        return 1;
    }
  }
  if ( (v4 & 0x4000) != 0 )
  {
    FIELD_U32(a1, 4720) = 0;
    sub_60502694(v3);
    v6 = (StateBase *)&unk_60CA4198;
    goto LABEL_25;
  }
  v7 = FIELD_U32(a1, 12884) | v4;
  if ( (v7 & 0x100) != 0 )
  {
    if ( FIELD_S32(a1, 13276) >= 1 )
      goto LABEL_15;
  }
  else if ( (v7 & 0x10000) != 0 && FIELD_S32(a1, 13276) <= 1 )
  {
    goto LABEL_12;
  }
  v2 = 0;
  v9 = FIELD_U32(a1, 4720);
  if ( v9 == 2 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v11 = 1;
      goto LABEL_33;
    }
    if ( (v7 & 0x40) == 0 )
    {
      if ( (v7 & 0x80) != 0 && FIELD_U32(a1, 13276) != 2 )
      {
LABEL_12:
        v2 = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
        v8 = (StateBase *)&unk_60CA4218;
LABEL_16:
        StateMgr__changeState((StateMgr *)(a1 + 20), v8);
        return v2;
      }
      return v2;
    }
    if ( !FIELD_U32(a1, 13276) )
      return v2;
LABEL_15:
    v2 = 1;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
    v8 = (StateBase *)&unk_60CA41B8;
    goto LABEL_16;
  }
  v10 = v9 == 1;
  if ( v9 != 1 )
    v10 = v9 == 0;
  if ( v10 && (v4 & 0x10) != 0 )
  {
    v11 = 2;
LABEL_33:
    FIELD_U32(a1, 4720) = v11;
  }
  return v2;
}
