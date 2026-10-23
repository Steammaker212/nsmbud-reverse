/* sub_60154550
 * address: 0x60154550   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60154550(int a1)
{
  unsigned int v2; // r1
  unsigned int *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v3 = (unsigned int *)(a1 + 5532);
  v2 = FIELD_U32(a1, 5532);
  if ( !v2 )
    goto LABEL_11;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( !v4 || FIELD_U8(v4, 19) )
  {
    if ( *v3 )
    {
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
      if ( v5 )
      {
        if ( !FIELD_U8(v5, 19) )
        {
          *v3 = 0;
          v6 = sub_6014A2B8(a1 + 5416);
          if ( v6 )
          {
            *(_DWORD *)(v6 + 4 * *(char *)(FIELD_U32(a1, 2196) + 84) + 352) = 0;
            sub_60165934(v6, a1);
          }
        }
      }
    }
LABEL_11:
    JUMPOUT(0x60154628);
  }
  return 1;
}
