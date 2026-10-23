/* sub_604F1B18
 * address: 0x604F1B18   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F1B18(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 74476);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 42504));
    sub_6050229C(a1 + 46088);
    sub_6050A8A4(a1 + 48908);
    sub_60473B58((_DWORD *)(a1 + 42520), 0xEu, 0);
    sub_604F1C08(a1);
    sub_60402E34(a1 + 56124);
    sub_6074EED0(a1 + 74052);
    sub_60402E34(a1 + 59112);
    sub_6074EED0(a1 + 74096);
    sub_60402E34(a1 + 62100);
    sub_6074EED0(a1 + 74140);
    sub_60402E34(a1 + 65088);
    sub_6074EED0(a1 + 74184);
    sub_60402E34(a1 + 68076);
    sub_6074EED0(a1 + 74228);
    sub_60402E34(a1 + 71064);
    return sub_6074EED0(a1 + 74272);
  }
  return result;
}
