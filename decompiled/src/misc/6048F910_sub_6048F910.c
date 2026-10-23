/* sub_6048F910
 * address: 0x6048F910   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048F910(int a1)
{
  int v3; // r5
  StateBase *v4; // r1
  int v5; // r0
  int *v6; // r0
  int v7; // r1

  if ( (FIELD_U8(a1, 13829) & 0x20) != 0 )
  {
    FIELD_U32(a1, 47764) = -1;
    v3 = FIELD_U32(a1, 4796);
    sub_6048E23C(a1, 0, v3);
    sub_6048EBD4(a1, v3);
    sub_6048F09C(a1, 0, 256);
    sub_6048EE54((_DWORD *)a1, 0);
    v4 = (StateBase *)&unk_60C9F5E0;
LABEL_5:
    StateMgr__changeState((StateMgr *)(a1 + 20), v4);
    return 1;
  }
  if ( sub_6048FAA4(a1) )
    return 1;
  v5 = FIELD_U32(a1, 13836) | FIELD_U32(a1, 13828);
  if ( (v5 & 0x140) != 0 )
  {
    v6 = (int *)(a1 + 47764);
    if ( FIELD_S32(a1, 14228) >= 1 )
    {
      *v6 = -1;
      FIELD_U32(a1, 14232) = FIELD_U32(a1, 14228) - 1;
      v4 = (StateBase *)&unk_60C9F4E0;
      goto LABEL_5;
    }
    if ( *v6 == 64 )
      return 1;
    v7 = 64;
    goto LABEL_18;
  }
  if ( (v5 & 0x10080) != 0 )
  {
    v6 = (int *)(a1 + 47764);
    if ( FIELD_S32(a1, 14228) <= 2 )
    {
      *v6 = -1;
      FIELD_U32(a1, 14232) = FIELD_U32(a1, 14228) + 1;
      v4 = (StateBase *)&unk_60C9F520;
      goto LABEL_5;
    }
    if ( *v6 == 128 )
      return 1;
    v7 = 128;
LABEL_18:
    *v6 = v7;
    return 1;
  }
  if ( sub_6048FB3C(a1) )
    return 1;
  return sub_6048FD0C(a1);
}
