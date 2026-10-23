/* ActiveColldierMgr_removeFromList3
 * address: 0x6015B48C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall ActiveColldierMgr_removeFromList3(ActiveColliderMgr *result, int a2)
{
  ActiveColliderNode *v2; // r3
  int v3; // r2
  ActiveColliderNode *v4; // r12
  ActiveColliderNode **p_first; // lr
  ActiveColliderNode **p_last; // r0
  ActiveColliderNode *last; // t1

  v2 = *(ActiveColliderNode **)(a2 + 44);
  v3 = FIELD_U32(a2, 48);
  v4 = (ActiveColliderNode *)(a2 + 40);
  if ( v2 )
  {
    if ( !v3 )
      goto LABEL_9;
LABEL_5:
    p_first = (ActiveColliderNode **)(v3 + 4);
    goto LABEL_6;
  }
  if ( v3 )
    goto LABEL_5;
  if ( FIELD_U32(result, 0x2C) != v4 )
    return result;
LABEL_9:
  p_first = &FIELD_U32(result, 0x2C);
  if ( FIELD_U32(result, 0x2C) != v4 )
  {
    if ( v2 )
      goto LABEL_11;
LABEL_13:
    last = FIELD_U32(result, 0x30);
    p_last = &FIELD_U32(result, 0x30);
    if ( last != v4 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_6:
  *p_first = v2;
  v2 = *(ActiveColliderNode **)(a2 + 44);
  if ( !v2 )
    goto LABEL_13;
LABEL_11:
  p_last = &FIELD_U32(v2, 0x8);
LABEL_12:
  *p_last = *(ActiveColliderNode **)(a2 + 48);
LABEL_14:
  FIELD_U32(a2, 44) = 0;
  FIELD_U32(a2, 48) = 0;
  return 0;
}
