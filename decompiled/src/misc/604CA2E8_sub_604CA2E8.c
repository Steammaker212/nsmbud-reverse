/* sub_604CA2E8
 * address: 0x604CA2E8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA2E8(int a1)
{
  StateMethodExecuter *result; // r0
  _DWORD *v3; // r5
  int v4; // r0
  int *v5; // r1
  StateMethodExecuter *v6; // [sp+4h] [bp-14h]

  v6 = *(StateMethodExecuter **)(a1 + 89212);
  result = v6;
  if ( v6 == (StateMethodExecuter *)1 )
  {
    v5 = &dword_60CA3438;
  }
  else
  {
    if ( v6 != (StateMethodExecuter *)3 )
      return result;
    v3 = (_DWORD *)(dword_60C99DEC + 16);
    sub_603FCF98((_DWORD *)(dword_60C99DEC + 16));
    sub_603FCFD8(v3);
    v4 = dword_60C99DEC;
    FIELD_U32(a1, 21860) = -1;
    FIELD_U32(a1, 21864) = 0;
    if ( FIELD_U8(v4, 522) )
      sub_604D2AE8(a1);
    else
      sub_604D2C94(a1);
    if ( FIELD_U32(a1, 21860) == -1 )
      G_PlayerNum_00_ref_4D1C04(a1);
    else
      CourseSelectVS_Score_00_ref(a1);
    v5 = &dword_60CA3278;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
}
