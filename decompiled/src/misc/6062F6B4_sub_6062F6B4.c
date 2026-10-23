/* sub_6062F6B4
 * address: 0x6062F6B4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062F6B4(int a1)
{
  int v2; // r0
  StateMethodExecuter **v3; // r5
  StateMethodExecuter *result; // r0
  int *v5; // r7
  int v6; // r10
  int v7; // r11
  int v8; // r9
  int v9; // r8
  int v10; // r0

  v3 = (StateMethodExecuter **)(a1 + 6120);
  v2 = FIELD_U32(a1, 6120);
  if ( !v2 || (result = (StateMethodExecuter *)(v2 - 1), (*v3 = result) == 0) )
  {
    v5 = (int *)(a1 + 6112);
    v6 = FIELD_U32(a1, 6112);
    v7 = FIELD_U32(a1, 6108);
    v8 = *((_DWORD *)&unk_60C125DC + 3 * FIELD_U32(a1, 6128));
    v9 = *((_DWORD *)&unk_60C125DC + 3 * FIELD_U32(a1, 6128) + 2);
    if ( sub_6062FCAC(a1) == 1 )
      sub_6062FA08(a1, v9 + 12 * v7 * v8 + 12 * v6);
    v10 = *v5 + 1;
    *v5 = v10;
    if ( v10 >= v8 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB40A8);
    }
    else
    {
      result = *(StateMethodExecuter **)(v9 + 12 * FIELD_U32(a1, 6108) * v8 + 12 * v10 + 4);
      *v3 = result;
    }
  }
  return result;
}
