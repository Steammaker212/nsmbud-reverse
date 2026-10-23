/* sub_603AC2C0
 * address: 0x603AC2C0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AC2C0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5

  sub_603AD914(a1, 1);
  sub_603ADA8C(a1, 1);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 4), 0);
  FIELD_U8(a1, 6684) = 1;
  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 != (*(int (**)(void))(dword_60C97B8C + 8))() )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v4 != (*(int (**)(void))(dword_60C97B6C + 8))() )
    {
      v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
      if ( v5 != (*(int (**)(void))(dword_60C97B4C + 8))() )
      {
        v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
        if ( v6 != (*(int (**)(void))(dword_60C97BAC + 8))() )
          FIELD_U32(a1, 6896) = 3;
      }
    }
  }
  FIELD_U32(a1, 6648) = 1;
  FIELD_U32(a1, 6920) = 0;
  FIELD_U32(a1, 6680) = 30;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  return 6680;
}
