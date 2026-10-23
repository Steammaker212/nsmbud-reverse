/* sub_6048915C
 * address: 0x6048915C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6048915C(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r1
  unsigned int v4; // t1
  int v5; // r1
  void *vtable; // r0
  StateBase *v7; // r1
  _BYTE v8[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = FIELD_U32(a1, 14228);
  result = (StateMethodExecuter *)(a1 + 14228);
  v3 = v4;
  if ( v4 >= 4 )
    v3 = 0;
  if ( !*(_BYTE *)(*(_DWORD *)(a1 + 4 * v3 + 47800) + 66) )
  {
    v5 = 1;
    v8[0] = 1;
    v8[1] = 1;
    vtable = FIELD_U32(result, 0x0);
    if ( vtable != (void *)3 )
    {
      if ( vtable )
        goto LABEL_8;
      v5 = 0;
    }
    *(_BYTE *)((unsigned int)v8 | v5) = 0;
LABEL_8:
    sub_6048FEE8(a1, v8);
    if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
      v7 = (StateBase *)&unk_60C9F4A0;
    else
      v7 = &stru_60C9F4C0;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v7);
  }
  return result;
}
