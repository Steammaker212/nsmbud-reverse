/* sub_607D1438
 * address: 0x607D1438   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D1438(int a1)
{
  int *v2; // r5
  int v3; // r1

  v2 = (int *)(a1 + 11368);
  if ( (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 132))(FIELD_U32(a1, 11368), 44.0) == 1 )
  {
    SE_VOC_YS_GOKUN_ref((unsigned __int8 *)a1);
  }
  else if ( FIELD_S32(a1, 11464) >= 5 || FIELD_U8(a1, 11468) )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)*v2 + 116))(*v2) == 1 && sub_607D15F0(a1) == 1 )
    {
      v3 = FIELD_U32(a1, 1236);
      FIELD_U32(a1, 1204) &= ~0x10u;
      FIELD_U32(a1, 1236) = v3 & 0xF5FFFFFF;
      sub_60793C0C(*v2, FIELD_F32(a1, 11440));
      FIELD_U32(a1, 11428) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
    }
  }
  else if ( (*(float (__fastcall **)(int))(*(_DWORD *)*v2 + 120))(*v2) >= 45.0 )
  {
    FIELD_U32(a1, 11428) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
  }
}
