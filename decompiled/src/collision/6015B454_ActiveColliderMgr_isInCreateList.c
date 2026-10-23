/* ActiveColliderMgr_isInCreateList
 * address: 0x6015B454   size: 56   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ActiveColliderMgr_isInCreateList(_DWORD *a1, ActiveCollider *a2)
{
  _BOOL4 result; // r0

  result = 1;
  if ( !FIELD_U32(a2, 0x1C).next && !FIELD_U32(a2, 0x1C).prev )
    return a1[8] == (_DWORD)&FIELD_U32(a2, 0x1C);
  return result;
}
