/* SE_SYS_CURSOR_ref
 * address: 0x604881DC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CURSOR_ref(int a1)
{
  unsigned int v2; // r1
  unsigned int *v3; // r5
  StateMethodExecuter *result; // r0
  unsigned int v5; // r3
  unsigned int v6; // r1
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r1
  int v10; // r0
  StateBase *v11; // r1
  _BYTE v12[20]; // [sp+4h] [bp-14h] BYREF

  v3 = (unsigned int *)(a1 + 14228);
  v2 = FIELD_U32(a1, 14228);
  result = 0;
  if ( v2 >= 4 )
    v2 = 0;
  if ( !*(_BYTE *)(*(_DWORD *)(a1 + 4 * v2 + 47800) + 64) )
  {
    v5 = *v3;
    v6 = *v3;
    if ( *v3 >= 4 )
      v6 = 0;
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v6 + 47800) + 52) - *(_DWORD *)(*(_DWORD *)(a1 + 4 * v6 + 47800) + 44);
    v8 = v7;
    if ( v7 >= 5 )
      v8 = 5;
    if ( v7 < 0 )
      v8 = 0;
    if ( v8 >= 6 )
      v8 = 0;
    if ( v5 >= 4 )
      v5 = 0;
    v9 = dword_60C9FF70[6 * v5 + v8];
    if ( v9 >= 0x18 )
      v9 = 0;
    if ( *v3 < 4 )
      result = (StateMethodExecuter *)*v3;
    if ( FIELD_U32(a1, 4796) == *(_DWORD *)(a1 + 96 * (_DWORD)result + 4 * v9 + 5876) )
      sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
    v10 = 1;
    v12[0] = 1;
    v12[1] = 1;
    if ( *v3 != 3 )
    {
      if ( *v3 )
        goto LABEL_24;
      v10 = 0;
    }
    *(_BYTE *)((unsigned int)v12 | v10) = 0;
LABEL_24:
    sub_6048FEE8(a1, v12);
    if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
      v11 = (StateBase *)&unk_60C9F4A0;
    else
      v11 = &stru_60C9F4C0;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v11);
  }
  return result;
}
