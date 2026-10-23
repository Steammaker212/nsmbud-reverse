/* sub_6002CD78
 * address: 0x6002CD78   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002CD78(int a1)
{
  int result; // r0
  unsigned int v3; // r1

  sub_6002C728(a1);
  result = 7316;
  v3 = FIELD_U32(a1, 7316);
  if ( v3 )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C7FD98);
  }
  return result;
}
