/* sub_6074AB74
 * address: 0x6074AB74   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074AB74(int a1)
{
  float *v2; // r1
  float *v3; // r0
  float v4; // s0
  float v5; // s2
  StateMethodExecuter **v6; // r5
  int v7; // r0
  int v8; // r0
  StateMethodExecuter *result; // r0
  int v10; // r2
  int v11; // r0

  v2 = (float *)(a1 + 1188);
  v3 = (float *)(a1 + 1192);
  v4 = *v2 + *v3;
  *v3 = v4;
  v5 = flt_60AF2248[FIELD_U32(a1, 936)];
  if ( v4 >= v5 )
  {
    *v3 = v4 - v5;
    v7 = FIELD_U32(a1, 656);
    if ( v7 )
      sub_607498A0(v7, 1);
    v8 = FIELD_U32(a1, 660);
    if ( v8 )
      sub_607498A0(v8, 1);
    sub_6074C0B8(a1);
    if ( sub_6074BCD4(a1) != 1 )
      return StateMgr__changeState((StateMgr *)(a1 + 1240), (StateBase *)&dword_60CBE92C);
    FIELD_U32(a1, 644) = 46;
    v6 = (StateMethodExecuter **)(a1 + 644);
    FIELD_U32(a1, 1184) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1;
  }
  else
  {
    ((void (__fastcall *)(int))loc_6074BF00)(a1);
    v6 = (StateMethodExecuter **)(a1 + 644);
  }
  result = *v6;
  if ( *v6 == (StateMethodExecuter *)15 )
  {
    v10 = FIELD_U32(a1, 1184) ^ 1;
  }
  else
  {
    if ( result != (StateMethodExecuter *)10 )
      goto LABEL_15;
    v10 = FIELD_U32(a1, 1184);
  }
  ((void (__fastcall *)(int, int, int, int))loc_6074C1C8)(a1, 1, v10, 1);
  result = *v6;
LABEL_15:
  if ( result == (StateMethodExecuter *)1 )
  {
    v11 = FIELD_U32(a1, 656);
    if ( v11 )
      sub_60749958(v11);
    result = *(StateMethodExecuter **)(a1 + 660);
    if ( result )
      return sub_60749958((int)result);
  }
  return result;
}
