/* sead__TreeNode__detachAll
 * address: 0x608DF2E0   size: 172   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__TreeNode__detachAll(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r1
  int result; // r0

  v2 = *a1;
  if ( v2 && *(_DWORD **)(v2 + 4) == a1 )
  {
    FIELD_U32(v2, 4) = a1[2];
    v3 = a1 + 3;
    v5 = a1[2];
    if ( !v5 )
      goto LABEL_10;
LABEL_9:
    FIELD_U32(v5, 12) = a1[3];
    a1[2] = 0;
    goto LABEL_10;
  }
  v3 = a1 + 3;
  v4 = a1[3];
  if ( v4 )
    FIELD_U32(v4, 8) = a1[2];
  v5 = a1[2];
  if ( v5 )
    goto LABEL_9;
  if ( *a1 )
    *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 12) = *v3;
LABEL_10:
  *v3 = 0;
  *a1 = 0;
  result = sub_608DF38C(a1);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return result;
}
