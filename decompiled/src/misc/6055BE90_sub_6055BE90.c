/* sub_6055BE90
 * address: 0x6055BE90   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055BE90(int a1, int a2)
{
  int v3; // r0
  int a5[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 13308) = 1;
  FIELD_U8(a1, 13310) = a2;
  if ( a2 == 1 )
    v3 = InOutR_InOutL_ref(0);
  else
    v3 = InOutR_InOutL_ref(1);
  a5[0] = (int)&sead__SafeStringBase__vtable;
  a5[1] = v3;
  sub_60473DE4((_DWORD *)(a1 + 36), 0, a5, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3548) + 104))(**(_DWORD **)(a1 + 3548));
  sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CADC14);
}
