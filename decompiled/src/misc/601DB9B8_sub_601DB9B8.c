/* sub_601DB9B8
 * address: 0x601DB9B8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DB9B8(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  unsigned int v6[3]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v7[64]; // [sp+10h] [bp-40h] BYREF

  v2 = operator_new(0x10u);
  FIELD_U32(a1, 268) = sub_60794D48(v2, 4, 1, 1, 1);
  FIELD_U32(a1, 128) = 1036831949;
  FIELD_U32(a1, 132) = 1036831949;
  FIELD_U32(a1, 136) = 1036831949;
  v3 = FIELD_U32(a1, 180);
  v4 = FIELD_U32(a1, 184);
  v6[0] = FIELD_U32(a1, 176);
  v6[1] = v3;
  v6[2] = v4;
  sub_601927EC((int)v7, (float *)(a1 + 128), v6, (_DWORD *)(a1 + 80));
  ((void (__fastcall *)(_DWORD, _BYTE *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 268) + 4), v7);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 268) + 4));
  FIELD_U32(a1, 212) = 1116471296;
  StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8AFC8);
  return 1;
}
