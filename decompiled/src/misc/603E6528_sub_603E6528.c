/* sub_603E6528
 * address: 0x603E6528   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E6528(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r0

  sub_6077A44C(dword_60CBFA90);
  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
    FIELD_U32(v3, 1236) &= ~2u;
  v4 = v2[9];
  if ( v4 )
    FIELD_U32(v4, 1236) &= ~2u;
  v5 = v2[10];
  if ( v5 )
    FIELD_U32(v5, 1236) &= ~2u;
  v6 = v2[11];
  if ( v6 )
    FIELD_U32(v6, 1236) &= ~2u;
  sub_605E99E4(dword_60CB1BE4);
  return StateMgr__changeState((StateMgr *)(a1 + 76), (StateBase *)&dword_60C99600);
}
