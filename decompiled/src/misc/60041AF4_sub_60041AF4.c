/* sub_60041AF4
 * address: 0x60041AF4   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60041AF4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r0
  int *v6; // r5
  _DWORD *v7; // r5
  _DWORD *v8; // r6
  __int64 v9; // kr00_8
  _DWORD *v10; // r7
  __int64 v11; // kr08_8
  __int64 v12; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C800E4 + 8))();
  if ( v3 != result )
    return result;
  result = FIELD_U32(a1, 11480);
  if ( result < 15 )
    return result;
  result = sub_60047BDC(a1);
  if ( result != 1 )
    return result;
  FIELD_U32(a1, 11480) = 0;
  ((void (__fastcall *)(int))loc_600476D0)(a1);
  if ( FIELD_U8(a1, 11687) )
  {
    v6 = (int *)(a1 + 11520);
    v5 = FIELD_U32(a1, 11520);
    switch ( v5 )
    {
      case 2:
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80208);
        FIELD_U8(a1, 11687) = 0;
        ++FIELD_U32(a1, 11524);
        break;
      case 1:
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80188);
        break;
      case 0:
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C802A8);
        break;
    }
    result = *v6 + 1;
    *v6 = result;
    return result;
  }
  v7 = (_DWORD *)(a1 + 11524);
  if ( FIELD_S32(a1, 11524) >= 2 )
  {
    *v7 = 0;
    ++FIELD_U32(a1, 11528);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80188);
  }
  v8 = (_DWORD *)(a1 + 11528);
  if ( FIELD_S32(a1, 11528) >= 2 )
  {
    *v8 = 0;
    v9 = 10LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    if ( FIELD_F32(a1, 11604) >= FIELD_F32(a1, 11180) && FIELD_F32(a1, 11608) <= FIELD_F32(a1, 11288)
      || HIDWORD(v9) < 4
      || !FIELD_U8(a1, 11692) )
    {
      ++FIELD_U32(a1, 11532);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C802A8);
    }
    goto LABEL_16;
  }
  v10 = (_DWORD *)(a1 + 11532);
  if ( FIELD_S32(a1, 11532) >= 2 )
  {
    *v10 = 0;
    v11 = 10LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    if ( FIELD_F32(a1, 11604) >= FIELD_F32(a1, 11180) && FIELD_F32(a1, 11608) <= FIELD_F32(a1, 11288)
      || HIDWORD(v11) < 4
      || !FIELD_U8(a1, 11692) )
    {
      ++*v8;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80188);
    }
LABEL_16:
    ++*v7;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80208);
  }
  v12 = 10LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  LODWORD(v12) = 2;
  if ( HIDWORD(v12) > 2 )
    LODWORD(v12) = 1;
  if ( HIDWORD(v12) > 5 )
    LODWORD(v12) = 0;
  if ( FIELD_F32(a1, 11604) >= FIELD_F32(a1, 11180) && FIELD_F32(a1, 11608) <= FIELD_F32(a1, 11288) )
    goto LABEL_42;
  if ( !FIELD_U8(a1, 11692) )
    LODWORD(v12) = 2;
  if ( (_DWORD)v12 == 2 )
  {
LABEL_42:
    ++*v10;
    *v8 = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C802A8);
  }
  else if ( (unsigned __int8)v12 == 1 )
  {
    ++*v8;
    *v7 = 0;
    *v10 = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80188);
  }
  else
  {
    ++*v7;
    *v8 = 0;
    *v10 = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80208);
  }
}
