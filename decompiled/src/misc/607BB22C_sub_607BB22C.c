/* sub_607BB22C
 * address: 0x607BB22C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB22C(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r2
  void (__fastcall *v10)(int, int (__fastcall ***)(_DWORD, int *)); // r5
  int (__fastcall ***v11)(_DWORD, int *); // r0
  void (__fastcall *v12)(int, int); // r5
  int v13; // r0
  void (__fastcall *v14)(int, int); // r6
  int (__fastcall ***v15)(_DWORD, int *); // r5
  char v16; // r12
  int v17; // r1
  int (__fastcall *v18)(int, int); // r6
  int (__fastcall ***v19)(_DWORD, int *); // r5
  char v20; // r12
  int v21; // r1

  result = sub_6076DE58();
  if ( result )
    return result;
  result = sub_60409BFC(dword_60C9A1F0);
  switch ( a2 )
  {
    case 2:
      v7 = 11400;
      FIELD_U32(a1, 11400) = 660;
      goto LABEL_16;
    case 1:
      if ( !a3 )
        return result;
      FIELD_U32(a1, 11400) = a3;
      if ( a3 < 60 )
        return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 156))(FIELD_U32(a1, 11360));
LABEL_16:
      sub_6078A894(PlayerMgr_instance, v7, v8);
      return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 156))(FIELD_U32(a1, 11360));
    case 0:
      sub_60773630(a1, 54, 0);
      FIELD_U32(a1, 11400) = 660;
      sub_6078A894(PlayerMgr_instance, 11400, v9);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 156))(FIELD_U32(a1, 11360));
      v10 = *(void (__fastcall **)(int, int (__fastcall ***)(_DWORD, int *)))(*(_DWORD *)a1 + 1212);
      v11 = sub_607B7028(a1);
      v10(a1, v11);
      v12 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1212);
      v13 = sub_6079D894(a1);
      v12(a1, v13);
      v14 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1212);
      v15 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                   ActorMgr__instance + 27168,
                                                   FIELD_U32(a1, 12996));
      if ( ((unsigned int)&dword_60C7B374 & ~(1618719556 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( v15 )
      {
        v17 = (**v15)(v15, &dword_60C7B370);
        if ( v17 )
          v17 = (int)v15;
      }
      else
      {
        v17 = 0;
      }
      v14(a1, v17);
      v18 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1212);
      v19 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                   ActorMgr__instance + 27168,
                                                   FIELD_U32(a1, 12992));
      if ( ((unsigned int)&dword_60C7B374 & ~(1618719852 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( v19 )
      {
        v21 = (**v19)(v19, &dword_60C7B370);
        if ( v21 )
          v21 = (int)v19;
      }
      else
      {
        v21 = 0;
      }
      return v18(a1, v21);
  }
  return result;
}
