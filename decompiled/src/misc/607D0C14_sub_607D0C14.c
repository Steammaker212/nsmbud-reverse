/* sub_607D0C14
 * address: 0x607D0C14   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D0C14(int a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // s0

  v2 = (_DWORD *)(a1 + 11368);
  v3 = (int)(float)(9.0 - (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11368) + 120))(FIELD_U32(a1, 11368)));
  if ( v3 <= 9 )
    FIELD_U32(a1, 11448) = v3;
  if ( !sub_607D1330(a1) )
  {
    if ( (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v2 + 132))(*v2, 27.0 - 0.0) == 1 )
      FIELD_U32(a1, 1236) |= 0x800000u;
    if ( (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v2 + 132))(*v2, 10.0) == 1 )
    {
      sub_607D0F8C(a1);
    }
    else if ( (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v2 + 132))(*v2, 27.0) == 1 )
    {
      FIELD_U8(a1, 11461) = 0;
      SE_VOC_YS_GOKUN_ref((unsigned __int8 *)a1);
    }
    else if ( (*(float (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 120))(*v2) >= 28.0 )
    {
      FIELD_U32(a1, 11428) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
    }
  }
}
