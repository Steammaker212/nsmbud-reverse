/* sub_6074975C
 * address: 0x6074975C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074975C(int a1)
{
  int *v2; // r1
  int v3; // r0

  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1103101952;
  FIELD_U32(a1, 580) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE718);
  sub_60748D78(a1);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = &dword_60AF2DB4;
  else
    v2 = &dword_60AF2DB0;
  v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, *v2, FIELD_U32(ActorMgr__instance, 27172));
  if ( v3 )
    sub_6074C83C(v3, a1, FIELD_U32(a1, 80) ^ 1);
  return 1;
}
