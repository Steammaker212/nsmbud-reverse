/* sub_603CDD40
 * address: 0x603CDD40   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CDD40(int a1)
{
  int *v2; // r5
  int v3; // r0
  int result; // r0
  _DWORD *v5; // r4
  unsigned int v6; // t1

  v2 = (int *)(a1 + 6108);
  if ( !sub_603CDE40(a1) )
    goto LABEL_4;
  v3 = *v2;
  if ( *v2 < 0 )
  {
    v6 = FIELD_U32(a1, 6104);
    v5 = (_DWORD *)(a1 + 6104);
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
    if ( result )
      return result;
    *v5 = 0;
    result = 10;
    goto LABEL_7;
  }
  if ( FIELD_U32(a1, 6104)
    || (!v3 || (result = v3 - 1, (*v2 = result) == 0)) && (result = sub_603CE08C(a1), result == 1) )
  {
LABEL_4:
    result = -1;
LABEL_7:
    *v2 = result;
  }
  return result;
}
