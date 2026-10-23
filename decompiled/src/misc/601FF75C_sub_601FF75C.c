/* sub_601FF75C
 * address: 0x601FF75C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FF75C(int a1)
{
  sub_601E80B8(dword_60C8B144);
  sub_600087D8((void *)ActorMgr__instance);
  sub_601A0134(dword_60C89E00);
  if ( FIELD_U8(dword_60CC6D78, 20) )
  {
    sub_6021BD48(dword_60C8D408);
  }
  else if ( sub_6021C540(dword_60C8D408) == 1
         && !FIELD_U8(dword_60C8C188, 3224)
         && !FIELD_U8(dword_60C8C188, 3225) )
  {
    ((void (__fastcall *)(int))loc_6021AA74)(dword_60C8D408);
  }
  sub_601A2AEC(dword_60C89E18);
  if ( FIELD_U8(a1, 3226) )
  {
    FIELD_U8(a1, 3226) = 0;
    FIELD_U8(a1, 3225) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 228), &stru_60C8C1B0);
  }
  return sub_60238B84(dword_60C8D9DC, 0);
}
