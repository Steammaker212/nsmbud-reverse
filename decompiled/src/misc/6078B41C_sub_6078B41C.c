/* sub_6078B41C
 * address: 0x6078B41C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6078B41C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  _BOOL4 result; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r0

  v2 = a1[8];
  if ( !v2 )
    goto LABEL_5;
  v3 = sub_607C70B0(a1[8]);
  if ( !v3 )
    v3 = v2;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 7104));
  result = 1;
  if ( !v4 )
  {
LABEL_5:
    v6 = a1[9];
    if ( !v6 )
      goto LABEL_9;
    v7 = sub_607C70B0(a1[9]);
    if ( !v7 )
      v7 = v6;
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v7, 7104));
    result = 1;
    if ( !v8 )
    {
LABEL_9:
      v9 = a1[10];
      if ( !v9 )
        goto LABEL_13;
      v10 = sub_607C70B0(a1[10]);
      if ( !v10 )
        v10 = v9;
      v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v10, 7104));
      result = 1;
      if ( !v11 )
      {
LABEL_13:
        v12 = a1[11];
        if ( v12 )
        {
          v13 = sub_607C70B0(v12);
          if ( !v13 )
            v13 = v12;
          return ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v13, 7104)) != 0;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
