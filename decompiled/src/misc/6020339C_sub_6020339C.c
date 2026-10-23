/* sub_6020339C
 * address: 0x6020339C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020339C(int a1)
{
  float v2; // s2
  float v3; // s0
  int result; // r0
  unsigned int v5; // r1
  int v6; // r1
  int *v7; // r3
  int v8; // r1
  int v9; // r0
  float v10; // r1
  int *v11; // r2

  v2 = FIELD_F32(a1, 80);
  v3 = FIELD_F32(a1, 536);
  result = FIELD_U32(a1, 352);
  if ( result )
  {
    if ( v2 <= v3 || (float)(v2 - FIELD_F32(a1, 200)) > v3 )
      return result;
  }
  else if ( v2 >= v3 || (float)(v2 + FIELD_F32(a1, 200)) < v3 )
  {
    return result;
  }
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C438);
  FIELD_U32(a1, 248) = FIELD_U32(a1, 496);
  result = FIELD_U32(a1, 584);
  v5 = result + 1;
  FIELD_U32(a1, 584) = result + 1;
  if ( result + 1 <= 1 )
  {
    if ( v5 >= 2 )
      v5 = 0;
    v6 = dword_60C8C5E4 + 4 * v5;
    v7 = (int *)(v6 + 44);
    if ( !FIELD_U32(a1, 352) )
      v7 = (int *)(v6 + 36);
    v8 = *v7;
    FIELD_U32(a1, 488) = 2;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = v8;
    v9 = sub_601DFFE4(a1 + 488);
    v10 = FIELD_F32(v9, 72);
    FIELD_F32(a1, 536) = v10;
    FIELD_U32(a1, 540) = FIELD_U32(v9, 76);
    FIELD_U32(a1, 544) = FIELD_U32(v9, 80);
    result = FIELD_U32(a1, 352);
    v11 = dword_602034B0;
    if ( !result )
      v11 = &dword_602034B0[1];
    FIELD_F32(a1, 536) = v10 + *(float *)v11;
  }
  return result;
}
