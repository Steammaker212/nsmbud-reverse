/* sub_606B0CCC
 * address: 0x606B0CCC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606B0CCC(_DWORD *a1, int *a2, int a3, char a4, _DWORD *a5, int a6)
{
  int v7; // r12
  int v8; // r0
  int v9; // r1
  State *v10; // r1

  a1[39] = -1;
  a1[9] = *a5;
  a1[10] = a5[1];
  a1[11] = a5[2];
  a1[48] = a6;
  v7 = *a2;
  a1[3] = *a2;
  v8 = a2[1];
  a1[4] = v8;
  v9 = a2[2];
  a1[5] = v9;
  *a1 = v7;
  a1[1] = v8;
  a1[2] = v9;
  a1[18] = a3;
  *((_BYTE *)a1 + 76) = a4;
  a1[14] = 0;
  a1[15] = 0;
  a1[20] = 0;
  a1[32] = 0;
  *((_BYTE *)a1 + 84) = 0;
  a1[47] = 0;
  a1[46] = 0;
  a1[45] = 0;
  a1[44] = 0;
  a1[43] = 0;
  a1[22] = 1065353216;
  a1[12] = 0;
  a1[17] = 0;
  *((_BYTE *)a1 + 137) = 0;
  a1[35] = 0;
  if ( MovementHandler_findMovementController((MovementHandler *)a1) )
    v10 = &MovementHandler_StateID_Linked;
  else
    v10 = &MovementHandler_StateID_FindController;
  return StateMgr__changeState((StateMgr *)(a1 + 58), &FIELD_U32(v10, 0x0));
}
