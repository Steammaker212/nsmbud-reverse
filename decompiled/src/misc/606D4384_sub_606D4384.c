/* sub_606D4384
 * address: 0x606D4384   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4384(signed int *a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r1
  signed int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v14; // r9

  v4 = FIELD_U32(ActorMgr__instance, 27180);
  v5 = sub_60008598(ActorMgr__instance, 39, FIELD_U32(ActorMgr__instance, 27172));
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)v5;
      if ( *(unsigned __int8 *)(*(_DWORD *)v5 + 28) == a2 )
        break;
      v5 = sub_60008598(ActorMgr__instance, 39, v5 + 4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    v7 = 0;
    if ( v6 )
      goto LABEL_21;
  }
LABEL_6:
  v8 = FIELD_U32(ActorMgr__instance, 27180);
  v9 = sub_60008598(ActorMgr__instance, 40, FIELD_U32(ActorMgr__instance, 27172));
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)v9;
      if ( *(unsigned __int8 *)(*(_DWORD *)v9 + 755) == a2 )
        break;
      v9 = sub_60008598(ActorMgr__instance, 40, v9 + 4);
      if ( v9 == v8 )
        goto LABEL_11;
    }
    v7 = 1;
    if ( v6 )
      goto LABEL_21;
  }
LABEL_11:
  v10 = FIELD_U32(ActorMgr__instance, 27180);
  v11 = sub_60008598(ActorMgr__instance, 41, FIELD_U32(ActorMgr__instance, 27172));
  if ( v11 != v10 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)v11;
      if ( *(unsigned __int8 *)(*(_DWORD *)v11 + 28) == a2 )
        break;
      v11 = sub_60008598(ActorMgr__instance, 41, v11 + 4);
      if ( v11 == v10 )
        goto LABEL_16;
    }
    v7 = 2;
    if ( v6 )
      goto LABEL_21;
  }
LABEL_16:
  v12 = FIELD_U32(ActorMgr__instance, 27180);
  v13 = sub_60008598(ActorMgr__instance, 42, FIELD_U32(ActorMgr__instance, 27172));
  v14 = 0;
  if ( v13 != v12 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)v13;
      if ( *(unsigned __int8 *)(*(_DWORD *)v13 + 6227) == a2 )
        break;
      v13 = sub_60008598(ActorMgr__instance, 42, v13 + 4);
      if ( v13 == v12 )
        return v14;
    }
    v7 = 3;
    if ( v6 )
    {
LABEL_21:
      v14 = v6;
      *a1 = v7;
    }
  }
  return v14;
}
