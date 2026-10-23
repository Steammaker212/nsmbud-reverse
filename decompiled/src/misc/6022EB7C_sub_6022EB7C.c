/* sub_6022EB7C
 * address: 0x6022EB7C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6022EB7C(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v8; // r4
  int v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r3
  _DWORD **v12; // r0
  int v13; // r5

  v8 = (_DWORD *)operator_new(0x58u);
  sub_60220CDC((int)v8, a1, a2, a3, a4);
  v8[21] = 0;
  *v8 = off_60BD93A0;
  v9 = v8[2];
  v10 = v8[8];
  v11 = FIELD_U32(v9, 24);
  v12 = *(_DWORD ***)(v9 + 28);
  if ( v11 > v10 )
    v12 += v10;
  v13 = (int)*v12;
  ShuAnim_play(*v12, v8[7], (int)(v8 + 10));
  AnimationCtrl_setRepeat((ModelAnimation *)(v13 + 4), 0);
  FIELD_U32(v13, 20) = 0;
  FIELD_U32(v13, 28) |= 2u;
  FIELD_U32(v13, 24) = 0;
  v8[21] = v13;
  return v8;
}
