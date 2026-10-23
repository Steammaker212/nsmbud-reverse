/* sub_6081B908
 * address: 0x6081B908   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6081B908(int a1, int a2, char a3)
{
  int v6; // r7
  unsigned int v7; // r0
  char v8; // r1
  int MethodTreeMgr_const; // r0
  int v10; // r5
  void (__fastcall ***v11)(_DWORD, int, int); // r0

  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 92) + 156)
                             + 4 * *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 92) + 156) + 88)
                             + 68)
                 + 36);
  if ( !v6
    || (v7 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v6 + 64))(
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 92) + 156)
                                     + 4 * *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 92) + 156) + 88)
                                     + 68)
                         + 36),
               4),
        v8 = 0,
        v7 <= 0x2400000) )
  {
    v6 = sub_60819C38(dword_60CC6BF4, 37748736);
    v8 = 1;
  }
  FIELD_U8(a1, 276) = v8;
  if ( dword_60C9CF18 )
    sub_604574C8(dword_60C9CF18, 2, 1);
  sub_60817D54(dword_60CC6B68);
  FIELD_U32(a1, 272) = operator_new_8DE2C8(0x2400000u, v6, 4);
  FIELD_U8(a1, 284) = a3;
  FIELD_U32(a1, 280) = a2;
  FIELD_U32(a1, 264) = 1;
  FIELD_U8(a1, 268) = 0;
  MethodTreeMgr_const = sead__TaskBase__getMethodTreeMgr_const(a1);
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)MethodTreeMgr_const + 20))(MethodTreeMgr_const, 1);
  sead__MethodTreeNode__lock(v10);
  v11 = *(void (__fastcall ****)(_DWORD, int, int))(v10 + 72);
  if ( v11 )
    (**v11)(v11, v10, 3);
  FIELD_U32(v10, 68) = 3;
  sead__MethodTreeNode__unlock(v10);
  FIELD_U8(a1, 285) = sub_60818328();
  nullsub_64();
}
