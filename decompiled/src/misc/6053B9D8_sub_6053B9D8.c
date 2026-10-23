/* sub_6053B9D8
 * address: 0x6053B9D8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053B9D8(int a1)
{
  int v2; // r1
  int v3; // r0
  int *v4; // r5
  int v5; // r6
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 16712);
  FIELD_U32(a1, 16708) = v2;
  v4 = (int *)(a1 + 83520);
  v3 = FIELD_U32(a1, 83520);
  if ( (unsigned int)(v2 - 1) > 2 )
  {
    v5 = 0;
    if ( v3 == 1 )
    {
      v5 = 0;
      sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 0);
    }
  }
  else
  {
    if ( v3 == 1 )
      goto LABEL_7;
    sub_604742D0((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 1.0, 0);
    v5 = 1;
  }
  *v4 = v5;
LABEL_7:
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 12092, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CAB754);
  return result;
}
