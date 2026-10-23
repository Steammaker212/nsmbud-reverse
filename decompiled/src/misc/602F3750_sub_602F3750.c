/* sub_602F3750
 * address: 0x602F3750   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F3750(_BYTE *a1)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r1

  result = 0x96E364u;
  v3 = 1;
  a1[68] = 0;
  *a1 = 0;
  do
  {
    v4 = *(_DWORD *)&a1[4 * v3];
    if ( v4 )
    {
      result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( result )
        FIELD_U8(result, 19) = 1;
      *(_DWORD *)&a1[4 * v3] = 0;
    }
    ++v3;
  }
  while ( v3 != 13 );
  return result;
}
