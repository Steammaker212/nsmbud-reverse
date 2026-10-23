/* sub_60549400
 * address: 0x60549400   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60549400(int a1)
{
  unsigned int v2; // r2
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r1
  int v5; // r2
  int *v6; // r1

  v2 = FIELD_U32(a1, 16436);
  v4 = (_DWORD *)(a1 + 4728);
  result = *(StateMethodExecuter **)(a1 + 4728);
  if ( v2 >= 5 )
    v2 = 0;
  v5 = *(_DWORD *)(a1 + 404 * v2 + 16448);
  if ( (v5 & 0x2000) != 0 )
  {
    if ( result == (StateMethodExecuter *)3 )
    {
      FIELD_U32(dword_60C9CFB8, 16) = FIELD_U32(a1, 18464) != 0;
      *v4 = 3;
      sub_60502694(a1 + 3700);
      v6 = &dword_60CAC480;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v6);
    }
LABEL_18:
    result = (StateMethodExecuter *)3;
    goto LABEL_19;
  }
  if ( (v5 & 0x140) != 0 )
  {
    v6 = &dword_60CAC500;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v6);
  }
  if ( (v5 & 0x10080) != 0 )
  {
    v6 = &dword_60CAC520;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v6);
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( result != (StateMethodExecuter *)3 )
      return result;
    goto LABEL_16;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( result == (StateMethodExecuter *)3 )
      return result;
    goto LABEL_18;
  }
  result = (StateMethodExecuter *)((char *)result - 1);
  if ( (unsigned int)result > 1 )
    return result;
LABEL_16:
  result = 0;
LABEL_19:
  *v4 = result;
  return result;
}
