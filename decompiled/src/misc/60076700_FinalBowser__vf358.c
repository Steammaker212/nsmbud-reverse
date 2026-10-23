/* FinalBowser__vf358
 * address: 0x60076700   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002689C
// 
// Overridden by: None
int __fastcall FinalBowser__vf358(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  void (__fastcall *v6)(_DWORD *, int); // r5
  int v7; // r0
  int v8; // r0
  int v9; // r7
  int v10; // r1
  int (__fastcall *v11)(_DWORD *); // r1
  int v12; // r1

  v5 = a1 + 1672;
  v4 = *a1;
  v6 = *(void (__fastcall **)(_DWORD *, int))(v4 + 732);
  v7 = (*(int (__fastcall **)(_DWORD *))(v4 + 760))(a1);
  v6(a1, v7);
  sub_602A3EFC(v5, 24);
  v8 = a1[1575];
  v9 = a1[1576];
  if ( v8 % v9 )
  {
    if ( v8 % v9 <= v9 - (*(int (__fastcall **)(_DWORD *))(*a1 + 760))(a1) )
    {
      a1[1577] = (*(int (__fastcall **)(_DWORD *))(*a1 + 780))(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 768))(a1);
      v12 = (*(int (__fastcall **)(_DWORD *))(*a1 + 760))(a1);
      return SE_VOC_KP_L_DAMAGE_ref(a1, v12);
    }
    v8 = a1[1575];
  }
  v10 = *a1;
  if ( v8 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(v10 + 812))(a1, a2);
    v11 = *(int (__fastcall **)(_DWORD *))(*a1 + 880);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, int))(v10 + 808))(a1, a2);
    v11 = *(int (__fastcall **)(_DWORD *))(*a1 + 876);
  }
  return v11(a1);
}
