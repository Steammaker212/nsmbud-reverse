/* sub_605CB3D4
 * address: 0x605CB3D4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CB3D4(int a1, int a2, __int16 a3)
{
  int v3; // r3
  unsigned int v4; // r1
  int *v5; // r0
  int v6; // t1

  FIELD_U32(a1, 80) = FIELD_U32(a2, 80);
  v3 = 0;
  v4 = FIELD_U8(a2, 84);
  if ( v4 < 4 )
    v3 = (char)v4;
  *(_WORD *)(a1 + 2 * v3 + 6128) = a3;
  FIELD_F32(a1, 120) = 2.5 * (float)byte_60B057DC[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = -1077936128;
  FIELD_U32(a1, 128) = 0;
  v6 = FIELD_U32(a1, 6124);
  v5 = (int *)(a1 + 6124);
  *v5 = v6 | 0x18;
  return StateMgr__changeState((StateMgr *)(v5 - 10), &stru_60CB0D48);
}
