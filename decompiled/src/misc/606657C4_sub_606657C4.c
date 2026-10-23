/* sub_606657C4
 * address: 0x606657C4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606657C4(_DWORD *a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int *v7; // r1
  StateMgr *v8; // r0

  a1[1806] = 1;
  lift_spin_kinoko_ref(a1);
  a1[1912] = a1[5] >> 28;
  ((void (__fastcall *)(_DWORD *))loc_60663F70)(a1);
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1149239296;
  a1[126] = 1157627904;
  a1[127] = 1140850688;
  a1[128] = 1140850688;
  a1[129] = 1135083520;
  a1[130] = 1135083520;
  a1[131] = 1140850688;
  a1[132] = 1140850688;
  a1[1913] = 0;
  v2 = a1[1912];
  v3 = FIELD_U32(ActorMgr__instance, 27180);
  v4 = sub_60008598(ActorMgr__instance, 197, FIELD_U32(ActorMgr__instance, 27172));
  if ( v4 == v3 )
    goto LABEL_7;
  while ( 1 )
  {
    v5 = *(_DWORD *)v4;
    if ( *(unsigned __int8 *)(*(_DWORD *)v4 + 7336) == v2 )
      break;
    v4 = sub_60008598(ActorMgr__instance, 197, v4 + 4);
    if ( v4 == v3 )
      goto LABEL_7;
  }
  if ( !v5 )
  {
LABEL_7:
    v8 = (StateMgr *)(a1 + 1521);
    v7 = &dword_60CB6BAC;
  }
  else
  {
    v6 = FIELD_U32(v5, 8);
    v7 = &dword_60CB6AF8;
    a1[1913] = v6;
    v8 = (StateMgr *)(a1 + 1521);
  }
  StateMgr__changeState(v8, (StateBase *)v7);
  sub_606643DC((int)a1);
  return 1;
}
