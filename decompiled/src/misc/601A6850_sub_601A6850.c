/* sub_601A6850
 * address: 0x601A6850   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6850(int a1)
{
  _DWORD *v2; // r0

  FIELD_U8(a1, 368) = 5;
  sub_601A68FC(a1, 5);
  v2 = (_DWORD *)sub_601DFFE4(a1 + 300);
  FIELD_U32(a1, 372) = v2;
  FIELD_U32(a1, 80) = v2[18];
  FIELD_U32(a1, 84) = v2[19];
  FIELD_U32(a1, 88) = v2[20];
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 212) = 1135542272;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8A26C);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A14C);
  return 1;
}
