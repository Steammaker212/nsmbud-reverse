/* sub_60520078
 * address: 0x60520078   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60520078(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int **v5; // r1
  int v6; // r1
  int (*v7)(void); // r1
  int a5; // [sp+0h] [bp-20h] BYREF
  const char *v10; // [sp+4h] [bp-1Ch]

  FIELD_U32(a1, 15032) = a2;
  v3 = (_DWORD *)(a1 + 40);
  FIELD_U8(a1, 13004) = 1;
  FIELD_U8(a1, 15028) = 1;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA8FDC, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  v4 = dword_60C99DD4;
  a5 = (int)&sead__SafeStringBase__vtable;
  v10 = "RecordList_Assist_00";
  sub_6047E0EC(&a5, FIELD_U32(a1, 3648), 1, FIELD_U32(dword_60C99DD4, 868));
  a5 = (int)&sead__SafeStringBase__vtable;
  v10 = "RecordList_MiniAssist_00";
  sub_6047E0EC(&a5, FIELD_U32(a1, 3652), 1, FIELD_U32(v4, 872));
  StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA9014);
  sub_60473DE4(v3, 2u, &dword_60CA8FEC, 0);
  v5 = *(int ***)(a1 + 3552);
  if ( FIELD_U32(a1, 3548) > 2u )
    v5 += 10;
  v6 = **v5;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v7 = *(int (**)(void))(v6 + 108);
  else
    v7 = *(int (**)(void))(v6 + 104);
  return v7();
}
