/* sub_605F84F8
 * address: 0x605F84F8   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F84F8(int a1, int a2)
{
  int v2; // r6
  int result; // r0
  int v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r1
  int v9; // r2
  int (__fastcall *v10)(int, int, int); // r3
  int v11; // r0
  int ProfileId; // r0

  v2 = FIELD_U32(a2, 64);
  result = FIELD_U8(v2, 533);
  if ( result != 1 )
    return result;
  v5 = FIELD_U32(a1, 64);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 684))(v5) == 1 )
  {
    result = sub_607A5B1C(v2);
    if ( result == 1 )
    {
      EffectData_create(921, (Vec3 *)(v5 + 108), 0, 0);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 680))(v5) )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60CB2454);
      result = FIELD_U8(a1, 110) | 2;
      FIELD_U8(a1, 110) = result;
    }
    return result;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 680))(v5) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60CB23E8 + 8))();
    if ( v7 != result )
      return result;
    result = FIELD_U32(v5, 6304);
    if ( result != 1 )
      return result;
  }
  if ( Actor__getProfileId(*(Actor **)(a1 + 64)) == 603 || Actor__getProfileId(*(Actor **)(a1 + 64)) == 604 )
  {
    v8 = FIELD_U32(a1, 64);
    v9 = 0;
    v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 672);
    v11 = v2;
LABEL_13:
    if ( v10(v11, v8, v9) != 1 )
      goto LABEL_16;
    FIELD_U32(v5, 6312) = 1;
    goto LABEL_15;
  }
  if ( Actor__getProfileId(*(Actor **)(a1 + 64)) == 608 )
  {
    v8 = FIELD_U32(a1, 64);
    v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 672);
LABEL_21:
    v11 = v2;
    v9 = 2;
    goto LABEL_13;
  }
  if ( Actor__getProfileId(*(Actor **)(a1 + 64)) == 606 || Actor__getProfileId(*(Actor **)(a1 + 64)) == 610 )
  {
    v8 = FIELD_U32(a1, 64);
    v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 672);
  }
  else
  {
    ProfileId = Actor__getProfileId(*(Actor **)(a1 + 64));
    v8 = FIELD_U32(a1, 64);
    v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 672);
    if ( ProfileId == 607 )
      goto LABEL_21;
  }
  if ( v10(v2, v8, 1) == 1 )
  {
    FIELD_U32(v5, 6312) = 1;
LABEL_15:
    FIELD_U8(a1, 110) |= 2u;
  }
LABEL_16:
  result = FIELD_U32(v5, 6312);
  if ( result )
  {
    result = FIELD_S8(v2, 84);
    FIELD_U32(v5, 6336) = result;
  }
  return result;
}
